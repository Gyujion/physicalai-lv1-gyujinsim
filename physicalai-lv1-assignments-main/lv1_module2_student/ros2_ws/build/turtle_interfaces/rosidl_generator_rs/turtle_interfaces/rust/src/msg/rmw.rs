#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__msg__Waypoint() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__msg__Waypoint__init(msg: *mut Waypoint) -> bool;
    fn turtle_interfaces__msg__Waypoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Waypoint>, size: usize) -> bool;
    fn turtle_interfaces__msg__Waypoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Waypoint>);
    fn turtle_interfaces__msg__Waypoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Waypoint>, out_seq: *mut rosidl_runtime_rs::Sequence<Waypoint>) -> bool;
}

// Corresponds to turtle_interfaces__msg__Waypoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 문제 6 — 경유점 하나를 표현하는 메시지.
/// 좌표는 정밀도를 위해 float64, 허용 오차는 float32 로 두어
/// "같은 메시지 안에서 서로 다른 실수 타입을 쓸 수 있다" 는 점을 보여 줍니다.
/// (turtlesim 의 Pose 는 float32 지만, 경유점 좌표는 double 로 두는 편이 일반적입니다.)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Waypoint {
    /// 경유점 x 좌표 (turtlesim 좌표계, 0 ~ 11)
    pub x: f64,

    /// 경유점 y 좌표
    pub y: f64,

    /// 도달 판정 허용 오차 — 이 거리 이내면 "도달" 로 봅니다
    pub tolerance: f32,

    /// 사람이 읽는 이름 (예: "corner_A")
    pub label: rosidl_runtime_rs::String,

}



impl Default for Waypoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__msg__Waypoint__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__msg__Waypoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Waypoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__Waypoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__Waypoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__Waypoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Waypoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Waypoint where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/msg/Waypoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__msg__Waypoint() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__msg__WaypointList() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__msg__WaypointList__init(msg: *mut WaypointList) -> bool;
    fn turtle_interfaces__msg__WaypointList__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WaypointList>, size: usize) -> bool;
    fn turtle_interfaces__msg__WaypointList__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WaypointList>);
    fn turtle_interfaces__msg__WaypointList__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WaypointList>, out_seq: *mut rosidl_runtime_rs::Sequence<WaypointList>) -> bool;
}

// Corresponds to turtle_interfaces__msg__WaypointList
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// 문제 6 — 경유점 목록. "중첩(다른 메시지를 필드로)" 과 "배열" 을 모두 사용합니다.
///
/// 다른 패키지의 메시지를 쓸 때는 "패키지/타입" 으로 적습니다 (std_msgs/Header).
/// 같은 패키지의 메시지는 패키지 이름 없이 타입 이름만 적어도 됩니다 (Waypoint).
/// Waypoint[] 처럼 [] 를 붙이면 가변 길이 배열이 됩니다. (고정 길이는 Waypoint)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaypointList {
    /// stamp(발행 시각) + frame_id(좌표계 이름, 여기서는 "world")
    pub header: std_msgs::msg::rmw::Header,

    /// 경유점 배열 — 문제 6 에서는 4개 이상을 채워 발행합니다
    pub waypoints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Waypoint>,

}



impl Default for WaypointList {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__msg__WaypointList__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__msg__WaypointList__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WaypointList {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__WaypointList__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__WaypointList__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__msg__WaypointList__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WaypointList {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WaypointList where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/msg/WaypointList";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__msg__WaypointList() }
  }
}


