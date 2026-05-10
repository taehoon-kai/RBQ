// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rbq_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_HPP_
#define RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rbq_msgs__msg__JointStatus __attribute__((deprecated))
#else
# define DEPRECATED__rbq_msgs__msg__JointStatus __declspec(deprecated)
#endif

namespace rbq_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JointStatus_
{
  using Type = JointStatus_<ContainerAllocator>;

  explicit JointStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit JointStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _connected_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _connected_type connected;
  using _temperature_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _temperature_type temperature;
  using _motor_temp_type =
    std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>>;
  _motor_temp_type motor_temp;
  using _status_fet_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_fet_type status_fet;
  using _status_run_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_run_type status_run;
  using _status_init_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_init_type status_init;
  using _status_mod_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_mod_type status_mod;
  using _status_non_ctr_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_non_ctr_type status_non_ctr;
  using _status_bat_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_bat_type status_bat;
  using _status_calib_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_calib_type status_calib;
  using _status_mt_err_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_mt_err_type status_mt_err;
  using _status_jam_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_jam_type status_jam;
  using _status_cur_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_cur_type status_cur;
  using _status_big_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_big_type status_big;
  using _status_inp_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_inp_type status_inp;
  using _status_flt_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_flt_type status_flt;
  using _status_tmp_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_tmp_type status_tmp;
  using _status_ps1_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_ps1_type status_ps1;
  using _status_ps2_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_ps2_type status_ps2;
  using _status_rsvd_type =
    std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>>;
  _status_rsvd_type status_rsvd;
  using _position_ref_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _position_ref_type position_ref;
  using _position_enc_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _position_enc_type position_enc;
  using _velocity_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _velocity_type velocity;
  using _torque_ref_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _torque_ref_type torque_ref;
  using _current_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _current_type current;
  using _kp_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kp_type kp;
  using _kd_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _kd_type kd;
  using _owner_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _owner_type owner;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__connected(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->connected = _arg;
    return *this;
  }
  Type & set__temperature(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__motor_temp(
    const std::vector<int8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int8_t>> & _arg)
  {
    this->motor_temp = _arg;
    return *this;
  }
  Type & set__status_fet(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_fet = _arg;
    return *this;
  }
  Type & set__status_run(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_run = _arg;
    return *this;
  }
  Type & set__status_init(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_init = _arg;
    return *this;
  }
  Type & set__status_mod(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_mod = _arg;
    return *this;
  }
  Type & set__status_non_ctr(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_non_ctr = _arg;
    return *this;
  }
  Type & set__status_bat(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_bat = _arg;
    return *this;
  }
  Type & set__status_calib(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_calib = _arg;
    return *this;
  }
  Type & set__status_mt_err(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_mt_err = _arg;
    return *this;
  }
  Type & set__status_jam(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_jam = _arg;
    return *this;
  }
  Type & set__status_cur(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_cur = _arg;
    return *this;
  }
  Type & set__status_big(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_big = _arg;
    return *this;
  }
  Type & set__status_inp(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_inp = _arg;
    return *this;
  }
  Type & set__status_flt(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_flt = _arg;
    return *this;
  }
  Type & set__status_tmp(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_tmp = _arg;
    return *this;
  }
  Type & set__status_ps1(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_ps1 = _arg;
    return *this;
  }
  Type & set__status_ps2(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_ps2 = _arg;
    return *this;
  }
  Type & set__status_rsvd(
    const std::vector<bool, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<bool>> & _arg)
  {
    this->status_rsvd = _arg;
    return *this;
  }
  Type & set__position_ref(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->position_ref = _arg;
    return *this;
  }
  Type & set__position_enc(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->position_enc = _arg;
    return *this;
  }
  Type & set__velocity(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__torque_ref(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->torque_ref = _arg;
    return *this;
  }
  Type & set__current(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->current = _arg;
    return *this;
  }
  Type & set__kp(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kp = _arg;
    return *this;
  }
  Type & set__kd(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->kd = _arg;
    return *this;
  }
  Type & set__owner(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->owner = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rbq_msgs::msg::JointStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const rbq_msgs::msg::JointStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rbq_msgs::msg::JointStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rbq_msgs::msg::JointStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rbq_msgs::msg::JointStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rbq_msgs::msg::JointStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rbq_msgs::msg::JointStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rbq_msgs::msg::JointStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rbq_msgs::msg::JointStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rbq_msgs::msg::JointStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rbq_msgs__msg__JointStatus
    std::shared_ptr<rbq_msgs::msg::JointStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rbq_msgs__msg__JointStatus
    std::shared_ptr<rbq_msgs::msg::JointStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JointStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->connected != other.connected) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->motor_temp != other.motor_temp) {
      return false;
    }
    if (this->status_fet != other.status_fet) {
      return false;
    }
    if (this->status_run != other.status_run) {
      return false;
    }
    if (this->status_init != other.status_init) {
      return false;
    }
    if (this->status_mod != other.status_mod) {
      return false;
    }
    if (this->status_non_ctr != other.status_non_ctr) {
      return false;
    }
    if (this->status_bat != other.status_bat) {
      return false;
    }
    if (this->status_calib != other.status_calib) {
      return false;
    }
    if (this->status_mt_err != other.status_mt_err) {
      return false;
    }
    if (this->status_jam != other.status_jam) {
      return false;
    }
    if (this->status_cur != other.status_cur) {
      return false;
    }
    if (this->status_big != other.status_big) {
      return false;
    }
    if (this->status_inp != other.status_inp) {
      return false;
    }
    if (this->status_flt != other.status_flt) {
      return false;
    }
    if (this->status_tmp != other.status_tmp) {
      return false;
    }
    if (this->status_ps1 != other.status_ps1) {
      return false;
    }
    if (this->status_ps2 != other.status_ps2) {
      return false;
    }
    if (this->status_rsvd != other.status_rsvd) {
      return false;
    }
    if (this->position_ref != other.position_ref) {
      return false;
    }
    if (this->position_enc != other.position_enc) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->torque_ref != other.torque_ref) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    if (this->kp != other.kp) {
      return false;
    }
    if (this->kd != other.kd) {
      return false;
    }
    if (this->owner != other.owner) {
      return false;
    }
    return true;
  }
  bool operator!=(const JointStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JointStatus_

// alias to use template instance with default allocator
using JointStatus =
  rbq_msgs::msg::JointStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rbq_msgs

#endif  // RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_HPP_
