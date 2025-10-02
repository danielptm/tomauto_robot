// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tomauto_interfaces/msg/drive_camera.hpp"


#ifndef TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__BUILDER_HPP_
#define TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tomauto_interfaces/msg/detail/drive_camera__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tomauto_interfaces
{

namespace msg
{

namespace builder
{

class Init_DriveCamera_detected_object
{
public:
  Init_DriveCamera_detected_object()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tomauto_interfaces::msg::DriveCamera detected_object(::tomauto_interfaces::msg::DriveCamera::_detected_object_type arg)
  {
    msg_.detected_object = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tomauto_interfaces::msg::DriveCamera msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tomauto_interfaces::msg::DriveCamera>()
{
  return tomauto_interfaces::msg::builder::Init_DriveCamera_detected_object();
}

}  // namespace tomauto_interfaces

#endif  // TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__BUILDER_HPP_
