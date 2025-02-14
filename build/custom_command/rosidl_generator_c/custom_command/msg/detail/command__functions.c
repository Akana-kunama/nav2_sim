// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from custom_command:msg/Command.idl
// generated code does not contain a copyright notice
#include "custom_command/msg/detail/command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `parameters`
#include "rosidl_runtime_c/string_functions.h"

bool
custom_command__msg__Command__init(custom_command__msg__Command * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    custom_command__msg__Command__fini(msg);
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__Sequence__init(&msg->parameters, 0)) {
    custom_command__msg__Command__fini(msg);
    return false;
  }
  return true;
}

void
custom_command__msg__Command__fini(custom_command__msg__Command * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // parameters
  rosidl_runtime_c__String__Sequence__fini(&msg->parameters);
}

bool
custom_command__msg__Command__are_equal(const custom_command__msg__Command * lhs, const custom_command__msg__Command * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
custom_command__msg__Command__copy(
  const custom_command__msg__Command * input,
  custom_command__msg__Command * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // parameters
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

custom_command__msg__Command *
custom_command__msg__Command__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_command__msg__Command * msg = (custom_command__msg__Command *)allocator.allocate(sizeof(custom_command__msg__Command), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(custom_command__msg__Command));
  bool success = custom_command__msg__Command__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
custom_command__msg__Command__destroy(custom_command__msg__Command * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    custom_command__msg__Command__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
custom_command__msg__Command__Sequence__init(custom_command__msg__Command__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_command__msg__Command * data = NULL;

  if (size) {
    data = (custom_command__msg__Command *)allocator.zero_allocate(size, sizeof(custom_command__msg__Command), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = custom_command__msg__Command__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        custom_command__msg__Command__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
custom_command__msg__Command__Sequence__fini(custom_command__msg__Command__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      custom_command__msg__Command__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

custom_command__msg__Command__Sequence *
custom_command__msg__Command__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  custom_command__msg__Command__Sequence * array = (custom_command__msg__Command__Sequence *)allocator.allocate(sizeof(custom_command__msg__Command__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = custom_command__msg__Command__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
custom_command__msg__Command__Sequence__destroy(custom_command__msg__Command__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    custom_command__msg__Command__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
custom_command__msg__Command__Sequence__are_equal(const custom_command__msg__Command__Sequence * lhs, const custom_command__msg__Command__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!custom_command__msg__Command__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
custom_command__msg__Command__Sequence__copy(
  const custom_command__msg__Command__Sequence * input,
  custom_command__msg__Command__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(custom_command__msg__Command);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    custom_command__msg__Command * data =
      (custom_command__msg__Command *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!custom_command__msg__Command__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          custom_command__msg__Command__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!custom_command__msg__Command__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
