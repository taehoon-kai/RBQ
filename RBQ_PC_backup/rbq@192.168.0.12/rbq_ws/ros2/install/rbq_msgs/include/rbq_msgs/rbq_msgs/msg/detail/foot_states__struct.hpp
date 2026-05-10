// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rbq_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_HPP_
#define RBQ_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'foot_position_rt_body'
// Member 'foot_velocity_rt_body'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rbq_msgs__msg__FootStates __attribute__((deprecated))
#else
# define DEPRECATED__rbq_msgs__msg__FootStates __declspec(deprecated)
#endif

namespace rbq_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FootStates_
{
  using Type = FootStates_<ContainerAllocator>;

  explicit FootStates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit FootStates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _foot_position_rt_body_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _foot_position_rt_body_type foot_position_rt_body;
  using _foot_velocity_rt_body_type =
    std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>>;
  _foot_velocity_rt_body_type foot_velocity_rt_body;
  using _contact_type =
    std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>>;
  _contact_type contact;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__foot_position_rt_body(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->foot_position_rt_body = _arg;
    return *this;
  }
  Type & set__foot_velocity_rt_body(
    const std::vector<geometry_msgs::msg::Point_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Point_<ContainerAllocator>>> & _arg)
  {
    this->foot_velocity_rt_body = _arg;
    return *this;
  }
  Type & set__contact(
    const std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> & _arg)
  {
    this->contact = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTACT_UNKNOWN =
    0u;
  static constexpr uint8_t CONTACT_MADE =
    1u;
  static constexpr uint8_t CONTACT_LOST =
    2u;

  // pointer types
  using RawPtr =
    rbq_msgs::msg::FootStates_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbq_msgs::msg::FootStates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbq_msgs::msg::FootStates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbq_msgs::msg::FootStates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbq_msgs::msg::FootStates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbq_msgs::msg::FootStates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbq_msgs::msg::FootStates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbq_msgs::msg::FootStates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbq_msgs::msg::FootStates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbq_msgs::msg::FootStates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbq_msgs__msg__FootStates
    std::shared_ptr<rbq_msgs::msg::FootStates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbq_msgs__msg__FootStates
    std::shared_ptr<rbq_msgs::msg::FootStates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FootStates_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->foot_position_rt_body != other.foot_position_rt_body) {
      return false;
    }
    if (this->foot_velocity_rt_body != other.foot_velocity_rt_body) {
      return false;
    }
    if (this->contact != other.contact) {
      return false;
    }
    return true;
  }
  bool operator!=(const FootStates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FootStates_

// alias to use template instance with default allocator
using FootStates =
  rbq_msgs::msg::FootStates_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FootStates_<ContainerAllocator>::CONTACT_UNKNOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FootStates_<ContainerAllocator>::CONTACT_MADE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t FootStates_<ContainerAllocator>::CONTACT_LOST;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_HPP_
