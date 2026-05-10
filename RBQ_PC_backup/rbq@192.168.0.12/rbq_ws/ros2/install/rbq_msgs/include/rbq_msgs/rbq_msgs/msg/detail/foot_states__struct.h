// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rbq_msgs:msg/FootStates.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_H_
#define RBQ_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTACT_UNKNOWN'.
/**
  * Contact constants
 */
enum
{
  rbq_msgs__msg__FootStates__CONTACT_UNKNOWN = 0
};

/// Constant 'CONTACT_MADE'.
enum
{
  rbq_msgs__msg__FootStates__CONTACT_MADE = 1
};

/// Constant 'CONTACT_LOST'.
enum
{
  rbq_msgs__msg__FootStates__CONTACT_LOST = 2
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'foot_position_rt_body'
// Member 'foot_velocity_rt_body'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'contact'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/FootStates in the package rbq_msgs.
typedef struct rbq_msgs__msg__FootStates
{
  std_msgs__msg__Header header;
  /// Arrays for 4 legs (FL, FR, RL, RR)
  /// Foot position relative to body frame (4 elements)
  geometry_msgs__msg__Point__Sequence foot_position_rt_body;
  /// Foot velocity relative to body frame (4 elements)
  geometry_msgs__msg__Point__Sequence foot_velocity_rt_body;
  /// Contact state for each foot (4 elements)
  rosidl_runtime_c__uint8__Sequence contact;
} rbq_msgs__msg__FootStates;

// Struct for a sequence of rbq_msgs__msg__FootStates.
typedef struct rbq_msgs__msg__FootStates__Sequence
{
  rbq_msgs__msg__FootStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rbq_msgs__msg__FootStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RBQ_MSGS__MSG__DETAIL__FOOT_STATES__STRUCT_H_
