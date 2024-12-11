import os
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, LogInfo
from launch.conditions import IfCondition, UnlessCondition
from launch.substitutions import LaunchConfiguration,PathJoinSubstitution
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    # Declare the launch arguments
    slam_params_file = LaunchConfiguration('slam_params_file')
    map_saving_path = LaunchConfiguration('map_saving_path')
    map_saving_enable = LaunchConfiguration('map_saving_enable')

    slam_params_file_declare = DeclareLaunchArgument(
        'slam_params_file',
        default_value=os.path.join(
            get_package_share_directory('robot_slam'),
            'config',
            'slam_params.yaml'
        ),
        description='Full path to the SLAM parameters file to use'
    )

    default_map_path = PathJoinSubstitution(
        [get_package_share_directory("robot_slam"), 'maps', 'saved_map']
    )

    map_saving_path_declare = DeclareLaunchArgument(
        'map_saving_path',
        default_value= default_map_path ,
        description='the path to save the map'
    )


    map_saving_enable_declare = DeclareLaunchArgument(
        'map_saving_enable',
        default_value= 'true',
        description='whether to save the map or not'
    )

    # Create the SLAM Toolbox node
    slam_toolbox_node_map_saving_enabled = Node(    # node for saving map
        condition=IfCondition(map_saving_enable),
        package='slam_toolbox',
        executable='sync_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[slam_params_file,{'map_file_name':map_saving_path}]
    )

    slam_toolbox_node_map_saving_diabled = Node(    # node for not saving map
        condition=UnlessCondition(map_saving_enable),
        package='slam_toolbox',
        executable='sync_slam_toolbox_node',
        name='slam_toolbox',
        output='screen',
        parameters=[slam_params_file,{'map_file_name':''}]
    )

    # Log the SLAM parameters file being used
    log_slam_params_cmd = LogInfo(
        msg=['Using SLAM parameters file: ', slam_params_file]
    )

    return LaunchDescription([
        default_map_path,
        slam_params_file_declare,
        map_saving_path_declare,
        map_saving_enable_declare,
        slam_toolbox_node_map_saving_enabled,
        slam_toolbox_node_map_saving_diabled,
        log_slam_params_cmd
    ])

if __name__ == '__main__':
    generate_launch_description()