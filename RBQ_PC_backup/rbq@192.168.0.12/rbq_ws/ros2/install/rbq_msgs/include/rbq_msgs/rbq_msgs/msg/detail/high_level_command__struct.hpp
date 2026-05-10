// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rbq_msgs:msg/HighLevelCommand.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__STRUCT_HPP_
#define RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__rbq_msgs__msg__HighLevelCommand __attribute__((deprecated))
#else
# define DEPRECATED__rbq_msgs__msg__HighLevelCommand __declspec(deprecated)
#endif

namespace rbq_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HighLevelCommand_
{
  using Type = HighLevelCommand_<ContainerAllocator>;

  explicit HighLevelCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identifier = "";
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->vel_x = 0.0;
      this->vel_y = 0.0;
      this->omega_z = 0.0;
      this->delta_body_h = 0.0;
      this->delta_foot_h = 0.0;
      this->gait_state = 0;
      this->gait_transition = false;
    }
  }

  explicit HighLevelCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    identifier(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->identifier = "";
      this->roll = 0.0;
      this->pitch = 0.0;
      this->yaw = 0.0;
      this->vel_x = 0.0;
      this->vel_y = 0.0;
      this->omega_z = 0.0;
      this->delta_body_h = 0.0;
      this->delta_foot_h = 0.0;
      this->gait_state = 0;
      this->gait_transition = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _identifier_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _identifier_type identifier;
  using _roll_type =
    double;
  _roll_type roll;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _vel_x_type =
    double;
  _vel_x_type vel_x;
  using _vel_y_type =
    double;
  _vel_y_type vel_y;
  using _omega_z_type =
    double;
  _omega_z_type omega_z;
  using _delta_body_h_type =
    double;
  _delta_body_h_type delta_body_h;
  using _delta_foot_h_type =
    double;
  _delta_foot_h_type delta_foot_h;
  using _gait_state_type =
    int8_t;
  _gait_state_type gait_state;
  using _gait_transition_type =
    bool;
  _gait_transition_type gait_transition;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__identifier(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->identifier = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__vel_x(
    const double & _arg)
  {
    this->vel_x = _arg;
    return *this;
  }
  Type & set__vel_y(
    const double & _arg)
  {
    this->vel_y = _arg;
    return *this;
  }
  Type & set__omega_z(
    const double & _arg)
  {
    this->omega_z = _arg;
    return *this;
  }
  Type & set__delta_body_h(
    const double & _arg)
  {
    this->delta_body_h = _arg;
    return *this;
  }
  Type & set__delta_foot_h(
    const double & _arg)
  {
    this->delta_foot_h = _arg;
    return *this;
  }
  Type & set__gait_state(
    const int8_t & _arg)
  {
    this->gait_state = _arg;
    return *this;
  }
  Type & set__gait_transition(
    const bool & _arg)
  {
    this->gait_transition = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STATE_FALL =
    -2;
  static constexpr int8_t STATE_OFF =
    -1;
  static constexpr int8_t STATE_SIT =
    0;
  static constexpr int8_t STATE_STAND =
    1;
  static constexpr int8_t STATE_AIM =
    2;
  static constexpr int8_t STATE_WALK =
    3;
  static constexpr int8_t STATE_STAIRS =
    4;
  static constexpr int8_t STATE_WAVE =
    5;
  static constexpr int8_t STATE_RUN =
    6;
  static constexpr int8_t STATE_RL_TROT =
    30;
  static constexpr int8_t STATE_RL_FRONT_WALK =
    31;
  static constexpr int8_t STATE_RL_LEFT_WALK =
    33;
  static constexpr int8_t STATE_RL_RIGHT_WALK =
    34;
  static constexpr int8_t STATE_RL_BOUND =
    35;
  static constexpr int8_t STATE_RL_PACE =
    36;
  static constexpr int8_t STATE_RL_PRONK =
    37;
  static constexpr int8_t STATE_RL_3LEG_HR =
    38;
  static constexpr int8_t STATE_RL_3LEG_HL =
    39;
  static constexpr int8_t STATE_RL_3LEG_FR =
    40;
  static constexpr int8_t STATE_RL_3LEG_FL =
    41;
  static constexpr int8_t STATE_RL_TROT_VISION =
    42;
  static constexpr int8_t STATE_RL_TROT_RUN =
    45;
  static constexpr int8_t STATE_RL_SILENT =
    46;

  // pointer types
  using RawPtr =
    rbq_msgs::msg::HighLevelCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbq_msgs::msg::HighLevelCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbq_msgs::msg::HighLevelCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbq_msgs::msg::HighLevelCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbq_msgs::msg::HighLevelCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbq_msgs::msg::HighLevelCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbq_msgs::msg::HighLevelCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbq_msgs::msg::HighLevelCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbq_msgs::msg::HighLevelCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbq_msgs::msg::HighLevelCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbq_msgs__msg__HighLevelCommand
    std::shared_ptr<rbq_msgs::msg::HighLevelCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbq_msgs__msg__HighLevelCommand
    std::shared_ptr<rbq_msgs::msg::HighLevelCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HighLevelCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->identifier != other.identifier) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->vel_x != other.vel_x) {
      return false;
    }
    if (this->vel_y != other.vel_y) {
      return false;
    }
    if (this->omega_z != other.omega_z) {
      return false;
    }
    if (this->delta_body_h != other.delta_body_h) {
      return false;
    }
    if (this->delta_foot_h != other.delta_foot_h) {
      return false;
    }
    if (this->gait_state != other.gait_state) {
      return false;
    }
    if (this->gait_transition != other.gait_transition) {
      return false;
    }
    return true;
  }
  bool operator!=(const HighLevelCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HighLevelCommand_

// alias to use template instance with default allocator
using HighLevelCommand =
  rbq_msgs::msg::HighLevelCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_FALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_SIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_STAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_AIM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_STAIRS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_WAVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_TROT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_FRONT_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_LEFT_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_RIGHT_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_BOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_PACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_PRONK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_3LEG_HR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_3LEG_HL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_3LEG_FR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_3LEG_FL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_TROT_VISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_TROT_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t HighLevelCommand_<ContainerAllocator>::STATE_RL_SILENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__STRUCT_HPP_
