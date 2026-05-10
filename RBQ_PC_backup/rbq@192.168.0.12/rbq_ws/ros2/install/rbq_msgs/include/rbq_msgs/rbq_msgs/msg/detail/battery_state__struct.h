// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rbq_msgs:msg/BatteryState.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
#define RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_UNKNOWN'.
enum
{
  rbq_msgs__msg__BatteryState__STATUS_UNKNOWN = 0
};

/// Constant 'STATUS_MISSING'.
enum
{
  rbq_msgs__msg__BatteryState__STATUS_MISSING = 1
};

/// Constant 'STATUS_CHARGING'.
enum
{
  rbq_msgs__msg__BatteryState__STATUS_CHARGING = 2
};

/// Constant 'STATUS_DISCHARGING'.
enum
{
  rbq_msgs__msg__BatteryState__STATUS_DISCHARGING = 3
};

/// Constant 'STATUS_BOOTING'.
enum
{
  rbq_msgs__msg__BatteryState__STATUS_BOOTING = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'identifier'
#include "rosidl_runtime_c/string.h"
// Member 'temperatures'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BatteryState in the package rbq_msgs.
/**
  * Status
 */
typedef struct rbq_msgs__msg__BatteryState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String identifier;
  double charge_percentage;
  double current;
  double voltage;
  rosidl_runtime_c__double__Sequence temperatures;
  uint8_t status;
} rbq_msgs__msg__BatteryState;

// Struct for a sequence of rbq_msgs__msg__BatteryState.
typedef struct rbq_msgs__msg__BatteryState__Sequence
{
  rbq_msgs__msg__BatteryState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rbq_msgs__msg__BatteryState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RBQ_MSGS__MSG__DETAIL__BATTERY_STATE__STRUCT_H_
