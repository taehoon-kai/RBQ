// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rbq_msgs:msg/HighLevelCommand.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__TRAITS_HPP_
#define RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rbq_msgs/msg/detail/high_level_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rbq_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HighLevelCommand & msg,
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

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: vel_x
  {
    out << "vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_x, out);
    out << ", ";
  }

  // member: vel_y
  {
    out << "vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_y, out);
    out << ", ";
  }

  // member: omega_z
  {
    out << "omega_z: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_z, out);
    out << ", ";
  }

  // member: delta_body_h
  {
    out << "delta_body_h: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_body_h, out);
    out << ", ";
  }

  // member: delta_foot_h
  {
    out << "delta_foot_h: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_foot_h, out);
    out << ", ";
  }

  // member: gait_state
  {
    out << "gait_state: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_state, out);
    out << ", ";
  }

  // member: gait_transition
  {
    out << "gait_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_transition, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HighLevelCommand & msg,
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

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: vel_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_x: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_x, out);
    out << "\n";
  }

  // member: vel_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_y: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_y, out);
    out << "\n";
  }

  // member: omega_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "omega_z: ";
    rosidl_generator_traits::value_to_yaml(msg.omega_z, out);
    out << "\n";
  }

  // member: delta_body_h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_body_h: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_body_h, out);
    out << "\n";
  }

  // member: delta_foot_h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_foot_h: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_foot_h, out);
    out << "\n";
  }

  // member: gait_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_state: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_state, out);
    out << "\n";
  }

  // member: gait_transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_transition, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HighLevelCommand & msg, bool use_flow_style = false)
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
  const rbq_msgs::msg::HighLevelCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  rbq_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rbq_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rbq_msgs::msg::HighLevelCommand & msg)
{
  return rbq_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rbq_msgs::msg::HighLevelCommand>()
{
  return "rbq_msgs::msg::HighLevelCommand";
}

template<>
inline const char * name<rbq_msgs::msg::HighLevelCommand>()
{
  return "rbq_msgs/msg/HighLevelCommand";
}

template<>
struct has_fixed_size<rbq_msgs::msg::HighLevelCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rbq_msgs::msg::HighLevelCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rbq_msgs::msg::HighLevelCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__TRAITS_HPP_
