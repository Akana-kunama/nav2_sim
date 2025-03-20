import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import (
    DeclareLaunchArgument,
    LogInfo,
    OpaqueFunction,
    IncludeLaunchDescription,
    GroupAction,
)
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

def ensure_map_directory(context, *args, **kwargs):
    map_path = LaunchConfiguration('map_path').perform(context)
    # Extract the directory part from the path
    map_dir = os.path.dirname(map_path)
    if not os.path.exists(map_dir):
        os.makedirs(map_dir)
        print(f"[INFO] Created map saving directory: {map_dir}")
    else:
        print(f"[INFO] Map saving directory already exists: {map_dir}")
    return []  # OpaqueFunction requires returning a list of actions, but here we do nothing




def generate_launch_description():
    # Declare the launch arguments
    slam_params_file = LaunchConfiguration('slam_params_file')
    map_path = LaunchConfiguration('map_path')
    world_file = LaunchConfiguration('world')
    rviz_file  = LaunchConfiguration('rvizconfig')
    use_sim_time = LaunchConfiguration("use_sim_time")


    # Declare the 'slam_params_file' argument
    declare_slam_params_file = DeclareLaunchArgument(
        'slam_params_file',
        default_value=PathJoinSubstitution(
            [FindPackageShare('robot_slam'), 'config', 'slam_mapped_params.yaml']
        ),
        description='Full path to the SLAM parameters file to use'
    )

    # Define the default map saving path
    default_map_path = PathJoinSubstitution(
        [FindPackageShare("robot_slam"), 'maps', 'map_mar_19.yaml']
    )

    declare_map_file_cmd= DeclareLaunchArgument(
        'map_path',
        default_value= default_map_path ,
        description='Full path to the map YAML file'
    )


    declare_use_sim_time = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='use simulation/Gazebo clock'
    )



    declare_rviz_config_path = DeclareLaunchArgument(
        'rvizconfig',
        default_value=os.path.join(
            get_package_share_directory('robot_slam'),
            'rviz',
            'urdf_config.rviz'
        ),
        description='Absolute path to RViz config file'
    )

    # display robot and enviornment with robot display
     # Include the robot_display_launch
    robot_display_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('robot_description'),
                'launch',
                'robot_display_launch.py'
            ])
        ]),
        launch_arguments={
            'world': world_file,
            'rvizconfig':rviz_file
        }.items()
    )


    # OpaqueFunction to ensure the map saving directory exists
    ensure_map_dir_action = OpaqueFunction(function=ensure_map_directory)

    # Create the SLAM Toolbox node


    slam_toolbox_node = Node(    # node for not using saved map
        package='slam_toolbox',
        executable='async_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[slam_params_file,{'use_sim_time': use_sim_time}]
    )

    map_server_node = Node(
            package="nav2_map_server",
            executable="map_server",
            name="map_server",
            output="screen",
            parameters=[{"use_sim_time": use_sim_time, "yaml_filename": map_path}],
    )

    lifecycle_manager_node = Node(
        package="nav2_lifecycle_manager",
                executable="lifecycle_manager",
                name="lifecycle_manager_navigation",
                output="screen",
                parameters=[{
                    "use_sim_time": use_sim_time,
                    "autostart": True,
                    "node_names": [
                         "map_server",
                         ],
                }],
    )

    # Log the SLAM parameters file being used
    log_slam_params_cmd = LogInfo(
        msg=['Using SLAM parameters file: ', slam_params_file]
    )

    return LaunchDescription([
        declare_slam_params_file,
        declare_map_file_cmd,
        declare_use_sim_time,
        declare_rviz_config_path,
        
        
        ensure_map_dir_action,
        slam_toolbox_node,
        map_server_node,
        # robot_display_launch,
        log_slam_params_cmd
    ])

if __name__ == '__main__':
    generate_launch_description()