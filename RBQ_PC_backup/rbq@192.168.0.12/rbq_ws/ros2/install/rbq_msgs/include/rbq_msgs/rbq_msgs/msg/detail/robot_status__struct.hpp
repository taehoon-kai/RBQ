// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rbq_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
#define RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_

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
# define DEPRECATED__rbq_msgs__msg__RobotStatus __attribute__((deprecated))
#else
# define DEPRECATED__rbq_msgs__msg__RobotStatus __declspec(deprecated)
#endif

namespace rbq_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotStatus_
{
  using Type = RobotStatus_<ContainerAllocator>;

  explicit RobotStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->con_start = false;
      this->ready_pos = false;
      this->ground_pos = false;
      this->force_con = false;
      this->ext_joy = false;
      this->is_standing = false;
      this->can_check = false;
      this->find_home = false;
      this->gait_id = 0;
      this->is_fall = false;
      this->docking_state = 0;
      this->imu_success = false;
    }
  }

  explicit RobotStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->con_start = false;
      this->ready_pos = false;
      this->ground_pos = false;
      this->force_con = false;
      this->ext_joy = false;
      this->is_standing = false;
      this->can_check = false;
      this->find_home = false;
      this->gait_id = 0;
      this->is_fall = false;
      this->docking_state = 0;
      this->imu_success = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _con_start_type =
    bool;
  _con_start_type con_start;
  using _ready_pos_type =
    bool;
  _ready_pos_type ready_pos;
  using _ground_pos_type =
    bool;
  _ground_pos_type ground_pos;
  using _force_con_type =
    bool;
  _force_con_type force_con;
  using _ext_joy_type =
    bool;
  _ext_joy_type ext_joy;
  using _is_standing_type =
    bool;
  _is_standing_type is_standing;
  using _can_check_type =
    bool;
  _can_check_type can_check;
  using _find_home_type =
    bool;
  _find_home_type find_home;
  using _gait_id_type =
    int8_t;
  _gait_id_type gait_id;
  using _is_fall_type =
    bool;
  _is_fall_type is_fall;
  using _docking_state_type =
    int8_t;
  _docking_state_type docking_state;
  using _imu_success_type =
    bool;
  _imu_success_type imu_success;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__con_start(
    const bool & _arg)
  {
    this->con_start = _arg;
    return *this;
  }
  Type & set__ready_pos(
    const bool & _arg)
  {
    this->ready_pos = _arg;
    return *this;
  }
  Type & set__ground_pos(
    const bool & _arg)
  {
    this->ground_pos = _arg;
    return *this;
  }
  Type & set__force_con(
    const bool & _arg)
  {
    this->force_con = _arg;
    return *this;
  }
  Type & set__ext_joy(
    const bool & _arg)
  {
    this->ext_joy = _arg;
    return *this;
  }
  Type & set__is_standing(
    const bool & _arg)
  {
    this->is_standing = _arg;
    return *this;
  }
  Type & set__can_check(
    const bool & _arg)
  {
    this->can_check = _arg;
    return *this;
  }
  Type & set__find_home(
    const bool & _arg)
  {
    this->find_home = _arg;
    return *this;
  }
  Type & set__gait_id(
    const int8_t & _arg)
  {
    this->gait_id = _arg;
    return *this;
  }
  Type & set__is_fall(
    const bool & _arg)
  {
    this->is_fall = _arg;
    return *this;
  }
  Type & set__docking_state(
    const int8_t & _arg)
  {
    this->docking_state = _arg;
    return *this;
  }
  Type & set__imu_success(
    const bool & _arg)
  {
    this->imu_success = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t DOCKING_MAX_FAIL_CNT_REACHED =
    -6;
  static constexpr int8_t DOCKING_MARKER_POS_INVALID_ROTATION =
    -5;
  static constexpr int8_t DOCKING_MARKER_POS_INVALID_TOO_FAR =
    -4;
  static constexpr int8_t DOCKING_MARKER_POS_INVALID_WRONG_DIR =
    -3;
  static constexpr int8_t DOCKING_MARKER_NOT_FOUND =
    -2;
  static constexpr int8_t DOCKING_FAILED =
    -1;
  static constexpr int8_t DOCKING_OPERATION_MODE =
    0;
  static constexpr int8_t DOCKING_APPROACH_OFFSET =
    1;
  static constexpr int8_t DOCKING_APPROACH =
    2;
  static constexpr int8_t DOCKING_APPROACH_WIDE =
    3;
  static constexpr int8_t DOCKING_SIT_DOWN =
    4;
  static constexpr int8_t DOCKING_SUCCESS =
    5;
  static constexpr int8_t DOCKING_SUCCESS_CHARGING =
    6;
  static constexpr int8_t DOCKING_SUCCESS_NO_CHARGING =
    7;
  static constexpr int8_t STATE_FALL =
    -2;
  static constexpr int8_t STATE_OFF =
    -1;
  static constexpr int8_t STATE_SIT =
    0;
  static constexpr int8_t STATE_STAND =
    1;
  static constexpr int8_t STATE_WALK =
    2;
  static constexpr int8_t STATE_AIM =
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
    rbq_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbq_msgs::msg::RobotStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbq_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbq_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbq_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbq_msgs::msg::RobotStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbq_msgs::msg::RobotStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbq_msgs::msg::RobotStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbq_msgs::msg::RobotStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbq_msgs::msg::RobotStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbq_msgs__msg__RobotStatus
    std::shared_ptr<rbq_msgs::msg::RobotStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbq_msgs__msg__RobotStatus
    std::shared_ptr<rbq_msgs::msg::RobotStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->con_start != other.con_start) {
      return false;
    }
    if (this->ready_pos != other.ready_pos) {
      return false;
    }
    if (this->ground_pos != other.ground_pos) {
      return false;
    }
    if (this->force_con != other.force_con) {
      return false;
    }
    if (this->ext_joy != other.ext_joy) {
      return false;
    }
    if (this->is_standing != other.is_standing) {
      return false;
    }
    if (this->can_check != other.can_check) {
      return false;
    }
    if (this->find_home != other.find_home) {
      return false;
    }
    if (this->gait_id != other.gait_id) {
      return false;
    }
    if (this->is_fall != other.is_fall) {
      return false;
    }
    if (this->docking_state != other.docking_state) {
      return false;
    }
    if (this->imu_success != other.imu_success) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotStatus_

// alias to use template instance with default allocator
using RobotStatus =
  rbq_msgs::msg::RobotStatus_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_MAX_FAIL_CNT_REACHED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_MARKER_POS_INVALID_ROTATION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_MARKER_POS_INVALID_TOO_FAR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_MARKER_POS_INVALID_WRONG_DIR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_MARKER_NOT_FOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_FAILED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_OPERATION_MODE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_APPROACH_OFFSET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_APPROACH;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_APPROACH_WIDE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_SIT_DOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_SUCCESS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_SUCCESS_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::DOCKING_SUCCESS_NO_CHARGING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_FALL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_SIT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_STAND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_AIM;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_STAIRS;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_WAVE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_TROT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_FRONT_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_LEFT_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_RIGHT_WALK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_BOUND;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_PACE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_PRONK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_3LEG_HR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_3LEG_HL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_3LEG_FR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_3LEG_FL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_TROT_VISION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_TROT_RUN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RobotStatus_<ContainerAllocator>::STATE_RL_SILENT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_HPP_
