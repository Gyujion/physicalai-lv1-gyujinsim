#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to turtle_interfaces__srv__SetGain_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGain_Request {
    /// ---------- 요청 ----------
    /// 비례 게인
    pub kp: f64,

    /// 적분 게인
    pub ki: f64,

    /// 미분 게인
    pub kd: f64,

}



impl Default for SetGain_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGain_Request::default())
  }
}

impl rosidl_runtime_rs::Message for SetGain_Request {
  type RmwMsg = super::srv::rmw::SetGain_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        kp: msg.kp,
        ki: msg.ki,
        kd: msg.kd,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      kp: msg.kp,
      ki: msg.ki,
      kd: msg.kd,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      kp: msg.kp,
      ki: msg.ki,
      kd: msg.kd,
    }
  }
}


// Corresponds to turtle_interfaces__srv__SetGain_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGain_Response {
    /// 값이 유효해서 적용됐는지
    pub success: bool,

    /// 사람이 읽을 결과 설명 (예: "kp must be >= 0")
    pub message: std::string::String,

}



impl Default for SetGain_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::SetGain_Response::default())
  }
}

impl rosidl_runtime_rs::Message for SetGain_Response {
  type RmwMsg = super::srv::rmw::SetGain_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}






#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__srv__SetGain() -> *const std::ffi::c_void;
}

// Corresponds to turtle_interfaces__srv__SetGain
#[allow(missing_docs, non_camel_case_types)]
pub struct SetGain;

impl rosidl_runtime_rs::Service for SetGain {
    type Request = SetGain_Request;
    type Response = SetGain_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__srv__SetGain() }
    }
}


