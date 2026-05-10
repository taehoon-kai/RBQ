// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rbq_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
#define RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rbq_msgs/msg/detail/battery_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rbq_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: identifier
  {
    out << "identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier, out);
    out << ", ";
  }

  // member: charge_percentage
  {
    out << "charge_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_percentage, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << ", ";
  }

  // member: voltage
  {
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << ", ";
  }

  // member: temperatures
  {
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []";
    } else {
      out << "temperatures: [";
      size_t pending_items = msg.temperatures.size();
      for (auto item : msg.temperatures) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: identifier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "identifier: ";
    rosidl_generator_traits::value_to_yaml(msg.identifier, out);
    out << "\n";
  }

  // member: charge_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charge_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.charge_percentage, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }

  // member: voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.voltage, out);
    out << "\n";
  }

  // member: temperatures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperatures.size() == 0) {
      out << "temperatures: []\n";
    } else {
      out << "temperatures:\n";
      for (auto item : msg.temperatures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryState & msg, bool use_flow_style = false)
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

}  // namespace rbq_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rbq_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rbq_msgs::msg::BatteryState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rbq_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rbq_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rbq_msgs::msg::BatteryState & msg)
{
  return rbq_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rbq_msgs::msg::BatteryState>()
{
  return "rbq_msgs::msg::BatteryState";
}

template<>
inline const char * name<rbq_msgs::msg::BatteryState>()
{
  return "rbq_msgs/msg/BatteryState";
}

template<>
struct has_fixed_size<rbq_msgs::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rbq_msgs::msg::BatteryState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rbq_msgs::msg::BatteryState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__TRAITS_HPP_
