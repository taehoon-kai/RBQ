// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rbq_msgs:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DOCKING_MAX_FAIL_CNT_REACHED'.
/**
  * DOCKING_STATE
  * (ABORT SEQENCE) MAX Docking retry count rechead (10 times)
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_MAX_FAIL_CNT_REACHED = -6
};

/// Constant 'DOCKING_MARKER_POS_INVALID_ROTATION'.
/**
  * (ABORT SEQENCE) Marker rotation angle is more than +-40 degree
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_MARKER_POS_INVALID_ROTATION = -5
};

/// Constant 'DOCKING_MARKER_POS_INVALID_TOO_FAR'.
/**
  * (ABORT SEQENCE) Marker is too far more than 5m
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_MARKER_POS_INVALID_TOO_FAR = -4
};

/// Constant 'DOCKING_MARKER_POS_INVALID_WRONG_DIR'.
/**
  * (ABORT SEQENCE) Marker is detected on front side of robot
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_MARKER_POS_INVALID_WRONG_DIR = -3
};

/// Constant 'DOCKING_MARKER_NOT_FOUND'.
/**
  * (ABORT SEQENCE) Marker not found
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_MARKER_NOT_FOUND = -2
};

/// Constant 'DOCKING_FAILED'.
/**
  * docking failed --> Auto retry
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_FAILED = -1
};

/// Constant 'DOCKING_OPERATION_MODE'.
/**
  * robot is on normal operation
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_OPERATION_MODE = 0
};

/// Constant 'DOCKING_APPROACH_OFFSET'.
/**
  * 1st reach to charger by offset
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_APPROACH_OFFSET = 1
};

/// Constant 'DOCKING_APPROACH'.
/**
  * 2nd reach to charger
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_APPROACH = 2
};

/// Constant 'DOCKING_APPROACH_WIDE'.
/**
  * 3rd reach to charger with wide stance
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_APPROACH_WIDE = 3
};

/// Constant 'DOCKING_SIT_DOWN'.
/**
  * sitting down to charger
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_SIT_DOWN = 4
};

/// Constant 'DOCKING_SUCCESS'.
/**
  * docking success : charger connected
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_SUCCESS = 5
};

/// Constant 'DOCKING_SUCCESS_CHARGING'.
/**
  * docking success : charging
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_SUCCESS_CHARGING = 6
};

/// Constant 'DOCKING_SUCCESS_NO_CHARGING'.
/**
  * docking success : no_charging
 */
enum
{
  rbq_msgs__msg__RobotStatus__DOCKING_SUCCESS_NO_CHARGING = 7
};

/// Constant 'STATE_FALL'.
/**
  * gait_state constants
  * Fall Mode - Triggered upon unexpected loss of balance
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_FALL = -2
};

/// Constant 'STATE_OFF'.
/**
  * Control Off - All actuators disabled
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_OFF = -1
};

/// Constant 'STATE_SIT'.
/**
  * Sitting - Low posture, resting on the ground
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_SIT = 0
};

/// Constant 'STATE_STAND'.
/**
  * Standing - Neutral posture, ready to walk
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_STAND = 1
};

/// Constant 'STATE_WALK'.
/**
  * Walk Mode - walking Trot gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_WALK = 2
};

/// Constant 'STATE_AIM'.
/**
  * Aim Mode - Aiming posture for targeting
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_AIM = 3
};

/// Constant 'STATE_STAIRS'.
/**
  * Stairs Mode - Stair-adaptive gait using camera sensor
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_STAIRS = 4
};

/// Constant 'STATE_WAVE'.
/**
  * Wave Mode - walking Walk gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_WAVE = 5
};

/// Constant 'STATE_RUN'.
/**
  * Run Mode - High-speed gait (if supported)
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RUN = 6
};

/// Constant 'STATE_RL_TROT'.
/**
  * RL Trot - Reinforcement Learning Trot gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_TROT = 30
};

/// Constant 'STATE_RL_FRONT_WALK'.
/**
  * RL Front Walk - Reinforcement Learning Front Walk gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_FRONT_WALK = 31
};

/// Constant 'STATE_RL_LEFT_WALK'.
/**
  * RL Left Walk - Reinforcement Learning Left Walk gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_LEFT_WALK = 33
};

/// Constant 'STATE_RL_RIGHT_WALK'.
/**
  * RL Right Walk - Reinforcement Learning Right Walk gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_RIGHT_WALK = 34
};

/// Constant 'STATE_RL_BOUND'.
/**
  * RL Bound - Reinforcement Learning Bound gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_BOUND = 35
};

/// Constant 'STATE_RL_PACE'.
/**
  * RL Pace - Reinforcement Learning Pace gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_PACE = 36
};

/// Constant 'STATE_RL_PRONK'.
/**
  * RL Pronk - Reinforcement Learning Pronk gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_PRONK = 37
};

/// Constant 'STATE_RL_3LEG_HR'.
/**
  * RL 3Leg HR - Reinforcement Learning 3-Leg gait (Hind Right)
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_3LEG_HR = 38
};

/// Constant 'STATE_RL_3LEG_HL'.
/**
  * RL 3Leg HL - Reinforcement Learning 3-Leg gait (Hind Left)
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_3LEG_HL = 39
};

/// Constant 'STATE_RL_3LEG_FR'.
/**
  * RL 3Leg FR - Reinforcement Learning 3-Leg gait (Front Right)
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_3LEG_FR = 40
};

/// Constant 'STATE_RL_3LEG_FL'.
/**
  * RL 3Leg FL - Reinforcement Learning 3-Leg gait (Front Left)
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_3LEG_FL = 41
};

/// Constant 'STATE_RL_TROT_VISION'.
/**
  * RL Trot Vision - Reinforcement Learning Trot with Vision
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_TROT_VISION = 42
};

/// Constant 'STATE_RL_TROT_RUN'.
/**
  * RL Trot Run - Reinforcement Learning Trot Run gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_TROT_RUN = 45
};

/// Constant 'STATE_RL_SILENT'.
/**
  * RL Silent - Reinforcement Learning Silent gait
 */
enum
{
  rbq_msgs__msg__RobotStatus__STATE_RL_SILENT = 46
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RobotStatus in the package rbq_msgs.
typedef struct rbq_msgs__msg__RobotStatus
{
  std_msgs__msg__Header header;
  /// Motor control enabled (1 = enabled, 0 = not enabled)
  bool con_start;
  /// Robot is in ready position (1 = ready, 0 = not ready)
  bool ready_pos;
  /// Robot is in ground/sitting position (1 = sitting, 0 = not sitting)
  bool ground_pos;
  /// Force control mode enabled (1 = enabled, 0 = disabled)
  bool force_con;
  /// External joystick connected (1 = connected, 0 = not connected)
  bool ext_joy;
  /// Robot is standing (1 = standing, 0 = not standing)
  bool is_standing;
  /// CAN communication check (1 = success, 0 = failure)
  bool can_check;
  /// Encoder homing status (1 = success, 0 = failure)
  bool find_home;
  /// Current gait mode identifier (returns value defined GAIT_STATE enum)
  int8_t gait_id;
  /// Fall detection status (1 = robot has fallen, 0 = normal)
  bool is_fall;
  /// Docking process status (returns value defined in DOCKING_STATE enum)
  int8_t docking_state;
  /// IMU connection status (1 = success, 0 = failure)
  bool imu_success;
} rbq_msgs__msg__RobotStatus;

// Struct for a sequence of rbq_msgs__msg__RobotStatus.
typedef struct rbq_msgs__msg__RobotStatus__Sequence
{
  rbq_msgs__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rbq_msgs__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RBQ_MSGS__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
