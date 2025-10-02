// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tomauto_interfaces/msg/drive_camera.h"


#ifndef TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__STRUCT_H_
#define TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'detected_object'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DriveCamera in the package tomauto_interfaces.
typedef struct tomauto_interfaces__msg__DriveCamera
{
  rosidl_runtime_c__String detected_object;
} tomauto_interfaces__msg__DriveCamera;

// Struct for a sequence of tomauto_interfaces__msg__DriveCamera.
typedef struct tomauto_interfaces__msg__DriveCamera__Sequence
{
  tomauto_interfaces__msg__DriveCamera * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tomauto_interfaces__msg__DriveCamera__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__STRUCT_H_
