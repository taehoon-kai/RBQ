// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rbq_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
#define RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rbq_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rbq_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStatus_imu_success
{
public:
  explicit Init_RobotStatus_imu_success(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  ::rbq_msgs::msg::RobotStatus imu_success(::rbq_msgs::msg::RobotStatus::_imu_success_type arg)
  {
    msg_.imu_success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_docking_state
{
public:
  explicit Init_RobotStatus_docking_state(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_imu_success docking_state(::rbq_msgs::msg::RobotStatus::_docking_state_type arg)
  {
    msg_.docking_state = std::move(arg);
    return Init_RobotStatus_imu_success(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_is_fall
{
public:
  explicit Init_RobotStatus_is_fall(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_docking_state is_fall(::rbq_msgs::msg::RobotStatus::_is_fall_type arg)
  {
    msg_.is_fall = std::move(arg);
    return Init_RobotStatus_docking_state(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_gait_id
{
public:
  explicit Init_RobotStatus_gait_id(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_is_fall gait_id(::rbq_msgs::msg::RobotStatus::_gait_id_type arg)
  {
    msg_.gait_id = std::move(arg);
    return Init_RobotStatus_is_fall(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_find_home
{
public:
  explicit Init_RobotStatus_find_home(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_gait_id find_home(::rbq_msgs::msg::RobotStatus::_find_home_type arg)
  {
    msg_.find_home = std::move(arg);
    return Init_RobotStatus_gait_id(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_can_check
{
public:
  explicit Init_RobotStatus_can_check(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_find_home can_check(::rbq_msgs::msg::RobotStatus::_can_check_type arg)
  {
    msg_.can_check = std::move(arg);
    return Init_RobotStatus_find_home(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_is_standing
{
public:
  explicit Init_RobotStatus_is_standing(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_can_check is_standing(::rbq_msgs::msg::RobotStatus::_is_standing_type arg)
  {
    msg_.is_standing = std::move(arg);
    return Init_RobotStatus_can_check(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_ext_joy
{
public:
  explicit Init_RobotStatus_ext_joy(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_is_standing ext_joy(::rbq_msgs::msg::RobotStatus::_ext_joy_type arg)
  {
    msg_.ext_joy = std::move(arg);
    return Init_RobotStatus_is_standing(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_force_con
{
public:
  explicit Init_RobotStatus_force_con(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_ext_joy force_con(::rbq_msgs::msg::RobotStatus::_force_con_type arg)
  {
    msg_.force_con = std::move(arg);
    return Init_RobotStatus_ext_joy(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_ground_pos
{
public:
  explicit Init_RobotStatus_ground_pos(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_force_con ground_pos(::rbq_msgs::msg::RobotStatus::_ground_pos_type arg)
  {
    msg_.ground_pos = std::move(arg);
    return Init_RobotStatus_force_con(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_ready_pos
{
public:
  explicit Init_RobotStatus_ready_pos(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_ground_pos ready_pos(::rbq_msgs::msg::RobotStatus::_ready_pos_type arg)
  {
    msg_.ready_pos = std::move(arg);
    return Init_RobotStatus_ground_pos(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_con_start
{
public:
  explicit Init_RobotStatus_con_start(::rbq_msgs::msg::RobotStatus & msg)
  : msg_(msg)
  {}
  Init_RobotStatus_ready_pos con_start(::rbq_msgs::msg::RobotStatus::_con_start_type arg)
  {
    msg_.con_start = std::move(arg);
    return Init_RobotStatus_ready_pos(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

class Init_RobotStatus_header
{
public:
  Init_RobotStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStatus_con_start header(::rbq_msgs::msg::RobotStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStatus_con_start(msg_);
  }

private:
  ::rbq_msgs::msg::RobotStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rbq_msgs::msg::RobotStatus>()
{
  return rbq_msgs::msg::builder::Init_RobotStatus_header();
}

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__BUILDER_HPP_
