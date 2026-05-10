// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rbq_msgs:msg/HighLevelCommand.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__BUILDER_HPP_
#define RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rbq_msgs/msg/detail/high_level_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rbq_msgs
{

namespace msg
{

namespace builder
{

class Init_HighLevelCommand_gait_transition
{
public:
  explicit Init_HighLevelCommand_gait_transition(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  ::rbq_msgs::msg::HighLevelCommand gait_transition(::rbq_msgs::msg::HighLevelCommand::_gait_transition_type arg)
  {
    msg_.gait_transition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_gait_state
{
public:
  explicit Init_HighLevelCommand_gait_state(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_gait_transition gait_state(::rbq_msgs::msg::HighLevelCommand::_gait_state_type arg)
  {
    msg_.gait_state = std::move(arg);
    return Init_HighLevelCommand_gait_transition(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_delta_foot_h
{
public:
  explicit Init_HighLevelCommand_delta_foot_h(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_gait_state delta_foot_h(::rbq_msgs::msg::HighLevelCommand::_delta_foot_h_type arg)
  {
    msg_.delta_foot_h = std::move(arg);
    return Init_HighLevelCommand_gait_state(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_delta_body_h
{
public:
  explicit Init_HighLevelCommand_delta_body_h(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_delta_foot_h delta_body_h(::rbq_msgs::msg::HighLevelCommand::_delta_body_h_type arg)
  {
    msg_.delta_body_h = std::move(arg);
    return Init_HighLevelCommand_delta_foot_h(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_omega_z
{
public:
  explicit Init_HighLevelCommand_omega_z(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_delta_body_h omega_z(::rbq_msgs::msg::HighLevelCommand::_omega_z_type arg)
  {
    msg_.omega_z = std::move(arg);
    return Init_HighLevelCommand_delta_body_h(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_vel_y
{
public:
  explicit Init_HighLevelCommand_vel_y(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_omega_z vel_y(::rbq_msgs::msg::HighLevelCommand::_vel_y_type arg)
  {
    msg_.vel_y = std::move(arg);
    return Init_HighLevelCommand_omega_z(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_vel_x
{
public:
  explicit Init_HighLevelCommand_vel_x(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_vel_y vel_x(::rbq_msgs::msg::HighLevelCommand::_vel_x_type arg)
  {
    msg_.vel_x = std::move(arg);
    return Init_HighLevelCommand_vel_y(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_yaw
{
public:
  explicit Init_HighLevelCommand_yaw(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_vel_x yaw(::rbq_msgs::msg::HighLevelCommand::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_HighLevelCommand_vel_x(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_pitch
{
public:
  explicit Init_HighLevelCommand_pitch(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_yaw pitch(::rbq_msgs::msg::HighLevelCommand::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_HighLevelCommand_yaw(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_roll
{
public:
  explicit Init_HighLevelCommand_roll(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_pitch roll(::rbq_msgs::msg::HighLevelCommand::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_HighLevelCommand_pitch(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_identifier
{
public:
  explicit Init_HighLevelCommand_identifier(::rbq_msgs::msg::HighLevelCommand & msg)
  : msg_(msg)
  {}
  Init_HighLevelCommand_roll identifier(::rbq_msgs::msg::HighLevelCommand::_identifier_type arg)
  {
    msg_.identifier = std::move(arg);
    return Init_HighLevelCommand_roll(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

class Init_HighLevelCommand_header
{
public:
  Init_HighLevelCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HighLevelCommand_identifier header(::rbq_msgs::msg::HighLevelCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HighLevelCommand_identifier(msg_);
  }

private:
  ::rbq_msgs::msg::HighLevelCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rbq_msgs::msg::HighLevelCommand>()
{
  return rbq_msgs::msg::builder::Init_HighLevelCommand_header();
}

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__BUILDER_HPP_
