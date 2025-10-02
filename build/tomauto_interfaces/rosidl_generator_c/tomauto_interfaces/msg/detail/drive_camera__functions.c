// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice
#include "tomauto_interfaces/msg/detail/drive_camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `detected_object`
#include "rosidl_runtime_c/string_functions.h"

bool
tomauto_interfaces__msg__DriveCamera__init(tomauto_interfaces__msg__DriveCamera * msg)
{
  if (!msg) {
    return false;
  }
  // detected_object
  if (!rosidl_runtime_c__String__init(&msg->detected_object)) {
    tomauto_interfaces__msg__DriveCamera__fini(msg);
    return false;
  }
  return true;
}

void
tomauto_interfaces__msg__DriveCamera__fini(tomauto_interfaces__msg__DriveCamera * msg)
{
  if (!msg) {
    return;
  }
  // detected_object
  rosidl_runtime_c__String__fini(&msg->detected_object);
}

bool
tomauto_interfaces__msg__DriveCamera__are_equal(const tomauto_interfaces__msg__DriveCamera * lhs, const tomauto_interfaces__msg__DriveCamera * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // detected_object
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detected_object), &(rhs->detected_object)))
  {
    return false;
  }
  return true;
}

bool
tomauto_interfaces__msg__DriveCamera__copy(
  const tomauto_interfaces__msg__DriveCamera * input,
  tomauto_interfaces__msg__DriveCamera * output)
{
  if (!input || !output) {
    return false;
  }
  // detected_object
  if (!rosidl_runtime_c__String__copy(
      &(input->detected_object), &(output->detected_object)))
  {
    return false;
  }
  return true;
}

tomauto_interfaces__msg__DriveCamera *
tomauto_interfaces__msg__DriveCamera__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tomauto_interfaces__msg__DriveCamera * msg = (tomauto_interfaces__msg__DriveCamera *)allocator.allocate(sizeof(tomauto_interfaces__msg__DriveCamera), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tomauto_interfaces__msg__DriveCamera));
  bool success = tomauto_interfaces__msg__DriveCamera__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tomauto_interfaces__msg__DriveCamera__destroy(tomauto_interfaces__msg__DriveCamera * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tomauto_interfaces__msg__DriveCamera__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tomauto_interfaces__msg__DriveCamera__Sequence__init(tomauto_interfaces__msg__DriveCamera__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tomauto_interfaces__msg__DriveCamera * data = NULL;

  if (size) {
    data = (tomauto_interfaces__msg__DriveCamera *)allocator.zero_allocate(size, sizeof(tomauto_interfaces__msg__DriveCamera), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tomauto_interfaces__msg__DriveCamera__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tomauto_interfaces__msg__DriveCamera__fini(&data[i - 1]);
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
tomauto_interfaces__msg__DriveCamera__Sequence__fini(tomauto_interfaces__msg__DriveCamera__Sequence * array)
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
      tomauto_interfaces__msg__DriveCamera__fini(&array->data[i]);
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

tomauto_interfaces__msg__DriveCamera__Sequence *
tomauto_interfaces__msg__DriveCamera__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tomauto_interfaces__msg__DriveCamera__Sequence * array = (tomauto_interfaces__msg__DriveCamera__Sequence *)allocator.allocate(sizeof(tomauto_interfaces__msg__DriveCamera__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tomauto_interfaces__msg__DriveCamera__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tomauto_interfaces__msg__DriveCamera__Sequence__destroy(tomauto_interfaces__msg__DriveCamera__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tomauto_interfaces__msg__DriveCamera__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tomauto_interfaces__msg__DriveCamera__Sequence__are_equal(const tomauto_interfaces__msg__DriveCamera__Sequence * lhs, const tomauto_interfaces__msg__DriveCamera__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tomauto_interfaces__msg__DriveCamera__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tomauto_interfaces__msg__DriveCamera__Sequence__copy(
  const tomauto_interfaces__msg__DriveCamera__Sequence * input,
  tomauto_interfaces__msg__DriveCamera__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tomauto_interfaces__msg__DriveCamera);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tomauto_interfaces__msg__DriveCamera * data =
      (tomauto_interfaces__msg__DriveCamera *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tomauto_interfaces__msg__DriveCamera__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tomauto_interfaces__msg__DriveCamera__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tomauto_interfaces__msg__DriveCamera__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
