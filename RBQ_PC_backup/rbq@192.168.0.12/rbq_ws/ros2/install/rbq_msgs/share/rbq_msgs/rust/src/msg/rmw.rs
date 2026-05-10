#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rbq_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__HighLevelCommand() -> *const std::ffi::c_void;
}

#[link(name = "rbq_msgs__rosidl_generator_c")]
extern "C" {
    fn rbq_msgs__msg__HighLevelCommand__init(msg: *mut HighLevelCommand) -> bool;
    fn rbq_msgs__msg__HighLevelCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<HighLevelCommand>, size: usize) -> bool;
    fn rbq_msgs__msg__HighLevelCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<HighLevelCommand>);
    fn rbq_msgs__msg__HighLevelCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<HighLevelCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<HighLevelCommand>) -> bool;
}

// Corresponds to rbq_msgs__msg__HighLevelCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// gait_state constants

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HighLevelCommand {
    /// Message fields
    /// ROS message header with timestamp and frame_id
    pub header: std_msgs::msg::rmw::Header,

    /// Command identifier for tracking/logging purposes
    pub identifier: rosidl_runtime_rs::String,

    /// Body roll angle in degrees (ZYX Euler angles)
    pub roll: f64,

    /// Body pitch angle in degrees (ZYX Euler angles)
    pub pitch: f64,

    /// Body yaw angle in degrees (ZYX Euler angles)
    pub yaw: f64,

    /// Linear velocity in X direction (m/s)
    pub vel_x: f64,

    /// Linear velocity in Y direction (m/s)
    pub vel_y: f64,

    /// Angular velocity around Z axis (rad/s)
    pub omega_z: f64,

    /// Body height adjustment from default (m)
    pub delta_body_h: f64,

    /// Foot height adjustment from default (m)
    pub delta_foot_h: f64,

    /// Target gait state (use constants defined above)
    pub gait_state: i8,

    /// Enable(true)/disable(false) gait transition during command execution
    pub gait_transition: bool,

}

impl HighLevelCommand {
    /// Fall Mode - Triggered upon unexpected loss of balance
    pub const STATE_FALL: i8 = -2;

    /// Control Off - All actuators disabled
    pub const STATE_OFF: i8 = -1;

    /// Sitting - Low posture, resting on the ground
    pub const STATE_SIT: i8 = 0;

    /// Standing - Neutral posture, ready to walk
    pub const STATE_STAND: i8 = 1;

    /// Aim Mode - Aiming posture for targeting
    pub const STATE_AIM: i8 = 2;

    /// Walk Mode - walking Trot gait
    pub const STATE_WALK: i8 = 3;

    /// Stairs Mode - Stair-adaptive gait using camera sensor
    pub const STATE_STAIRS: i8 = 4;

    /// Wave Mode - walking Walk gait
    pub const STATE_WAVE: i8 = 5;

    /// Run Mode - High-speed gait (if supported)
    pub const STATE_RUN: i8 = 6;

    /// RL Trot - Reinforcement Learning Trot gait
    pub const STATE_RL_TROT: i8 = 30;

    /// RL Front Walk - Reinforcement Learning Front Walk gait
    pub const STATE_RL_FRONT_WALK: i8 = 31;

    /// RL Left Walk - Reinforcement Learning Left Walk gait
    pub const STATE_RL_LEFT_WALK: i8 = 33;

    /// RL Right Walk - Reinforcement Learning Right Walk gait
    pub const STATE_RL_RIGHT_WALK: i8 = 34;

    /// RL Bound - Reinforcement Learning Bound gait
    pub const STATE_RL_BOUND: i8 = 35;

    /// RL Pace - Reinforcement Learning Pace gait
    pub const STATE_RL_PACE: i8 = 36;

    /// RL Pronk - Reinforcement Learning Pronk gait
    pub const STATE_RL_PRONK: i8 = 37;

    /// RL 3Leg HR - Reinforcement Learning 3-Leg gait (Hind Right)
    pub const STATE_RL_3LEG_HR: i8 = 38;

    /// RL 3Leg HL - Reinforcement Learning 3-Leg gait (Hind Left)
    pub const STATE_RL_3LEG_HL: i8 = 39;

    /// RL 3Leg FR - Reinforcement Learning 3-Leg gait (Front Right)
    pub const STATE_RL_3LEG_FR: i8 = 40;

    /// RL 3Leg FL - Reinforcement Learning 3-Leg gait (Front Left)
    pub const STATE_RL_3LEG_FL: i8 = 41;

    /// RL Trot Vision - Reinforcement Learning Trot with Vision
    pub const STATE_RL_TROT_VISION: i8 = 42;

    /// RL Trot Run - Reinforcement Learning Trot Run gait
    pub const STATE_RL_TROT_RUN: i8 = 45;

    /// RL Silent - Reinforcement Learning Silent gait
    pub const STATE_RL_SILENT: i8 = 46;

}


impl Default for HighLevelCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rbq_msgs__msg__HighLevelCommand__init(&mut msg as *mut _) {
        panic!("Call to rbq_msgs__msg__HighLevelCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for HighLevelCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__HighLevelCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__HighLevelCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__HighLevelCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for HighLevelCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for HighLevelCommand where Self: Sized {
  const TYPE_NAME: &'static str = "rbq_msgs/msg/HighLevelCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__HighLevelCommand() }
  }
}


#[link(name = "rbq_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__BatteryState() -> *const std::ffi::c_void;
}

#[link(name = "rbq_msgs__rosidl_generator_c")]
extern "C" {
    fn rbq_msgs__msg__BatteryState__init(msg: *mut BatteryState) -> bool;
    fn rbq_msgs__msg__BatteryState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BatteryState>, size: usize) -> bool;
    fn rbq_msgs__msg__BatteryState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BatteryState>);
    fn rbq_msgs__msg__BatteryState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BatteryState>, out_seq: *mut rosidl_runtime_rs::Sequence<BatteryState>) -> bool;
}

// Corresponds to rbq_msgs__msg__BatteryState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Status

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub identifier: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub charge_percentage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub voltage: f64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub temperatures: rosidl_runtime_rs::Sequence<f64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: u8,

}

impl BatteryState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_MISSING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_CHARGING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_DISCHARGING: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_BOOTING: u8 = 4;

}


impl Default for BatteryState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rbq_msgs__msg__BatteryState__init(&mut msg as *mut _) {
        panic!("Call to rbq_msgs__msg__BatteryState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BatteryState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__BatteryState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__BatteryState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__BatteryState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BatteryState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BatteryState where Self: Sized {
  const TYPE_NAME: &'static str = "rbq_msgs/msg/BatteryState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__BatteryState() }
  }
}


#[link(name = "rbq_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__FootStates() -> *const std::ffi::c_void;
}

#[link(name = "rbq_msgs__rosidl_generator_c")]
extern "C" {
    fn rbq_msgs__msg__FootStates__init(msg: *mut FootStates) -> bool;
    fn rbq_msgs__msg__FootStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FootStates>, size: usize) -> bool;
    fn rbq_msgs__msg__FootStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FootStates>);
    fn rbq_msgs__msg__FootStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FootStates>, out_seq: *mut rosidl_runtime_rs::Sequence<FootStates>) -> bool;
}

// Corresponds to rbq_msgs__msg__FootStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FootStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Arrays for 4 legs (FL, FR, RL, RR)
    /// Foot position relative to body frame (4 elements)
    pub foot_position_rt_body: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

    /// Foot velocity relative to body frame (4 elements)
    pub foot_velocity_rt_body: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Point>,

    /// Contact state for each foot (4 elements)
    pub contact: rosidl_runtime_rs::Sequence<u8>,

}

impl FootStates {
    /// Contact constants
    pub const CONTACT_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTACT_MADE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CONTACT_LOST: u8 = 2;

}


impl Default for FootStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rbq_msgs__msg__FootStates__init(&mut msg as *mut _) {
        panic!("Call to rbq_msgs__msg__FootStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FootStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__FootStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__FootStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__FootStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FootStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FootStates where Self: Sized {
  const TYPE_NAME: &'static str = "rbq_msgs/msg/FootStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__FootStates() }
  }
}


#[link(name = "rbq_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__RobotStatus() -> *const std::ffi::c_void;
}

#[link(name = "rbq_msgs__rosidl_generator_c")]
extern "C" {
    fn rbq_msgs__msg__RobotStatus__init(msg: *mut RobotStatus) -> bool;
    fn rbq_msgs__msg__RobotStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>, size: usize) -> bool;
    fn rbq_msgs__msg__RobotStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>);
    fn rbq_msgs__msg__RobotStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotStatus>) -> bool;
}

// Corresponds to rbq_msgs__msg__RobotStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Motor control enabled (1 = enabled, 0 = not enabled)
    pub con_start: bool,

    /// Robot is in ready position (1 = ready, 0 = not ready)
    pub ready_pos: bool,

    /// Robot is in ground/sitting position (1 = sitting, 0 = not sitting)
    pub ground_pos: bool,

    /// Force control mode enabled (1 = enabled, 0 = disabled)
    pub force_con: bool,

    /// External joystick connected (1 = connected, 0 = not connected)
    pub ext_joy: bool,

    /// Robot is standing (1 = standing, 0 = not standing)
    pub is_standing: bool,

    /// CAN communication check (1 = success, 0 = failure)
    pub can_check: bool,

    /// Encoder homing status (1 = success, 0 = failure)
    pub find_home: bool,

    /// Current gait mode identifier (returns value defined GAIT_STATE enum)
    pub gait_id: i8,

    /// Fall detection status (1 = robot has fallen, 0 = normal)
    pub is_fall: bool,

    /// Docking process status (returns value defined in DOCKING_STATE enum)
    pub docking_state: i8,

    /// IMU connection status (1 = success, 0 = failure)
    pub imu_success: bool,

}

impl RobotStatus {
    /// DOCKING_STATE
    /// (ABORT SEQENCE) MAX Docking retry count rechead (10 times)
    pub const DOCKING_MAX_FAIL_CNT_REACHED: i8 = -6;

    /// (ABORT SEQENCE) Marker rotation angle is more than +-40 degree
    pub const DOCKING_MARKER_POS_INVALID_ROTATION: i8 = -5;

    /// (ABORT SEQENCE) Marker is too far more than 5m
    pub const DOCKING_MARKER_POS_INVALID_TOO_FAR: i8 = -4;

    /// (ABORT SEQENCE) Marker is detected on front side of robot
    pub const DOCKING_MARKER_POS_INVALID_WRONG_DIR: i8 = -3;

    /// (ABORT SEQENCE) Marker not found
    pub const DOCKING_MARKER_NOT_FOUND: i8 = -2;

    /// docking failed --> Auto retry
    pub const DOCKING_FAILED: i8 = -1;

    /// robot is on normal operation
    pub const DOCKING_OPERATION_MODE: i8 = 0;

    /// 1st reach to charger by offset
    pub const DOCKING_APPROACH_OFFSET: i8 = 1;

    /// 2nd reach to charger
    pub const DOCKING_APPROACH: i8 = 2;

    /// 3rd reach to charger with wide stance
    pub const DOCKING_APPROACH_WIDE: i8 = 3;

    /// sitting down to charger
    pub const DOCKING_SIT_DOWN: i8 = 4;

    /// docking success : charger connected
    pub const DOCKING_SUCCESS: i8 = 5;

    /// docking success : charging
    pub const DOCKING_SUCCESS_CHARGING: i8 = 6;

    /// docking success : no_charging
    pub const DOCKING_SUCCESS_NO_CHARGING: i8 = 7;

    /// gait_state constants
    /// Fall Mode - Triggered upon unexpected loss of balance
    pub const STATE_FALL: i8 = -2;

    /// Control Off - All actuators disabled
    pub const STATE_OFF: i8 = -1;

    /// Sitting - Low posture, resting on the ground
    pub const STATE_SIT: i8 = 0;

    /// Standing - Neutral posture, ready to walk
    pub const STATE_STAND: i8 = 1;

    /// Walk Mode - walking Trot gait
    pub const STATE_WALK: i8 = 2;

    /// Aim Mode - Aiming posture for targeting
    pub const STATE_AIM: i8 = 3;

    /// Stairs Mode - Stair-adaptive gait using camera sensor
    pub const STATE_STAIRS: i8 = 4;

    /// Wave Mode - walking Walk gait
    pub const STATE_WAVE: i8 = 5;

    /// Run Mode - High-speed gait (if supported)
    pub const STATE_RUN: i8 = 6;

    /// RL Trot - Reinforcement Learning Trot gait
    pub const STATE_RL_TROT: i8 = 30;

    /// RL Front Walk - Reinforcement Learning Front Walk gait
    pub const STATE_RL_FRONT_WALK: i8 = 31;

    /// RL Left Walk - Reinforcement Learning Left Walk gait
    pub const STATE_RL_LEFT_WALK: i8 = 33;

    /// RL Right Walk - Reinforcement Learning Right Walk gait
    pub const STATE_RL_RIGHT_WALK: i8 = 34;

    /// RL Bound - Reinforcement Learning Bound gait
    pub const STATE_RL_BOUND: i8 = 35;

    /// RL Pace - Reinforcement Learning Pace gait
    pub const STATE_RL_PACE: i8 = 36;

    /// RL Pronk - Reinforcement Learning Pronk gait
    pub const STATE_RL_PRONK: i8 = 37;

    /// RL 3Leg HR - Reinforcement Learning 3-Leg gait (Hind Right)
    pub const STATE_RL_3LEG_HR: i8 = 38;

    /// RL 3Leg HL - Reinforcement Learning 3-Leg gait (Hind Left)
    pub const STATE_RL_3LEG_HL: i8 = 39;

    /// RL 3Leg FR - Reinforcement Learning 3-Leg gait (Front Right)
    pub const STATE_RL_3LEG_FR: i8 = 40;

    /// RL 3Leg FL - Reinforcement Learning 3-Leg gait (Front Left)
    pub const STATE_RL_3LEG_FL: i8 = 41;

    /// RL Trot Vision - Reinforcement Learning Trot with Vision
    pub const STATE_RL_TROT_VISION: i8 = 42;

    /// RL Trot Run - Reinforcement Learning Trot Run gait
    pub const STATE_RL_TROT_RUN: i8 = 45;

    /// RL Silent - Reinforcement Learning Silent gait
    pub const STATE_RL_SILENT: i8 = 46;

}


impl Default for RobotStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rbq_msgs__msg__RobotStatus__init(&mut msg as *mut _) {
        panic!("Call to rbq_msgs__msg__RobotStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__RobotStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__RobotStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__RobotStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotStatus where Self: Sized {
  const TYPE_NAME: &'static str = "rbq_msgs/msg/RobotStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__RobotStatus() }
  }
}


#[link(name = "rbq_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__JointStatus() -> *const std::ffi::c_void;
}

#[link(name = "rbq_msgs__rosidl_generator_c")]
extern "C" {
    fn rbq_msgs__msg__JointStatus__init(msg: *mut JointStatus) -> bool;
    fn rbq_msgs__msg__JointStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<JointStatus>, size: usize) -> bool;
    fn rbq_msgs__msg__JointStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<JointStatus>);
    fn rbq_msgs__msg__JointStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<JointStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<JointStatus>) -> bool;
}

// Corresponds to rbq_msgs__msg__JointStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,

    /// Joint Detail Information
    /// Connection and Temperature Status
    /// Joint connection status (true = connected, false = disconnected)
    pub connected: rosidl_runtime_rs::Sequence<bool>,

    /// Board temperature in Celsius
    pub temperature: rosidl_runtime_rs::Sequence<i8>,

    /// Motor temperature in Celsius
    pub motor_temp: rosidl_runtime_rs::Sequence<i8>,

    /// Motor Status Flags
    /// FET (Field Effect Transistor) status (true = ON, false = OFF)
    pub status_fet: rosidl_runtime_rs::Sequence<bool>,

    /// Motor running status (true = running, false = stopped)
    pub status_run: rosidl_runtime_rs::Sequence<bool>,

    /// Initialization status (true = initialized, false = not initialized)
    pub status_init: rosidl_runtime_rs::Sequence<bool>,

    /// Control mode status (true = position control, false = torque control)
    pub status_mod: rosidl_runtime_rs::Sequence<bool>,

    /// Nonius count error (true = error, false = normal)
    pub status_non_ctr: rosidl_runtime_rs::Sequence<bool>,

    /// Battery status (true = low battery, false = normal)
    pub status_bat: rosidl_runtime_rs::Sequence<bool>,

    /// Calibration status (true = in calibration mode, false = normal)
    pub status_calib: rosidl_runtime_rs::Sequence<bool>,

    /// Motor error status (true = error, false = normal)
    pub status_mt_err: rosidl_runtime_rs::Sequence<bool>,

    /// JAM error status (true = jammed, false = normal)
    pub status_jam: rosidl_runtime_rs::Sequence<bool>,

    /// Over current error (true = over current, false = normal)
    pub status_cur: rosidl_runtime_rs::Sequence<bool>,

    /// Big position error (true = large error, false = normal)
    pub status_big: rosidl_runtime_rs::Sequence<bool>,

    /// Input error (true = input error, false = normal)
    pub status_inp: rosidl_runtime_rs::Sequence<bool>,

    /// FET driver fault error (true = fault, false = normal)
    pub status_flt: rosidl_runtime_rs::Sequence<bool>,

    /// Temperature error (true = over temperature, false = normal)
    pub status_tmp: rosidl_runtime_rs::Sequence<bool>,

    /// Position limit error - lower bound (true = limit reached, false = normal)
    pub status_ps1: rosidl_runtime_rs::Sequence<bool>,

    /// Position limit error - upper bound (true = limit reached, false = normal)
    pub status_ps2: rosidl_runtime_rs::Sequence<bool>,

    /// Reserved status bit
    pub status_rsvd: rosidl_runtime_rs::Sequence<bool>,

    /// Control Data
    /// Reference position in radians
    pub position_ref: rosidl_runtime_rs::Sequence<f32>,

    /// Encoder position in radians
    pub position_enc: rosidl_runtime_rs::Sequence<f32>,

    /// Joint velocity in rad/s
    pub velocity: rosidl_runtime_rs::Sequence<f32>,

    /// Reference torque in Nm
    pub torque_ref: rosidl_runtime_rs::Sequence<f32>,

    /// Motor current in Amperes
    pub current: rosidl_runtime_rs::Sequence<f32>,

    /// Proportional gain (P gain)
    pub kp: rosidl_runtime_rs::Sequence<f32>,

    /// Derivative gain (D gain)
    pub kd: rosidl_runtime_rs::Sequence<f32>,

    /// Joint owner ID (which controller owns this joint)
    pub owner: rosidl_runtime_rs::Sequence<i32>,

}



impl Default for JointStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rbq_msgs__msg__JointStatus__init(&mut msg as *mut _) {
        panic!("Call to rbq_msgs__msg__JointStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for JointStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__JointStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__JointStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rbq_msgs__msg__JointStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for JointStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for JointStatus where Self: Sized {
  const TYPE_NAME: &'static str = "rbq_msgs/msg/JointStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rbq_msgs__msg__JointStatus() }
  }
}


