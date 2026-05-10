// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rbq_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__BUILDER_HPP_
#define RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rbq_msgs/msg/detail/joint_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rbq_msgs
{

namespace msg
{

namespace builder
{

class Init_JointStatus_owner
{
public:
  explicit Init_JointStatus_owner(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  ::rbq_msgs::msg::JointStatus owner(::rbq_msgs::msg::JointStatus::_owner_type arg)
  {
    msg_.owner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_kd
{
public:
  explicit Init_JointStatus_kd(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_owner kd(::rbq_msgs::msg::JointStatus::_kd_type arg)
  {
    msg_.kd = std::move(arg);
    return Init_JointStatus_owner(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_kp
{
public:
  explicit Init_JointStatus_kp(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_kd kp(::rbq_msgs::msg::JointStatus::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_JointStatus_kd(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_current
{
public:
  explicit Init_JointStatus_current(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_kp current(::rbq_msgs::msg::JointStatus::_current_type arg)
  {
    msg_.current = std::move(arg);
    return Init_JointStatus_kp(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_torque_ref
{
public:
  explicit Init_JointStatus_torque_ref(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_current torque_ref(::rbq_msgs::msg::JointStatus::_torque_ref_type arg)
  {
    msg_.torque_ref = std::move(arg);
    return Init_JointStatus_current(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_velocity
{
public:
  explicit Init_JointStatus_velocity(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_torque_ref velocity(::rbq_msgs::msg::JointStatus::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_JointStatus_torque_ref(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_position_enc
{
public:
  explicit Init_JointStatus_position_enc(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_velocity position_enc(::rbq_msgs::msg::JointStatus::_position_enc_type arg)
  {
    msg_.position_enc = std::move(arg);
    return Init_JointStatus_velocity(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_position_ref
{
public:
  explicit Init_JointStatus_position_ref(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_position_enc position_ref(::rbq_msgs::msg::JointStatus::_position_ref_type arg)
  {
    msg_.position_ref = std::move(arg);
    return Init_JointStatus_position_enc(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_rsvd
{
public:
  explicit Init_JointStatus_status_rsvd(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_position_ref status_rsvd(::rbq_msgs::msg::JointStatus::_status_rsvd_type arg)
  {
    msg_.status_rsvd = std::move(arg);
    return Init_JointStatus_position_ref(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_ps2
{
public:
  explicit Init_JointStatus_status_ps2(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_rsvd status_ps2(::rbq_msgs::msg::JointStatus::_status_ps2_type arg)
  {
    msg_.status_ps2 = std::move(arg);
    return Init_JointStatus_status_rsvd(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_ps1
{
public:
  explicit Init_JointStatus_status_ps1(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_ps2 status_ps1(::rbq_msgs::msg::JointStatus::_status_ps1_type arg)
  {
    msg_.status_ps1 = std::move(arg);
    return Init_JointStatus_status_ps2(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_tmp
{
public:
  explicit Init_JointStatus_status_tmp(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_ps1 status_tmp(::rbq_msgs::msg::JointStatus::_status_tmp_type arg)
  {
    msg_.status_tmp = std::move(arg);
    return Init_JointStatus_status_ps1(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_flt
{
public:
  explicit Init_JointStatus_status_flt(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_tmp status_flt(::rbq_msgs::msg::JointStatus::_status_flt_type arg)
  {
    msg_.status_flt = std::move(arg);
    return Init_JointStatus_status_tmp(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_inp
{
public:
  explicit Init_JointStatus_status_inp(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_flt status_inp(::rbq_msgs::msg::JointStatus::_status_inp_type arg)
  {
    msg_.status_inp = std::move(arg);
    return Init_JointStatus_status_flt(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_big
{
public:
  explicit Init_JointStatus_status_big(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_inp status_big(::rbq_msgs::msg::JointStatus::_status_big_type arg)
  {
    msg_.status_big = std::move(arg);
    return Init_JointStatus_status_inp(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_cur
{
public:
  explicit Init_JointStatus_status_cur(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_big status_cur(::rbq_msgs::msg::JointStatus::_status_cur_type arg)
  {
    msg_.status_cur = std::move(arg);
    return Init_JointStatus_status_big(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_jam
{
public:
  explicit Init_JointStatus_status_jam(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_cur status_jam(::rbq_msgs::msg::JointStatus::_status_jam_type arg)
  {
    msg_.status_jam = std::move(arg);
    return Init_JointStatus_status_cur(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_mt_err
{
public:
  explicit Init_JointStatus_status_mt_err(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_jam status_mt_err(::rbq_msgs::msg::JointStatus::_status_mt_err_type arg)
  {
    msg_.status_mt_err = std::move(arg);
    return Init_JointStatus_status_jam(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_calib
{
public:
  explicit Init_JointStatus_status_calib(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_mt_err status_calib(::rbq_msgs::msg::JointStatus::_status_calib_type arg)
  {
    msg_.status_calib = std::move(arg);
    return Init_JointStatus_status_mt_err(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_bat
{
public:
  explicit Init_JointStatus_status_bat(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_calib status_bat(::rbq_msgs::msg::JointStatus::_status_bat_type arg)
  {
    msg_.status_bat = std::move(arg);
    return Init_JointStatus_status_calib(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_non_ctr
{
public:
  explicit Init_JointStatus_status_non_ctr(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_bat status_non_ctr(::rbq_msgs::msg::JointStatus::_status_non_ctr_type arg)
  {
    msg_.status_non_ctr = std::move(arg);
    return Init_JointStatus_status_bat(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_mod
{
public:
  explicit Init_JointStatus_status_mod(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_non_ctr status_mod(::rbq_msgs::msg::JointStatus::_status_mod_type arg)
  {
    msg_.status_mod = std::move(arg);
    return Init_JointStatus_status_non_ctr(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_init
{
public:
  explicit Init_JointStatus_status_init(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_mod status_init(::rbq_msgs::msg::JointStatus::_status_init_type arg)
  {
    msg_.status_init = std::move(arg);
    return Init_JointStatus_status_mod(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_run
{
public:
  explicit Init_JointStatus_status_run(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_init status_run(::rbq_msgs::msg::JointStatus::_status_run_type arg)
  {
    msg_.status_run = std::move(arg);
    return Init_JointStatus_status_init(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_status_fet
{
public:
  explicit Init_JointStatus_status_fet(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_run status_fet(::rbq_msgs::msg::JointStatus::_status_fet_type arg)
  {
    msg_.status_fet = std::move(arg);
    return Init_JointStatus_status_run(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_motor_temp
{
public:
  explicit Init_JointStatus_motor_temp(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_status_fet motor_temp(::rbq_msgs::msg::JointStatus::_motor_temp_type arg)
  {
    msg_.motor_temp = std::move(arg);
    return Init_JointStatus_status_fet(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_temperature
{
public:
  explicit Init_JointStatus_temperature(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_motor_temp temperature(::rbq_msgs::msg::JointStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_JointStatus_motor_temp(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_connected
{
public:
  explicit Init_JointStatus_connected(::rbq_msgs::msg::JointStatus & msg)
  : msg_(msg)
  {}
  Init_JointStatus_temperature connected(::rbq_msgs::msg::JointStatus::_connected_type arg)
  {
    msg_.connected = std::move(arg);
    return Init_JointStatus_temperature(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

class Init_JointStatus_header
{
public:
  Init_JointStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointStatus_connected header(::rbq_msgs::msg::JointStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JointStatus_connected(msg_);
  }

private:
  ::rbq_msgs::msg::JointStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rbq_msgs::msg::JointStatus>()
{
  return rbq_msgs::msg::builder::Init_JointStatus_header();
}

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__BUILDER_HPP_
