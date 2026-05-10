// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rbq_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__FOOT_STATES__TRAITS_HPP_
#define RBQ_MSGS__MSG__DETAIL__FOOT_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rbq_msgs/msg/detail/foot_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'foot_position_rt_body'
// Member 'foot_velocity_rt_body'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rbq_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const FootStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: foot_position_rt_body
  {
    if (msg.foot_position_rt_body.size() == 0) {
      out << "foot_position_rt_body: []";
    } else {
      out << "foot_position_rt_body: [";
      size_t pending_items = msg.foot_position_rt_body.size();
      for (auto item : msg.foot_position_rt_body) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: foot_velocity_rt_body
  {
    if (msg.foot_velocity_rt_body.size() == 0) {
      out << "foot_velocity_rt_body: []";
    } else {
      out << "foot_velocity_rt_body: [";
      size_t pending_items = msg.foot_velocity_rt_body.size();
      for (auto item : msg.foot_velocity_rt_body) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: contact
  {
    if (msg.contact.size() == 0) {
      out << "contact: []";
    } else {
      out << "contact: [";
      size_t pending_items = msg.contact.size();
      for (auto item : msg.contact) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FootStates & msg,
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

  // member: foot_position_rt_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_position_rt_body.size() == 0) {
      out << "foot_position_rt_body: []\n";
    } else {
      out << "foot_position_rt_body:\n";
      for (auto item : msg.foot_position_rt_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: foot_velocity_rt_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.foot_velocity_rt_body.size() == 0) {
      out << "foot_velocity_rt_body: []\n";
    } else {
      out << "foot_velocity_rt_body:\n";
      for (auto item : msg.foot_velocity_rt_body) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: contact
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.contact.size() == 0) {
      out << "contact: []\n";
    } else {
      out << "contact:\n";
      for (auto item : msg.contact) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FootStates & msg, bool use_flow_style = false)
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
  const rbq_msgs::msg::FootStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  rbq_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rbq_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rbq_msgs::msg::FootStates & msg)
{
  return rbq_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rbq_msgs::msg::FootStates>()
{
  return "rbq_msgs::msg::FootStates";
}

template<>
inline const char * name<rbq_msgs::msg::FootStates>()
{
  return "rbq_msgs/msg/FootStates";
}

template<>
struct has_fixed_size<rbq_msgs::msg::FootStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rbq_msgs::msg::FootStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rbq_msgs::msg::FootStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RBQ_MSGS__MSG__DETAIL__FOOT_STATES__TRAITS_HPP_
