// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tomauto_interfaces/msg/drive_camera.hpp"


#ifndef TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__STRUCT_HPP_
#define TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__tomauto_interfaces__msg__DriveCamera __attribute__((deprecated))
#else
# define DEPRECATED__tomauto_interfaces__msg__DriveCamera __declspec(deprecated)
#endif

namespace tomauto_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DriveCamera_
{
  using Type = DriveCamera_<ContainerAllocator>;

  explicit DriveCamera_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected_object = "";
    }
  }

  explicit DriveCamera_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : detected_object(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected_object = "";
    }
  }

  // field types and members
  using _detected_object_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _detected_object_type detected_object;

  // setters for named parameter idiom
  Type & set__detected_object(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->detected_object = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tomauto_interfaces::msg::DriveCamera_<ContainerAllocator> *;
  using ConstRawPtr =
    const tomauto_interfaces::msg::DriveCamera_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tomauto_interfaces::msg::DriveCamera_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tomauto_interfaces::msg::DriveCamera_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tomauto_interfaces::msg::DriveCamera_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tomauto_interfaces::msg::DriveCamera_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tomauto_interfaces::msg::DriveCamera_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tomauto_interfaces::msg::DriveCamera_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tomauto_interfaces::msg::DriveCamera_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tomauto_interfaces::msg::DriveCamera_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tomauto_interfaces__msg__DriveCamera
    std::shared_ptr<tomauto_interfaces::msg::DriveCamera_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tomauto_interfaces__msg__DriveCamera
    std::shared_ptr<tomauto_interfaces::msg::DriveCamera_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveCamera_ & other) const
  {
    if (this->detected_object != other.detected_object) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveCamera_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveCamera_

// alias to use template instance with default allocator
using DriveCamera =
  tomauto_interfaces::msg::DriveCamera_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace tomauto_interfaces

#endif  // TOMAUTO_INTERFACES__MSG__DETAIL__DRIVE_CAMERA__STRUCT_HPP_
