// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rbq_msgs:msg/JointStatus.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_H_
#define RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'connected'
// Member 'temperature'
// Member 'motor_temp'
// Member 'status_fet'
// Member 'status_run'
// Member 'status_init'
// Member 'status_mod'
// Member 'status_non_ctr'
// Member 'status_bat'
// Member 'status_calib'
// Member 'status_mt_err'
// Member 'status_jam'
// Member 'status_cur'
// Member 'status_big'
// Member 'status_inp'
// Member 'status_flt'
// Member 'status_tmp'
// Member 'status_ps1'
// Member 'status_ps2'
// Member 'status_rsvd'
// Member 'position_ref'
// Member 'position_enc'
// Member 'velocity'
// Member 'torque_ref'
// Member 'current'
// Member 'kp'
// Member 'kd'
// Member 'owner'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointStatus in the package rbq_msgs.
typedef struct rbq_msgs__msg__JointStatus
{
  std_msgs__msg__Header header;
  /// Joint Detail Information
  /// Connection and Temperature Status
  /// Joint connection status (true = connected, false = disconnected)
  rosidl_runtime_c__boolean__Sequence connected;
  /// Board temperature in Celsius
  rosidl_runtime_c__int8__Sequence temperature;
  /// Motor temperature in Celsius
  rosidl_runtime_c__int8__Sequence motor_temp;
  /// Motor Status Flags
  /// FET (Field Effect Transistor) status (true = ON, false = OFF)
  rosidl_runtime_c__boolean__Sequence status_fet;
  /// Motor running status (true = running, false = stopped)
  rosidl_runtime_c__boolean__Sequence status_run;
  /// Initialization status (true = initialized, false = not initialized)
  rosidl_runtime_c__boolean__Sequence status_init;
  /// Control mode status (true = position control, false = torque control)
  rosidl_runtime_c__boolean__Sequence status_mod;
  /// Nonius count error (true = error, false = normal)
  rosidl_runtime_c__boolean__Sequence status_non_ctr;
  /// Battery status (true = low battery, false = normal)
  rosidl_runtime_c__boolean__Sequence status_bat;
  /// Calibration status (true = in calibration mode, false = normal)
  rosidl_runtime_c__boolean__Sequence status_calib;
  /// Motor error status (true = error, false = normal)
  rosidl_runtime_c__boolean__Sequence status_mt_err;
  /// JAM error status (true = jammed, false = normal)
  rosidl_runtime_c__boolean__Sequence status_jam;
  /// Over current error (true = over current, false = normal)
  rosidl_runtime_c__boolean__Sequence status_cur;
  /// Big position error (true = large error, false = normal)
  rosidl_runtime_c__boolean__Sequence status_big;
  /// Input error (true = input error, false = normal)
  rosidl_runtime_c__boolean__Sequence status_inp;
  /// FET driver fault error (true = fault, false = normal)
  rosidl_runtime_c__boolean__Sequence status_flt;
  /// Temperature error (true = over temperature, false = normal)
  rosidl_runtime_c__boolean__Sequence status_tmp;
  /// Position limit error - lower bound (true = limit reached, false = normal)
  rosidl_runtime_c__boolean__Sequence status_ps1;
  /// Position limit error - upper bound (true = limit reached, false = normal)
  rosidl_runtime_c__boolean__Sequence status_ps2;
  /// Reserved status bit
  rosidl_runtime_c__boolean__Sequence status_rsvd;
  /// Control Data
  /// Reference position in radians
  rosidl_runtime_c__float__Sequence position_ref;
  /// Encoder position in radians
  rosidl_runtime_c__float__Sequence position_enc;
  /// Joint velocity in rad/s
  rosidl_runtime_c__float__Sequence velocity;
  /// Reference torque in Nm
  rosidl_runtime_c__float__Sequence torque_ref;
  /// Motor current in Amperes
  rosidl_runtime_c__float__Sequence current;
  /// Proportional gain (P gain)
  rosidl_runtime_c__float__Sequence kp;
  /// Derivative gain (D gain)
  rosidl_runtime_c__float__Sequence kd;
  /// Joint owner ID (which controller owns this joint)
  rosidl_runtime_c__int32__Sequence owner;
} rbq_msgs__msg__JointStatus;

// Struct for a sequence of rbq_msgs__msg__JointStatus.
typedef struct rbq_msgs__msg__JointStatus__Sequence
{
  rbq_msgs__msg__JointStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rbq_msgs__msg__JointStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RBQ_MSGS__MSG__DETAIL__JOINT_STATUS__STRUCT_H_
