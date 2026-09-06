#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to turtle_interfaces__msg__Waypoint
/// 문제 6 — 경유점 하나를 표현하는 메시지.
/// 좌표는 정밀도를 위해 float64, 허용 오차는 float32 로 두어
/// "같은 메시지 안에서 서로 다른 실수 타입을 쓸 수 있다" 는 점을 보여 줍니다.
/// (turtlesim 의 Pose 는 float32 지만, 경유점 좌표는 double 로 두는 편이 일반적입니다.)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Waypoint {
    /// 경유점 x 좌표 (turtlesim 좌표계, 0 ~ 11)
    pub x: f64,

    /// 경유점 y 좌표
    pub y: f64,

    /// 도달 판정 허용 오차 — 이 거리 이내면 "도달" 로 봅니다
    pub tolerance: f32,

    /// 사람이 읽는 이름 (예: "corner_A")
    pub label: std::string::String,

}



impl Default for Waypoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Waypoint::default())
  }
}

impl rosidl_runtime_rs::Message for Waypoint {
  type RmwMsg = super::msg::rmw::Waypoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        tolerance: msg.tolerance,
        label: msg.label.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
      tolerance: msg.tolerance,
        label: msg.label.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      tolerance: msg.tolerance,
      label: msg.label.to_string(),
    }
  }
}


// Corresponds to turtle_interfaces__msg__WaypointList
/// 문제 6 — 경유점 목록. "중첩(다른 메시지를 필드로)" 과 "배열" 을 모두 사용합니다.
///
/// 다른 패키지의 메시지를 쓸 때는 "패키지/타입" 으로 적습니다 (std_msgs/Header).
/// 같은 패키지의 메시지는 패키지 이름 없이 타입 이름만 적어도 됩니다 (Waypoint).
/// Waypoint[] 처럼 [] 를 붙이면 가변 길이 배열이 됩니다. (고정 길이는 Waypoint)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WaypointList {
    /// stamp(발행 시각) + frame_id(좌표계 이름, 여기서는 "world")
    pub header: std_msgs::msg::Header,

    /// 경유점 배열 — 문제 6 에서는 4개 이상을 채워 발행합니다
    pub waypoints: Vec<super::msg::Waypoint>,

}



impl Default for WaypointList {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::WaypointList::default())
  }
}

impl rosidl_runtime_rs::Message for WaypointList {
  type RmwMsg = super::msg::rmw::WaypointList;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        waypoints: msg.waypoints
          .into_iter()
          .map(|elem| super::msg::Waypoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        waypoints: msg.waypoints
          .iter()
          .map(|elem| super::msg::Waypoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      waypoints: msg.waypoints
          .into_iter()
          .map(super::msg::Waypoint::from_rmw_message)
          .collect(),
    }
  }
}


