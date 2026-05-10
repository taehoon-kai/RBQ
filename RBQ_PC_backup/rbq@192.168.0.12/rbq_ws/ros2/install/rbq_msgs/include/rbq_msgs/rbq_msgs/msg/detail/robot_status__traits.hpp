// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rbq_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
#define RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rbq_msgs/msg/detail/robot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rbq_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: con_start
  {
    out << "con_start: ";
    rosidl_generator_traits::value_to_yaml(msg.con_start, out);
    out << ", ";
  }

  // member: ready_pos
  {
    out << "ready_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.ready_pos, out);
    out << ", ";
  }

  // member: ground_pos
  {
    out << "ground_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_pos, out);
    out << ", ";
  }

  // member: force_con
  {
    out << "force_con: ";
    rosidl_generator_traits::value_to_yaml(msg.force_con, out);
    out << ", ";
  }

  // member: ext_joy
  {
    out << "ext_joy: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_joy, out);
    out << ", ";
  }

  // member: is_standing
  {
    out << "is_standing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_standing, out);
    out << ", ";
  }

  // member: can_check
  {
    out << "can_check: ";
    rosidl_generator_traits::value_to_yaml(msg.can_check, out);
    out << ", ";
  }

  // member: find_home
  {
    out << "find_home: ";
    rosidl_generator_traits::value_to_yaml(msg.find_home, out);
    out << ", ";
  }

  // member: gait_id
  {
    out << "gait_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_id, out);
    out << ", ";
  }

  // member: is_fall
  {
    out << "is_fall: ";
    rosidl_generator_traits::value_to_yaml(msg.is_fall, out);
    out << ", ";
  }

  // member: docking_state
  {
    out << "docking_state: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_state, out);
    out << ", ";
  }

  // member: imu_success
  {
    out << "imu_success: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotStatus & msg,
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

  // member: con_start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "con_start: ";
    rosidl_generator_traits::value_to_yaml(msg.con_start, out);
    out << "\n";
  }

  // member: ready_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.ready_pos, out);
    out << "\n";
  }

  // member: ground_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ground_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.ground_pos, out);
    out << "\n";
  }

  // member: force_con
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_con: ";
    rosidl_generator_traits::value_to_yaml(msg.force_con, out);
    out << "\n";
  }

  // member: ext_joy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ext_joy: ";
    rosidl_generator_traits::value_to_yaml(msg.ext_joy, out);
    out << "\n";
  }

  // member: is_standing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_standing: ";
    rosidl_generator_traits::value_to_yaml(msg.is_standing, out);
    out << "\n";
  }

  // member: can_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_check: ";
    rosidl_generator_traits::value_to_yaml(msg.can_check, out);
    out << "\n";
  }

  // member: find_home
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "find_home: ";
    rosidl_generator_traits::value_to_yaml(msg.find_home, out);
    out << "\n";
  }

  // member: gait_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gait_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gait_id, out);
    out << "\n";
  }

  // member: is_fall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_fall: ";
    rosidl_generator_traits::value_to_yaml(msg.is_fall, out);
    out << "\n";
  }

  // member: docking_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "docking_state: ";
    rosidl_generator_traits::value_to_yaml(msg.docking_state, out);
    out << "\n";
  }

  // member: imu_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_success: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotStatus & msg, bool use_flow_style = false)
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
  const rbq_msgs::msg::RobotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  rbq_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rbq_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rbq_msgs::msg::RobotStatus & msg)
{
  return rbq_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rbq_msgs::msg::RobotStatus>()
{
  return "rbq_msgs::msg::RobotStatus";
}

template<>
inline const char * name<rbq_msgs::msg::RobotStatus>()
{
  return "rbq_msgs/msg/RobotStatus";
}

template<>
struct has_fixed_size<rbq_msgs::msg::RobotStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<rbq_msgs::msg::RobotStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<rbq_msgs::msg::RobotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__TRAITS_HPP_
