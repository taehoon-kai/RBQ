// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rbq_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_
#define RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rbq_msgs/msg/detail/joint_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rbq_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: connected
  {
    if (msg.connected.size() == 0) {
      out << "connected: []";
    } else {
      out << "connected: [";
      size_t pending_items = msg.connected.size();
      for (auto item : msg.connected) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: temperature
  {
    if (msg.temperature.size() == 0) {
      out << "temperature: []";
    } else {
      out << "temperature: [";
      size_t pending_items = msg.temperature.size();
      for (auto item : msg.temperature) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: motor_temp
  {
    if (msg.motor_temp.size() == 0) {
      out << "motor_temp: []";
    } else {
      out << "motor_temp: [";
      size_t pending_items = msg.motor_temp.size();
      for (auto item : msg.motor_temp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_fet
  {
    if (msg.status_fet.size() == 0) {
      out << "status_fet: []";
    } else {
      out << "status_fet: [";
      size_t pending_items = msg.status_fet.size();
      for (auto item : msg.status_fet) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_run
  {
    if (msg.status_run.size() == 0) {
      out << "status_run: []";
    } else {
      out << "status_run: [";
      size_t pending_items = msg.status_run.size();
      for (auto item : msg.status_run) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_init
  {
    if (msg.status_init.size() == 0) {
      out << "status_init: []";
    } else {
      out << "status_init: [";
      size_t pending_items = msg.status_init.size();
      for (auto item : msg.status_init) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_mod
  {
    if (msg.status_mod.size() == 0) {
      out << "status_mod: []";
    } else {
      out << "status_mod: [";
      size_t pending_items = msg.status_mod.size();
      for (auto item : msg.status_mod) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_non_ctr
  {
    if (msg.status_non_ctr.size() == 0) {
      out << "status_non_ctr: []";
    } else {
      out << "status_non_ctr: [";
      size_t pending_items = msg.status_non_ctr.size();
      for (auto item : msg.status_non_ctr) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_bat
  {
    if (msg.status_bat.size() == 0) {
      out << "status_bat: []";
    } else {
      out << "status_bat: [";
      size_t pending_items = msg.status_bat.size();
      for (auto item : msg.status_bat) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_calib
  {
    if (msg.status_calib.size() == 0) {
      out << "status_calib: []";
    } else {
      out << "status_calib: [";
      size_t pending_items = msg.status_calib.size();
      for (auto item : msg.status_calib) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_mt_err
  {
    if (msg.status_mt_err.size() == 0) {
      out << "status_mt_err: []";
    } else {
      out << "status_mt_err: [";
      size_t pending_items = msg.status_mt_err.size();
      for (auto item : msg.status_mt_err) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_jam
  {
    if (msg.status_jam.size() == 0) {
      out << "status_jam: []";
    } else {
      out << "status_jam: [";
      size_t pending_items = msg.status_jam.size();
      for (auto item : msg.status_jam) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_cur
  {
    if (msg.status_cur.size() == 0) {
      out << "status_cur: []";
    } else {
      out << "status_cur: [";
      size_t pending_items = msg.status_cur.size();
      for (auto item : msg.status_cur) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_big
  {
    if (msg.status_big.size() == 0) {
      out << "status_big: []";
    } else {
      out << "status_big: [";
      size_t pending_items = msg.status_big.size();
      for (auto item : msg.status_big) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_inp
  {
    if (msg.status_inp.size() == 0) {
      out << "status_inp: []";
    } else {
      out << "status_inp: [";
      size_t pending_items = msg.status_inp.size();
      for (auto item : msg.status_inp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_flt
  {
    if (msg.status_flt.size() == 0) {
      out << "status_flt: []";
    } else {
      out << "status_flt: [";
      size_t pending_items = msg.status_flt.size();
      for (auto item : msg.status_flt) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_tmp
  {
    if (msg.status_tmp.size() == 0) {
      out << "status_tmp: []";
    } else {
      out << "status_tmp: [";
      size_t pending_items = msg.status_tmp.size();
      for (auto item : msg.status_tmp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_ps1
  {
    if (msg.status_ps1.size() == 0) {
      out << "status_ps1: []";
    } else {
      out << "status_ps1: [";
      size_t pending_items = msg.status_ps1.size();
      for (auto item : msg.status_ps1) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_ps2
  {
    if (msg.status_ps2.size() == 0) {
      out << "status_ps2: []";
    } else {
      out << "status_ps2: [";
      size_t pending_items = msg.status_ps2.size();
      for (auto item : msg.status_ps2) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: status_rsvd
  {
    if (msg.status_rsvd.size() == 0) {
      out << "status_rsvd: []";
    } else {
      out << "status_rsvd: [";
      size_t pending_items = msg.status_rsvd.size();
      for (auto item : msg.status_rsvd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_ref
  {
    if (msg.position_ref.size() == 0) {
      out << "position_ref: []";
    } else {
      out << "position_ref: [";
      size_t pending_items = msg.position_ref.size();
      for (auto item : msg.position_ref) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: position_enc
  {
    if (msg.position_enc.size() == 0) {
      out << "position_enc: []";
    } else {
      out << "position_enc: [";
      size_t pending_items = msg.position_enc.size();
      for (auto item : msg.position_enc) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: torque_ref
  {
    if (msg.torque_ref.size() == 0) {
      out << "torque_ref: []";
    } else {
      out << "torque_ref: [";
      size_t pending_items = msg.torque_ref.size();
      for (auto item : msg.torque_ref) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current
  {
    if (msg.current.size() == 0) {
      out << "current: []";
    } else {
      out << "current: [";
      size_t pending_items = msg.current.size();
      for (auto item : msg.current) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kp
  {
    if (msg.kp.size() == 0) {
      out << "kp: []";
    } else {
      out << "kp: [";
      size_t pending_items = msg.kp.size();
      for (auto item : msg.kp) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: kd
  {
    if (msg.kd.size() == 0) {
      out << "kd: []";
    } else {
      out << "kd: [";
      size_t pending_items = msg.kd.size();
      for (auto item : msg.kd) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: owner
  {
    if (msg.owner.size() == 0) {
      out << "owner: []";
    } else {
      out << "owner: [";
      size_t pending_items = msg.owner.size();
      for (auto item : msg.owner) {
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
  const JointStatus & msg,
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

  // member: connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.connected.size() == 0) {
      out << "connected: []\n";
    } else {
      out << "connected:\n";
      for (auto item : msg.connected) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.temperature.size() == 0) {
      out << "temperature: []\n";
    } else {
      out << "temperature:\n";
      for (auto item : msg.temperature) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: motor_temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.motor_temp.size() == 0) {
      out << "motor_temp: []\n";
    } else {
      out << "motor_temp:\n";
      for (auto item : msg.motor_temp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_fet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_fet.size() == 0) {
      out << "status_fet: []\n";
    } else {
      out << "status_fet:\n";
      for (auto item : msg.status_fet) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_run
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_run.size() == 0) {
      out << "status_run: []\n";
    } else {
      out << "status_run:\n";
      for (auto item : msg.status_run) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_init
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_init.size() == 0) {
      out << "status_init: []\n";
    } else {
      out << "status_init:\n";
      for (auto item : msg.status_init) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_mod
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_mod.size() == 0) {
      out << "status_mod: []\n";
    } else {
      out << "status_mod:\n";
      for (auto item : msg.status_mod) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_non_ctr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_non_ctr.size() == 0) {
      out << "status_non_ctr: []\n";
    } else {
      out << "status_non_ctr:\n";
      for (auto item : msg.status_non_ctr) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_bat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_bat.size() == 0) {
      out << "status_bat: []\n";
    } else {
      out << "status_bat:\n";
      for (auto item : msg.status_bat) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_calib
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_calib.size() == 0) {
      out << "status_calib: []\n";
    } else {
      out << "status_calib:\n";
      for (auto item : msg.status_calib) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_mt_err
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_mt_err.size() == 0) {
      out << "status_mt_err: []\n";
    } else {
      out << "status_mt_err:\n";
      for (auto item : msg.status_mt_err) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_jam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_jam.size() == 0) {
      out << "status_jam: []\n";
    } else {
      out << "status_jam:\n";
      for (auto item : msg.status_jam) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_cur
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_cur.size() == 0) {
      out << "status_cur: []\n";
    } else {
      out << "status_cur:\n";
      for (auto item : msg.status_cur) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_big
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_big.size() == 0) {
      out << "status_big: []\n";
    } else {
      out << "status_big:\n";
      for (auto item : msg.status_big) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_inp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_inp.size() == 0) {
      out << "status_inp: []\n";
    } else {
      out << "status_inp:\n";
      for (auto item : msg.status_inp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_flt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_flt.size() == 0) {
      out << "status_flt: []\n";
    } else {
      out << "status_flt:\n";
      for (auto item : msg.status_flt) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_tmp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_tmp.size() == 0) {
      out << "status_tmp: []\n";
    } else {
      out << "status_tmp:\n";
      for (auto item : msg.status_tmp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_ps1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_ps1.size() == 0) {
      out << "status_ps1: []\n";
    } else {
      out << "status_ps1:\n";
      for (auto item : msg.status_ps1) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_ps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_ps2.size() == 0) {
      out << "status_ps2: []\n";
    } else {
      out << "status_ps2:\n";
      for (auto item : msg.status_ps2) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: status_rsvd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.status_rsvd.size() == 0) {
      out << "status_rsvd: []\n";
    } else {
      out << "status_rsvd:\n";
      for (auto item : msg.status_rsvd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_ref.size() == 0) {
      out << "position_ref: []\n";
    } else {
      out << "position_ref:\n";
      for (auto item : msg.position_ref) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: position_enc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position_enc.size() == 0) {
      out << "position_enc: []\n";
    } else {
      out << "position_enc:\n";
      for (auto item : msg.position_enc) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: torque_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.torque_ref.size() == 0) {
      out << "torque_ref: []\n";
    } else {
      out << "torque_ref:\n";
      for (auto item : msg.torque_ref) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.current.size() == 0) {
      out << "current: []\n";
    } else {
      out << "current:\n";
      for (auto item : msg.current) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kp.size() == 0) {
      out << "kp: []\n";
    } else {
      out << "kp:\n";
      for (auto item : msg.kp) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.kd.size() == 0) {
      out << "kd: []\n";
    } else {
      out << "kd:\n";
      for (auto item : msg.kd) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.owner.size() == 0) {
      out << "owner: []\n";
    } else {
      out << "owner:\n";
      for (auto item : msg.owner) {
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

inline std::string to_yaml(const JointStatus & msg, bool use_flow_style = false)
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
  const rbq_msgs::msg::JointStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  rbq_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rbq_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rbq_msgs::msg::JointStatus & msg)
{
  return rbq_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rbq_msgs::msg::JointStatus>()
{
  return "rbq_msgs::msg::JointStatus";
}

template<>
inline const char * name<rbq_msgs::msg::JointStatus>()
{
  return "rbq_msgs/msg/JointStatus";
}

template<>
struct has_fixed_size<rbq_msgs::msg::JointStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rbq_msgs::msg::JointStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rbq_msgs::msg::JointStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__TRAITS_HPP_
