// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rbq_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
#define RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rbq_msgs/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rbq_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryState_status
{
public:
  explicit Init_BatteryState_status(::rbq_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  ::rbq_msgs::msg::BatteryState status(::rbq_msgs::msg::BatteryState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rbq_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_temperatures
{
public:
  explicit Init_BatteryState_temperatures(::rbq_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_status temperatures(::rbq_msgs::msg::BatteryState::_temperatures_type arg)
  {
    msg_.temperatures = std::move(arg);
    return Init_BatteryState_status(msg_);
  }

private:
  ::rbq_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_voltage
{
public:
  explicit Init_BatteryState_voltage(::rbq_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_temperatures voltage(::rbq_msgs::msg::BatteryState::_voltage_type arg)
  {
    msg_.voltage = std::move(arg);
    return Init_BatteryState_temperatures(msg_);
  }

private:
  ::rbq_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_current
{
public:
  explicit Init_BatteryState_current(::rbq_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_voltage current(::rbq_msgs::msg::BatteryState::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_BatteryState_voltage(msg_);
  }

private:
  ::rbq_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_charge_percentage
{
public:
  explicit Init_BatteryState_charge_percentage(::rbq_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_current charge_percentage(::rbq_msgs::msg::BatteryState::_charge_percentage_type arg)
  {
    msg_.charge_percentage = std::move(arg);
    return Init_BatteryState_current(msg_);
  }

private:
  ::rbq_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_identifier
{
public:
  explicit Init_BatteryState_identifier(::rbq_msgs::msg::BatteryState & msg)
  : msg_(msg)
  {}
  Init_BatteryState_charge_percentage identifier(::rbq_msgs::msg::BatteryState::_identifier_type arg)
  {
    msg_.identifier = std::move(arg);
    return Init_BatteryState_charge_percentage(msg_);
  }

private:
  ::rbq_msgs::msg::BatteryState msg_;
};

class Init_BatteryState_header
{
public:
  Init_BatteryState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatteryState_identifier header(::rbq_msgs::msg::BatteryState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BatteryState_identifier(msg_);
  }

private:
  ::rbq_msgs::msg::BatteryState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rbq_msgs::msg::BatteryState>()
{
  return rbq_msgs::msg::builder::Init_BatteryState_header();
}

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__BUILDER_HPP_
