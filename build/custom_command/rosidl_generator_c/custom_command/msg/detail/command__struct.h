// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_command:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_COMMAND__MSG__DETAIL__COMMAND__STRUCT_H_
#define CUSTOM_COMMAND__MSG__DETAIL__COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'parameters'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Command in the package custom_command.
typedef struct custom_command__msg__Command
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String__Sequence parameters;
} custom_command__msg__Command;

// Struct for a sequence of custom_command__msg__Command.
typedef struct custom_command__msg__Command__Sequence
{
  custom_command__msg__Command * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_command__msg__Command__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_COMMAND__MSG__DETAIL__COMMAND__STRUCT_H_
