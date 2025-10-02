// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tomauto_interfaces/msg/drive_camera.hpp"


#ifndef TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__TRAITS_HPP_
#define TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tomauto_interfaces/msg/detail/drive_camera__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tomauto_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DriveCamera & msg,
  std::ostream & out)
{
  out << "{";
  // member: detected_object
  {
    out << "detected_object: ";
    rosidl_generator_traits::value_to_yaml(msg.detected_object, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveCamera & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: detected_object
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detected_object: ";
    rosidl_generator_traits::value_to_yaml(msg.detected_object, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveCamera & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tomauto_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tomauto_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tomauto_interfaces::msg::DriveCamera & msg,
  std::ostream & out, size_t indentation = 0)
{
  tomauto_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tomauto_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const tomauto_interfaces::msg::DriveCamera & msg)
{
  return tomauto_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tomauto_interfaces::msg::DriveCamera>()
{
  return "tomauto_interfaces::msg::DriveCamera";
}

template<>
inline const char * name<tomauto_interfaces::msg::DriveCamera>()
{
  return "tomauto_interfaces/msg/DriveCamera";
}

template<>
struct has_fixed_size<tomauto_interfaces::msg::DriveCamera>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tomauto_interfaces::msg::DriveCamera>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tomauto_interfaces::msg::DriveCamera>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__TRAITS_HPP_
