
#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_Goal() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__DrawPolygon_Goal__init(msg: *mut DrawPolygon_Goal) -> bool;
    fn turtle_interfaces__action__DrawPolygon_Goal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Goal>, size: usize) -> bool;
    fn turtle_interfaces__action__DrawPolygon_Goal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Goal>);
    fn turtle_interfaces__action__DrawPolygon_Goal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrawPolygon_Goal>, out_seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Goal>) -> bool;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_Goal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrawPolygon_Goal {
    /// ---------- 목표 (goal) ----------
    /// 변의 개수 (3 이상)
    pub sides: i32,

    /// 한 변의 길이
    pub side_length: f64,

}



impl Default for DrawPolygon_Goal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__DrawPolygon_Goal__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__DrawPolygon_Goal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrawPolygon_Goal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Goal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Goal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Goal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrawPolygon_Goal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrawPolygon_Goal where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/DrawPolygon_Goal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_Goal() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_Result() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__DrawPolygon_Result__init(msg: *mut DrawPolygon_Result) -> bool;
    fn turtle_interfaces__action__DrawPolygon_Result__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Result>, size: usize) -> bool;
    fn turtle_interfaces__action__DrawPolygon_Result__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Result>);
    fn turtle_interfaces__action__DrawPolygon_Result__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrawPolygon_Result>, out_seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Result>) -> bool;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_Result
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrawPolygon_Result {
    /// 실제로 이동한 총 거리 (취소되면 그때까지의 거리)
    pub total_distance: f64,

}



impl Default for DrawPolygon_Result {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__DrawPolygon_Result__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__DrawPolygon_Result__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrawPolygon_Result {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Result__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Result__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Result__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrawPolygon_Result {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrawPolygon_Result where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/DrawPolygon_Result";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_Result() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_Feedback() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__DrawPolygon_Feedback__init(msg: *mut DrawPolygon_Feedback) -> bool;
    fn turtle_interfaces__action__DrawPolygon_Feedback__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Feedback>, size: usize) -> bool;
    fn turtle_interfaces__action__DrawPolygon_Feedback__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Feedback>);
    fn turtle_interfaces__action__DrawPolygon_Feedback__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrawPolygon_Feedback>, out_seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_Feedback>) -> bool;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_Feedback
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrawPolygon_Feedback {
    /// 지금까지 완성한 변의 수
    pub completed_sides: i32,

    /// 진행률 0.0 ~ 1.0 (= completed_sides / sides)
    pub progress: f32,

}



impl Default for DrawPolygon_Feedback {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__DrawPolygon_Feedback__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__DrawPolygon_Feedback__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrawPolygon_Feedback {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Feedback__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Feedback__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_Feedback__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrawPolygon_Feedback {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrawPolygon_Feedback where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/DrawPolygon_Feedback";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_Feedback() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_FeedbackMessage() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__DrawPolygon_FeedbackMessage__init(msg: *mut DrawPolygon_FeedbackMessage) -> bool;
    fn turtle_interfaces__action__DrawPolygon_FeedbackMessage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_FeedbackMessage>, size: usize) -> bool;
    fn turtle_interfaces__action__DrawPolygon_FeedbackMessage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_FeedbackMessage>);
    fn turtle_interfaces__action__DrawPolygon_FeedbackMessage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrawPolygon_FeedbackMessage>, out_seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_FeedbackMessage>) -> bool;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_FeedbackMessage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrawPolygon_FeedbackMessage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: super::super::action::rmw::DrawPolygon_Feedback,

}



impl Default for DrawPolygon_FeedbackMessage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__DrawPolygon_FeedbackMessage__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__DrawPolygon_FeedbackMessage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrawPolygon_FeedbackMessage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_FeedbackMessage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_FeedbackMessage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_FeedbackMessage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrawPolygon_FeedbackMessage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrawPolygon_FeedbackMessage where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/DrawPolygon_FeedbackMessage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_FeedbackMessage() }
  }
}




#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_SendGoal_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__DrawPolygon_SendGoal_Request__init(msg: *mut DrawPolygon_SendGoal_Request) -> bool;
    fn turtle_interfaces__action__DrawPolygon_SendGoal_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_SendGoal_Request>, size: usize) -> bool;
    fn turtle_interfaces__action__DrawPolygon_SendGoal_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_SendGoal_Request>);
    fn turtle_interfaces__action__DrawPolygon_SendGoal_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrawPolygon_SendGoal_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_SendGoal_Request>) -> bool;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_SendGoal_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrawPolygon_SendGoal_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,


    // This member is not documented.
    #[allow(missing_docs)]
    pub goal: super::super::action::rmw::DrawPolygon_Goal,

}



impl Default for DrawPolygon_SendGoal_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__DrawPolygon_SendGoal_Request__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__DrawPolygon_SendGoal_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrawPolygon_SendGoal_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_SendGoal_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_SendGoal_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_SendGoal_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrawPolygon_SendGoal_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrawPolygon_SendGoal_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/DrawPolygon_SendGoal_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_SendGoal_Request() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_SendGoal_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__DrawPolygon_SendGoal_Response__init(msg: *mut DrawPolygon_SendGoal_Response) -> bool;
    fn turtle_interfaces__action__DrawPolygon_SendGoal_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_SendGoal_Response>, size: usize) -> bool;
    fn turtle_interfaces__action__DrawPolygon_SendGoal_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_SendGoal_Response>);
    fn turtle_interfaces__action__DrawPolygon_SendGoal_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrawPolygon_SendGoal_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_SendGoal_Response>) -> bool;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_SendGoal_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrawPolygon_SendGoal_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub accepted: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub stamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for DrawPolygon_SendGoal_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__DrawPolygon_SendGoal_Response__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__DrawPolygon_SendGoal_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrawPolygon_SendGoal_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_SendGoal_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_SendGoal_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_SendGoal_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrawPolygon_SendGoal_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrawPolygon_SendGoal_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/DrawPolygon_SendGoal_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_SendGoal_Response() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_GetResult_Request() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__DrawPolygon_GetResult_Request__init(msg: *mut DrawPolygon_GetResult_Request) -> bool;
    fn turtle_interfaces__action__DrawPolygon_GetResult_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_GetResult_Request>, size: usize) -> bool;
    fn turtle_interfaces__action__DrawPolygon_GetResult_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_GetResult_Request>);
    fn turtle_interfaces__action__DrawPolygon_GetResult_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrawPolygon_GetResult_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_GetResult_Request>) -> bool;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_GetResult_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrawPolygon_GetResult_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub goal_id: unique_identifier_msgs::msg::rmw::UUID,

}



impl Default for DrawPolygon_GetResult_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__DrawPolygon_GetResult_Request__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__DrawPolygon_GetResult_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrawPolygon_GetResult_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_GetResult_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_GetResult_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_GetResult_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrawPolygon_GetResult_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrawPolygon_GetResult_Request where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/DrawPolygon_GetResult_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_GetResult_Request() }
  }
}


#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_GetResult_Response() -> *const std::ffi::c_void;
}

#[link(name = "turtle_interfaces__rosidl_generator_c")]
extern "C" {
    fn turtle_interfaces__action__DrawPolygon_GetResult_Response__init(msg: *mut DrawPolygon_GetResult_Response) -> bool;
    fn turtle_interfaces__action__DrawPolygon_GetResult_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_GetResult_Response>, size: usize) -> bool;
    fn turtle_interfaces__action__DrawPolygon_GetResult_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_GetResult_Response>);
    fn turtle_interfaces__action__DrawPolygon_GetResult_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DrawPolygon_GetResult_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<DrawPolygon_GetResult_Response>) -> bool;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_GetResult_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DrawPolygon_GetResult_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: super::super::action::rmw::DrawPolygon_Result,

}



impl Default for DrawPolygon_GetResult_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !turtle_interfaces__action__DrawPolygon_GetResult_Response__init(&mut msg as *mut _) {
        panic!("Call to turtle_interfaces__action__DrawPolygon_GetResult_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DrawPolygon_GetResult_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_GetResult_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_GetResult_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { turtle_interfaces__action__DrawPolygon_GetResult_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DrawPolygon_GetResult_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DrawPolygon_GetResult_Response where Self: Sized {
  const TYPE_NAME: &'static str = "turtle_interfaces/action/DrawPolygon_GetResult_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__turtle_interfaces__action__DrawPolygon_GetResult_Response() }
  }
}






#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__action__DrawPolygon_SendGoal() -> *const std::ffi::c_void;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_SendGoal
#[allow(missing_docs, non_camel_case_types)]
pub struct DrawPolygon_SendGoal;

impl rosidl_runtime_rs::Service for DrawPolygon_SendGoal {
    type Request = DrawPolygon_SendGoal_Request;
    type Response = DrawPolygon_SendGoal_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__action__DrawPolygon_SendGoal() }
    }
}




#[link(name = "turtle_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__action__DrawPolygon_GetResult() -> *const std::ffi::c_void;
}

// Corresponds to turtle_interfaces__action__DrawPolygon_GetResult
#[allow(missing_docs, non_camel_case_types)]
pub struct DrawPolygon_GetResult;

impl rosidl_runtime_rs::Service for DrawPolygon_GetResult {
    type Request = DrawPolygon_GetResult_Request;
    type Response = DrawPolygon_GetResult_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__turtle_interfaces__action__DrawPolygon_GetResult() }
    }
}


