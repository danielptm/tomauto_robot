// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tomauto_interfaces/msg/detail/drive_camera__functions.h"
#include "tomauto_interfaces/msg/detail/drive_camera__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tomauto_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DriveCamera_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tomauto_interfaces::msg::DriveCamera(_init);
}

void DriveCamera_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tomauto_interfaces::msg::DriveCamera *>(message_memory);
  typed_message->~DriveCamera();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DriveCamera_message_member_array[1] = {
  {
    "detected_object",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tomauto_interfaces::msg::DriveCamera, detected_object),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DriveCamera_message_members = {
  "tomauto_interfaces::msg",  // message namespace
  "DriveCamera",  // message name
  1,  // number of fields
  sizeof(tomauto_interfaces::msg::DriveCamera),
  false,  // has_any_key_member_
  DriveCamera_message_member_array,  // message members
  DriveCamera_init_function,  // function to initialize message memory (memory has to be allocated)
  DriveCamera_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DriveCamera_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DriveCamera_message_members,
  get_message_typesupport_handle_function,
  &tomauto_interfaces__msg__DriveCamera__get_type_hash,
  &tomauto_interfaces__msg__DriveCamera__get_type_description,
  &tomauto_interfaces__msg__DriveCamera__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tomauto_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tomauto_interfaces::msg::DriveCamera>()
{
  return &::tomauto_interfaces::msg::rosidl_typesupport_introspection_cpp::DriveCamera_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tomauto_interfaces, msg, DriveCamera)() {
  return &::tomauto_interfaces::msg::rosidl_typesupport_introspection_cpp::DriveCamera_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
