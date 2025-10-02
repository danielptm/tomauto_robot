// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice
#include "tomauto_interfaces/msg/detail/drive_camera__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tomauto_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tomauto_interfaces/msg/detail/drive_camera__struct.h"
#include "tomauto_interfaces/msg/detail/drive_camera__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // detected_object
#include "rosidl_runtime_c/string_functions.h"  // detected_object

// forward declare type support functions


using _DriveCamera__ros_msg_type = tomauto_interfaces__msg__DriveCamera;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tomauto_interfaces
bool cdr_serialize_tomauto_interfaces__msg__DriveCamera(
  const tomauto_interfaces__msg__DriveCamera * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: detected_object
  {
    const rosidl_runtime_c__String * str = &ros_message->detected_object;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tomauto_interfaces
bool cdr_deserialize_tomauto_interfaces__msg__DriveCamera(
  eprosima::fastcdr::Cdr & cdr,
  tomauto_interfaces__msg__DriveCamera * ros_message)
{
  // Field name: detected_object
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->detected_object.data) {
      rosidl_runtime_c__String__init(&ros_message->detected_object);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->detected_object,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'detected_object'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tomauto_interfaces
size_t get_serialized_size_tomauto_interfaces__msg__DriveCamera(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriveCamera__ros_msg_type * ros_message = static_cast<const _DriveCamera__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: detected_object
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->detected_object.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tomauto_interfaces
size_t max_serialized_size_tomauto_interfaces__msg__DriveCamera(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: detected_object
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tomauto_interfaces__msg__DriveCamera;
    is_plain =
      (
      offsetof(DataType, detected_object) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tomauto_interfaces
bool cdr_serialize_key_tomauto_interfaces__msg__DriveCamera(
  const tomauto_interfaces__msg__DriveCamera * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: detected_object
  {
    const rosidl_runtime_c__String * str = &ros_message->detected_object;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tomauto_interfaces
size_t get_serialized_size_key_tomauto_interfaces__msg__DriveCamera(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DriveCamera__ros_msg_type * ros_message = static_cast<const _DriveCamera__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: detected_object
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->detected_object.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tomauto_interfaces
size_t max_serialized_size_key_tomauto_interfaces__msg__DriveCamera(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: detected_object
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tomauto_interfaces__msg__DriveCamera;
    is_plain =
      (
      offsetof(DataType, detected_object) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _DriveCamera__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const tomauto_interfaces__msg__DriveCamera * ros_message = static_cast<const tomauto_interfaces__msg__DriveCamera *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_tomauto_interfaces__msg__DriveCamera(ros_message, cdr);
}

static bool _DriveCamera__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  tomauto_interfaces__msg__DriveCamera * ros_message = static_cast<tomauto_interfaces__msg__DriveCamera *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_tomauto_interfaces__msg__DriveCamera(cdr, ros_message);
}

static uint32_t _DriveCamera__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tomauto_interfaces__msg__DriveCamera(
      untyped_ros_message, 0));
}

static size_t _DriveCamera__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tomauto_interfaces__msg__DriveCamera(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DriveCamera = {
  "tomauto_interfaces::msg",
  "DriveCamera",
  _DriveCamera__cdr_serialize,
  _DriveCamera__cdr_deserialize,
  _DriveCamera__get_serialized_size,
  _DriveCamera__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _DriveCamera__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DriveCamera,
  get_message_typesupport_handle_function,
  &tomauto_interfaces__msg__DriveCamera__get_type_hash,
  &tomauto_interfaces__msg__DriveCamera__get_type_description,
  &tomauto_interfaces__msg__DriveCamera__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tomauto_interfaces, msg, DriveCamera)() {
  return &_DriveCamera__type_support;
}

#if defined(__cplusplus)
}
#endif
