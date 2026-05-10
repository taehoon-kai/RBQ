// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rbq_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__FOOT_STATES__BUILDER_HPP_
#define RBQ_MSGS__MSG__DETAIL__FOOT_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rbq_msgs/msg/detail/foot_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rbq_msgs
{

namespace msg
{

namespace builder
{

class Init_FootStates_contact
{
public:
  explicit Init_FootStates_contact(::rbq_msgs::msg::FootStates & msg)
  : msg_(msg)
  {}
  ::rbq_msgs::msg::FootStates contact(::rbq_msgs::msg::FootStates::_contact_type arg)
  {
    msg_.contact = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rbq_msgs::msg::FootStates msg_;
};

class Init_FootStates_foot_velocity_rt_body
{
public:
  explicit Init_FootStates_foot_velocity_rt_body(::rbq_msgs::msg::FootStates & msg)
  : msg_(msg)
  {}
  Init_FootStates_contact foot_velocity_rt_body(::rbq_msgs::msg::FootStates::_foot_velocity_rt_body_type arg)
  {
    msg_.foot_velocity_rt_body = std::move(arg);
    return Init_FootStates_contact(msg_);
  }

private:
  ::rbq_msgs::msg::FootStates msg_;
};

class Init_FootStates_foot_position_rt_body
{
public:
  explicit Init_FootStates_foot_position_rt_body(::rbq_msgs::msg::FootStates & msg)
  : msg_(msg)
  {}
  Init_FootStates_foot_velocity_rt_body foot_position_rt_body(::rbq_msgs::msg::FootStates::_foot_position_rt_body_type arg)
  {
    msg_.foot_position_rt_body = std::move(arg);
    return Init_FootStates_foot_velocity_rt_body(msg_);
  }

private:
  ::rbq_msgs::msg::FootStates msg_;
};

class Init_FootStates_header
{
public:
  Init_FootStates_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FootStates_foot_position_rt_body header(::rbq_msgs::msg::FootStates::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_FootStates_foot_position_rt_body(msg_);
  }

private:
  ::rbq_msgs::msg::FootStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rbq_msgs::msg::FootStates>()
{
  return rbq_msgs::msg::builder::Init_FootStates_header();
}

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__FOOT_STATES__BUILDER_HPP_
