// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rbq_msgs:msg/HighLevelCommand.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__STRUCT_H_
#define RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATE_FALL'.
/**
  * Fall Mode - Triggered upon unexpected loss of balance
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_FALL = -2
};

/// Constant 'STATE_OFF'.
/**
  * Control Off - All actuators disabled
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_OFF = -1
};

/// Constant 'STATE_SIT'.
/**
  * Sitting - Low posture, resting on the ground
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_SIT = 0
};

/// Constant 'STATE_STAND'.
/**
  * Standing - Neutral posture, ready to walk
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_STAND = 1
};

/// Constant 'STATE_AIM'.
/**
  * Aim Mode - Aiming posture for targeting
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_AIM = 2
};

/// Constant 'STATE_WALK'.
/**
  * Walk Mode - walking Trot gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_WALK = 3
};

/// Constant 'STATE_STAIRS'.
/**
  * Stairs Mode - Stair-adaptive gait using camera sensor
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_STAIRS = 4
};

/// Constant 'STATE_WAVE'.
/**
  * Wave Mode - walking Walk gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_WAVE = 5
};

/// Constant 'STATE_RUN'.
/**
  * Run Mode - High-speed gait (if supported)
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RUN = 6
};

/// Constant 'STATE_RL_TROT'.
/**
  * RL Trot - Reinforcement Learning Trot gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_TROT = 30
};

/// Constant 'STATE_RL_FRONT_WALK'.
/**
  * RL Front Walk - Reinforcement Learning Front Walk gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_FRONT_WALK = 31
};

/// Constant 'STATE_RL_LEFT_WALK'.
/**
  * RL Left Walk - Reinforcement Learning Left Walk gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_LEFT_WALK = 33
};

/// Constant 'STATE_RL_RIGHT_WALK'.
/**
  * RL Right Walk - Reinforcement Learning Right Walk gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_RIGHT_WALK = 34
};

/// Constant 'STATE_RL_BOUND'.
/**
  * RL Bound - Reinforcement Learning Bound gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_BOUND = 35
};

/// Constant 'STATE_RL_PACE'.
/**
  * RL Pace - Reinforcement Learning Pace gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_PACE = 36
};

/// Constant 'STATE_RL_PRONK'.
/**
  * RL Pronk - Reinforcement Learning Pronk gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_PRONK = 37
};

/// Constant 'STATE_RL_3LEG_HR'.
/**
  * RL 3Leg HR - Reinforcement Learning 3-Leg gait (Hind Right)
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_3LEG_HR = 38
};

/// Constant 'STATE_RL_3LEG_HL'.
/**
  * RL 3Leg HL - Reinforcement Learning 3-Leg gait (Hind Left)
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_3LEG_HL = 39
};

/// Constant 'STATE_RL_3LEG_FR'.
/**
  * RL 3Leg FR - Reinforcement Learning 3-Leg gait (Front Right)
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_3LEG_FR = 40
};

/// Constant 'STATE_RL_3LEG_FL'.
/**
  * RL 3Leg FL - Reinforcement Learning 3-Leg gait (Front Left)
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_3LEG_FL = 41
};

/// Constant 'STATE_RL_TROT_VISION'.
/**
  * RL Trot Vision - Reinforcement Learning Trot with Vision
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_TROT_VISION = 42
};

/// Constant 'STATE_RL_TROT_RUN'.
/**
  * RL Trot Run - Reinforcement Learning Trot Run gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_TROT_RUN = 45
};

/// Constant 'STATE_RL_SILENT'.
/**
  * RL Silent - Reinforcement Learning Silent gait
 */
enum
{
  rbq_msgs__msg__HighLevelCommand__STATE_RL_SILENT = 46
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'identifier'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/HighLevelCommand in the package rbq_msgs.
/**
  * gait_state constants
 */
typedef struct rbq_msgs__msg__HighLevelCommand
{
  /// Message fields
  /// ROS message header with timestamp and frame_id
  std_msgs__msg__Header header;
  /// Command identifier for tracking/logging purposes
  rosidl_runtime_c__String identifier;
  /// Body roll angle in degrees (ZYX Euler angles)
  double roll;
  /// Body pitch angle in degrees (ZYX Euler angles)
  double pitch;
  /// Body yaw angle in degrees (ZYX Euler angles)
  double yaw;
  /// Linear velocity in X direction (m/s)
  double vel_x;
  /// Linear velocity in Y direction (m/s)
  double vel_y;
  /// Angular velocity around Z axis (rad/s)
  double omega_z;
  /// Body height adjustment from default (m)
  double delta_body_h;
  /// Foot height adjustment from default (m)
  double delta_foot_h;
  /// Target gait state (use constants defined above)
  int8_t gait_state;
  /// Enable(true)/disable(false) gait transition during command execution
  bool gait_transition;
} rbq_msgs__msg__HighLevelCommand;

// Struct for a sequence of rbq_msgs__msg__HighLevelCommand.
typedef struct rbq_msgs__msg__HighLevelCommand__Sequence
{
  rbq_msgs__msg__HighLevelCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rbq_msgs__msg__HighLevelCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RBQ_MSGS__MSG__DETAIL__HIGH_LEVEL_COMMAND__STRUCT_H_
