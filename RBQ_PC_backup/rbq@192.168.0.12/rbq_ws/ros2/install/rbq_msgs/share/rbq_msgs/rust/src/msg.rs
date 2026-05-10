#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rbq_msgs__msg__HighLevelCommand
/// gait_state constants

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct HighLevelCommand {
    /// Message fields
    /// ROS message header with timestamp and frame_id
    pub header: std_msgs::msg::Header,

    /// Command identifier for tracking/logging purposes
    pub identifier: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::HighLevelCommand::default())
  }
}

impl rosidl_runtime_rs::Message for HighLevelCommand {
  type RmwMsg = super::msg::rmw::HighLevelCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        identifier: msg.identifier.as_str().into(),
        roll: msg.roll,
        pitch: msg.pitch,
        yaw: msg.yaw,
        vel_x: msg.vel_x,
        vel_y: msg.vel_y,
        omega_z: msg.omega_z,
        delta_body_h: msg.delta_body_h,
        delta_foot_h: msg.delta_foot_h,
        gait_state: msg.gait_state,
        gait_transition: msg.gait_transition,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        identifier: msg.identifier.as_str().into(),
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      vel_x: msg.vel_x,
      vel_y: msg.vel_y,
      omega_z: msg.omega_z,
      delta_body_h: msg.delta_body_h,
      delta_foot_h: msg.delta_foot_h,
      gait_state: msg.gait_state,
      gait_transition: msg.gait_transition,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      identifier: msg.identifier.to_string(),
      roll: msg.roll,
      pitch: msg.pitch,
      yaw: msg.yaw,
      vel_x: msg.vel_x,
      vel_y: msg.vel_y,
      omega_z: msg.omega_z,
      delta_body_h: msg.delta_body_h,
      delta_foot_h: msg.delta_foot_h,
      gait_state: msg.gait_state,
      gait_transition: msg.gait_transition,
    }
  }
}


// Corresponds to rbq_msgs__msg__BatteryState
/// Status

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BatteryState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub identifier: std::string::String,


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
    pub temperatures: Vec<f64>,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BatteryState::default())
  }
}

impl rosidl_runtime_rs::Message for BatteryState {
  type RmwMsg = super::msg::rmw::BatteryState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        identifier: msg.identifier.as_str().into(),
        charge_percentage: msg.charge_percentage,
        current: msg.current,
        voltage: msg.voltage,
        temperatures: msg.temperatures.into(),
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        identifier: msg.identifier.as_str().into(),
      charge_percentage: msg.charge_percentage,
      current: msg.current,
      voltage: msg.voltage,
        temperatures: msg.temperatures.as_slice().into(),
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      identifier: msg.identifier.to_string(),
      charge_percentage: msg.charge_percentage,
      current: msg.current,
      voltage: msg.voltage,
      temperatures: msg.temperatures
          .into_iter()
          .collect(),
      status: msg.status,
    }
  }
}


// Corresponds to rbq_msgs__msg__FootStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FootStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Arrays for 4 legs (FL, FR, RL, RR)
    /// Foot position relative to body frame (4 elements)
    pub foot_position_rt_body: Vec<geometry_msgs::msg::Point>,

    /// Foot velocity relative to body frame (4 elements)
    pub foot_velocity_rt_body: Vec<geometry_msgs::msg::Point>,

    /// Contact state for each foot (4 elements)
    pub contact: Vec<u8>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::FootStates::default())
  }
}

impl rosidl_runtime_rs::Message for FootStates {
  type RmwMsg = super::msg::rmw::FootStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        foot_position_rt_body: msg.foot_position_rt_body
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        foot_velocity_rt_body: msg.foot_velocity_rt_body
          .into_iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        contact: msg.contact.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        foot_position_rt_body: msg.foot_position_rt_body
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        foot_velocity_rt_body: msg.foot_velocity_rt_body
          .iter()
          .map(|elem| geometry_msgs::msg::Point::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        contact: msg.contact.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      foot_position_rt_body: msg.foot_position_rt_body
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      foot_velocity_rt_body: msg.foot_velocity_rt_body
          .into_iter()
          .map(geometry_msgs::msg::Point::from_rmw_message)
          .collect(),
      contact: msg.contact
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rbq_msgs__msg__RobotStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotStatus::default())
  }
}

impl rosidl_runtime_rs::Message for RobotStatus {
  type RmwMsg = super::msg::rmw::RobotStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        con_start: msg.con_start,
        ready_pos: msg.ready_pos,
        ground_pos: msg.ground_pos,
        force_con: msg.force_con,
        ext_joy: msg.ext_joy,
        is_standing: msg.is_standing,
        can_check: msg.can_check,
        find_home: msg.find_home,
        gait_id: msg.gait_id,
        is_fall: msg.is_fall,
        docking_state: msg.docking_state,
        imu_success: msg.imu_success,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      con_start: msg.con_start,
      ready_pos: msg.ready_pos,
      ground_pos: msg.ground_pos,
      force_con: msg.force_con,
      ext_joy: msg.ext_joy,
      is_standing: msg.is_standing,
      can_check: msg.can_check,
      find_home: msg.find_home,
      gait_id: msg.gait_id,
      is_fall: msg.is_fall,
      docking_state: msg.docking_state,
      imu_success: msg.imu_success,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      con_start: msg.con_start,
      ready_pos: msg.ready_pos,
      ground_pos: msg.ground_pos,
      force_con: msg.force_con,
      ext_joy: msg.ext_joy,
      is_standing: msg.is_standing,
      can_check: msg.can_check,
      find_home: msg.find_home,
      gait_id: msg.gait_id,
      is_fall: msg.is_fall,
      docking_state: msg.docking_state,
      imu_success: msg.imu_success,
    }
  }
}


// Corresponds to rbq_msgs__msg__JointStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct JointStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// Joint Detail Information
    /// Connection and Temperature Status
    /// Joint connection status (true = connected, false = disconnected)
    pub connected: Vec<bool>,

    /// Board temperature in Celsius
    pub temperature: Vec<i8>,

    /// Motor temperature in Celsius
    pub motor_temp: Vec<i8>,

    /// Motor Status Flags
    /// FET (Field Effect Transistor) status (true = ON, false = OFF)
    pub status_fet: Vec<bool>,

    /// Motor running status (true = running, false = stopped)
    pub status_run: Vec<bool>,

    /// Initialization status (true = initialized, false = not initialized)
    pub status_init: Vec<bool>,

    /// Control mode status (true = position control, false = torque control)
    pub status_mod: Vec<bool>,

    /// Nonius count error (true = error, false = normal)
    pub status_non_ctr: Vec<bool>,

    /// Battery status (true = low battery, false = normal)
    pub status_bat: Vec<bool>,

    /// Calibration status (true = in calibration mode, false = normal)
    pub status_calib: Vec<bool>,

    /// Motor error status (true = error, false = normal)
    pub status_mt_err: Vec<bool>,

    /// JAM error status (true = jammed, false = normal)
    pub status_jam: Vec<bool>,

    /// Over current error (true = over current, false = normal)
    pub status_cur: Vec<bool>,

    /// Big position error (true = large error, false = normal)
    pub status_big: Vec<bool>,

    /// Input error (true = input error, false = normal)
    pub status_inp: Vec<bool>,

    /// FET driver fault error (true = fault, false = normal)
    pub status_flt: Vec<bool>,

    /// Temperature error (true = over temperature, false = normal)
    pub status_tmp: Vec<bool>,

    /// Position limit error - lower bound (true = limit reached, false = normal)
    pub status_ps1: Vec<bool>,

    /// Position limit error - upper bound (true = limit reached, false = normal)
    pub status_ps2: Vec<bool>,

    /// Reserved status bit
    pub status_rsvd: Vec<bool>,

    /// Control Data
    /// Reference position in radians
    pub position_ref: Vec<f32>,

    /// Encoder position in radians
    pub position_enc: Vec<f32>,

    /// Joint velocity in rad/s
    pub velocity: Vec<f32>,

    /// Reference torque in Nm
    pub torque_ref: Vec<f32>,

    /// Motor current in Amperes
    pub current: Vec<f32>,

    /// Proportional gain (P gain)
    pub kp: Vec<f32>,

    /// Derivative gain (D gain)
    pub kd: Vec<f32>,

    /// Joint owner ID (which controller owns this joint)
    pub owner: Vec<i32>,

}



impl Default for JointStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::JointStatus::default())
  }
}

impl rosidl_runtime_rs::Message for JointStatus {
  type RmwMsg = super::msg::rmw::JointStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        connected: msg.connected.into(),
        temperature: msg.temperature.into(),
        motor_temp: msg.motor_temp.into(),
        status_fet: msg.status_fet.into(),
        status_run: msg.status_run.into(),
        status_init: msg.status_init.into(),
        status_mod: msg.status_mod.into(),
        status_non_ctr: msg.status_non_ctr.into(),
        status_bat: msg.status_bat.into(),
        status_calib: msg.status_calib.into(),
        status_mt_err: msg.status_mt_err.into(),
        status_jam: msg.status_jam.into(),
        status_cur: msg.status_cur.into(),
        status_big: msg.status_big.into(),
        status_inp: msg.status_inp.into(),
        status_flt: msg.status_flt.into(),
        status_tmp: msg.status_tmp.into(),
        status_ps1: msg.status_ps1.into(),
        status_ps2: msg.status_ps2.into(),
        status_rsvd: msg.status_rsvd.into(),
        position_ref: msg.position_ref.into(),
        position_enc: msg.position_enc.into(),
        velocity: msg.velocity.into(),
        torque_ref: msg.torque_ref.into(),
        current: msg.current.into(),
        kp: msg.kp.into(),
        kd: msg.kd.into(),
        owner: msg.owner.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        connected: msg.connected.as_slice().into(),
        temperature: msg.temperature.as_slice().into(),
        motor_temp: msg.motor_temp.as_slice().into(),
        status_fet: msg.status_fet.as_slice().into(),
        status_run: msg.status_run.as_slice().into(),
        status_init: msg.status_init.as_slice().into(),
        status_mod: msg.status_mod.as_slice().into(),
        status_non_ctr: msg.status_non_ctr.as_slice().into(),
        status_bat: msg.status_bat.as_slice().into(),
        status_calib: msg.status_calib.as_slice().into(),
        status_mt_err: msg.status_mt_err.as_slice().into(),
        status_jam: msg.status_jam.as_slice().into(),
        status_cur: msg.status_cur.as_slice().into(),
        status_big: msg.status_big.as_slice().into(),
        status_inp: msg.status_inp.as_slice().into(),
        status_flt: msg.status_flt.as_slice().into(),
        status_tmp: msg.status_tmp.as_slice().into(),
        status_ps1: msg.status_ps1.as_slice().into(),
        status_ps2: msg.status_ps2.as_slice().into(),
        status_rsvd: msg.status_rsvd.as_slice().into(),
        position_ref: msg.position_ref.as_slice().into(),
        position_enc: msg.position_enc.as_slice().into(),
        velocity: msg.velocity.as_slice().into(),
        torque_ref: msg.torque_ref.as_slice().into(),
        current: msg.current.as_slice().into(),
        kp: msg.kp.as_slice().into(),
        kd: msg.kd.as_slice().into(),
        owner: msg.owner.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      connected: msg.connected
          .into_iter()
          .collect(),
      temperature: msg.temperature
          .into_iter()
          .collect(),
      motor_temp: msg.motor_temp
          .into_iter()
          .collect(),
      status_fet: msg.status_fet
          .into_iter()
          .collect(),
      status_run: msg.status_run
          .into_iter()
          .collect(),
      status_init: msg.status_init
          .into_iter()
          .collect(),
      status_mod: msg.status_mod
          .into_iter()
          .collect(),
      status_non_ctr: msg.status_non_ctr
          .into_iter()
          .collect(),
      status_bat: msg.status_bat
          .into_iter()
          .collect(),
      status_calib: msg.status_calib
          .into_iter()
          .collect(),
      status_mt_err: msg.status_mt_err
          .into_iter()
          .collect(),
      status_jam: msg.status_jam
          .into_iter()
          .collect(),
      status_cur: msg.status_cur
          .into_iter()
          .collect(),
      status_big: msg.status_big
          .into_iter()
          .collect(),
      status_inp: msg.status_inp
          .into_iter()
          .collect(),
      status_flt: msg.status_flt
          .into_iter()
          .collect(),
      status_tmp: msg.status_tmp
          .into_iter()
          .collect(),
      status_ps1: msg.status_ps1
          .into_iter()
          .collect(),
      status_ps2: msg.status_ps2
          .into_iter()
          .collect(),
      status_rsvd: msg.status_rsvd
          .into_iter()
          .collect(),
      position_ref: msg.position_ref
          .into_iter()
          .collect(),
      position_enc: msg.position_enc
          .into_iter()
          .collect(),
      velocity: msg.velocity
          .into_iter()
          .collect(),
      torque_ref: msg.torque_ref
          .into_iter()
          .collect(),
      current: msg.current
          .into_iter()
          .collect(),
      kp: msg.kp
          .into_iter()
          .collect(),
      kd: msg.kd
          .into_iter()
          .collect(),
      owner: msg.owner
          .into_iter()
          .collect(),
    }
  }
}


