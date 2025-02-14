// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_command:msg/Command.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_command/msg/detail/command__rosidl_typesupport_introspection_c.h"
#include "custom_command/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_command/msg/detail/command__functions.h"
#include "custom_command/msg/detail/command__struct.h"


// Include directives for member types
// Member `name`
// Member `parameters`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_command__msg__Command__init(message_memory);
}

void custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_fini_function(void * message_memory)
{
  custom_command__msg__Command__fini(message_memory);
}

size_t custom_command__msg__Command__rosidl_typesupport_introspection_c__size_function__Command__parameters(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * custom_command__msg__Command__rosidl_typesupport_introspection_c__get_const_function__Command__parameters(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * custom_command__msg__Command__rosidl_typesupport_introspection_c__get_function__Command__parameters(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void custom_command__msg__Command__rosidl_typesupport_introspection_c__fetch_function__Command__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    custom_command__msg__Command__rosidl_typesupport_introspection_c__get_const_function__Command__parameters(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void custom_command__msg__Command__rosidl_typesupport_introspection_c__assign_function__Command__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    custom_command__msg__Command__rosidl_typesupport_introspection_c__get_function__Command__parameters(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool custom_command__msg__Command__rosidl_typesupport_introspection_c__resize_function__Command__parameters(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_command__msg__Command, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_command__msg__Command, parameters),  // bytes offset in struct
    NULL,  // default value
    custom_command__msg__Command__rosidl_typesupport_introspection_c__size_function__Command__parameters,  // size() function pointer
    custom_command__msg__Command__rosidl_typesupport_introspection_c__get_const_function__Command__parameters,  // get_const(index) function pointer
    custom_command__msg__Command__rosidl_typesupport_introspection_c__get_function__Command__parameters,  // get(index) function pointer
    custom_command__msg__Command__rosidl_typesupport_introspection_c__fetch_function__Command__parameters,  // fetch(index, &value) function pointer
    custom_command__msg__Command__rosidl_typesupport_introspection_c__assign_function__Command__parameters,  // assign(index, value) function pointer
    custom_command__msg__Command__rosidl_typesupport_introspection_c__resize_function__Command__parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_message_members = {
  "custom_command__msg",  // message namespace
  "Command",  // message name
  2,  // number of fields
  sizeof(custom_command__msg__Command),
  custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_message_member_array,  // message members
  custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_init_function,  // function to initialize message memory (memory has to be allocated)
  custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_message_type_support_handle = {
  0,
  &custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_command
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_command, msg, Command)() {
  if (!custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_message_type_support_handle.typesupport_identifier) {
    custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &custom_command__msg__Command__rosidl_typesupport_introspection_c__Command_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
