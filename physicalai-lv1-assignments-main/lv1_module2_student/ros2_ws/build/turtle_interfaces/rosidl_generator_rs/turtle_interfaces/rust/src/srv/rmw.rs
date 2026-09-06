#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__srv__SetGain_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__srv__SetGain_Request__init(msg: *mut SetGain_Request) -> bool;
    fn turtle_interfaces__srv__SetGain_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGain_Request>, size: usize) -> bool;
    fn turtle_interfaces__srv__SetGain_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGain_Request>);
    fn turtle_interfaces__srv__SetGain_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGain_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGain_Request>) -> bool;
}

// Corresponds to turtle_interfaces__srv__SetGain_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
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
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__srv__SetGain_Request__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__srv__SetGain_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGain_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetGain_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetGain_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetGain_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGain_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGain_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/srv/SetGain_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__srv__SetGain_Request() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__srv__SetGain_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__srv__SetGain_Response__init(msg: *mut SetGain_Response) -> bool;
    fn turtle_interfaces__srv__SetGain_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SetGain_Response>, size: usize) -> bool;
    fn turtle_interfaces__srv__SetGain_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SetGain_Response>);
    fn turtle_interfaces__srv__SetGain_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SetGain_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SetGain_Response>) -> bool;
}

// Corresponds to turtle_interfaces__srv__SetGain_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SetGain_Response {
    /// 값이 유효해서 적용됐는지
    pub success: bool,

    /// 사람이 읽을 결과 설명 (예: "kp must be >= 0")
    pub message: rosidl_runtime_rs::String,

}



impl Default for SetGain_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__srv__SetGain_Response__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__srv__SetGain_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SetGain_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetGain_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetGain_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__srv__SetGain_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SetGain_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SetGain_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/srv/SetGain_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__srv__SetGain_Response() }
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


