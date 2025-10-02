// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tomauto_interfaces/msg/detail/drive_camera__rosidl_typesupport_introspection_c.h"
#include "tomauto_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tomauto_interfaces/msg/detail/drive_camera__functions.h"
#include "tomauto_interfaces/msg/detail/drive_camera__struct.h"


// Include directives for member types
// Member `detected_object`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tomauto_interfaces__msg__DriveCamera__init(message_memory);
}

void tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_fini_function(void * message_memory)
{
  tomauto_interfaces__msg__DriveCamera__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_message_member_array[1] = {
  {
    "detected_object",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tomauto_interfaces__msg__DriveCamera, detected_object),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_message_members = {
  "tomauto_interfaces__msg",  // message namespace
  "DriveCamera",  // message name
  1,  // number of fields
  sizeof(tomauto_interfaces__msg__DriveCamera),
  false,  // has_any_key_member_
  tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_message_member_array,  // message members
  tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_init_function,  // function to initialize message memory (memory has to be allocated)
  tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_message_type_support_handle = {
  0,
  &tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_message_members,
  get_message_typesupport_handle_function,
  &tomauto_interfaces__msg__DriveCamera__get_type_hash,
  &tomauto_interfaces__msg__DriveCamera__get_type_description,
  &tomauto_interfaces__msg__DriveCamera__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tomauto_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tomauto_interfaces, msg, DriveCamera)() {
  if (!tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_message_type_support_handle.typesupport_identifier) {
    tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tomauto_interfaces__msg__DriveCamera__rosidl_typesupport_introspection_c__DriveCamera_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
