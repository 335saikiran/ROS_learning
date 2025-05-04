// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mark_interfaces:action/ReachDistance.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mark_interfaces/action/detail/reach_distance__functions.h"
#include "mark_interfaces/action/detail/reach_distance__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_Goal_type_support_ids_t;

static const _ReachDistance_Goal_type_support_ids_t _ReachDistance_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_Goal_type_support_symbol_names_t _ReachDistance_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_Goal)),
  }
};

typedef struct _ReachDistance_Goal_type_support_data_t
{
  void * data[2];
} _ReachDistance_Goal_type_support_data_t;

static _ReachDistance_Goal_type_support_data_t _ReachDistance_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_Goal_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_Goal__get_type_hash,
  &mark_interfaces__action__ReachDistance_Goal__get_type_description,
  &mark_interfaces__action__ReachDistance_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_Goal>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_Goal)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_Result_type_support_ids_t;

static const _ReachDistance_Result_type_support_ids_t _ReachDistance_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_Result_type_support_symbol_names_t _ReachDistance_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_Result)),
  }
};

typedef struct _ReachDistance_Result_type_support_data_t
{
  void * data[2];
} _ReachDistance_Result_type_support_data_t;

static _ReachDistance_Result_type_support_data_t _ReachDistance_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_Result_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_Result__get_type_hash,
  &mark_interfaces__action__ReachDistance_Result__get_type_description,
  &mark_interfaces__action__ReachDistance_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_Result>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_Result)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_Feedback_type_support_ids_t;

static const _ReachDistance_Feedback_type_support_ids_t _ReachDistance_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_Feedback_type_support_symbol_names_t _ReachDistance_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_Feedback)),
  }
};

typedef struct _ReachDistance_Feedback_type_support_data_t
{
  void * data[2];
} _ReachDistance_Feedback_type_support_data_t;

static _ReachDistance_Feedback_type_support_data_t _ReachDistance_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_Feedback_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_Feedback__get_type_hash,
  &mark_interfaces__action__ReachDistance_Feedback__get_type_description,
  &mark_interfaces__action__ReachDistance_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_Feedback>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_Feedback)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_SendGoal_Request_type_support_ids_t;

static const _ReachDistance_SendGoal_Request_type_support_ids_t _ReachDistance_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_SendGoal_Request_type_support_symbol_names_t _ReachDistance_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_SendGoal_Request)),
  }
};

typedef struct _ReachDistance_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ReachDistance_SendGoal_Request_type_support_data_t;

static _ReachDistance_SendGoal_Request_type_support_data_t _ReachDistance_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_SendGoal_Request_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_SendGoal_Request__get_type_hash,
  &mark_interfaces__action__ReachDistance_SendGoal_Request__get_type_description,
  &mark_interfaces__action__ReachDistance_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Request>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_SendGoal_Request)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_SendGoal_Response_type_support_ids_t;

static const _ReachDistance_SendGoal_Response_type_support_ids_t _ReachDistance_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_SendGoal_Response_type_support_symbol_names_t _ReachDistance_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_SendGoal_Response)),
  }
};

typedef struct _ReachDistance_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ReachDistance_SendGoal_Response_type_support_data_t;

static _ReachDistance_SendGoal_Response_type_support_data_t _ReachDistance_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_SendGoal_Response_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_SendGoal_Response__get_type_hash,
  &mark_interfaces__action__ReachDistance_SendGoal_Response__get_type_description,
  &mark_interfaces__action__ReachDistance_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Response>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_SendGoal_Response)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_SendGoal_Event_type_support_ids_t;

static const _ReachDistance_SendGoal_Event_type_support_ids_t _ReachDistance_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_SendGoal_Event_type_support_symbol_names_t _ReachDistance_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_SendGoal_Event)),
  }
};

typedef struct _ReachDistance_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ReachDistance_SendGoal_Event_type_support_data_t;

static _ReachDistance_SendGoal_Event_type_support_data_t _ReachDistance_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_SendGoal_Event_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_SendGoal_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_SendGoal_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_SendGoal_Event__get_type_hash,
  &mark_interfaces__action__ReachDistance_SendGoal_Event__get_type_description,
  &mark_interfaces__action__ReachDistance_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Event>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_SendGoal_Event)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_SendGoal_type_support_ids_t;

static const _ReachDistance_SendGoal_type_support_ids_t _ReachDistance_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_SendGoal_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_SendGoal_type_support_symbol_names_t _ReachDistance_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_SendGoal)),
  }
};

typedef struct _ReachDistance_SendGoal_type_support_data_t
{
  void * data[2];
} _ReachDistance_SendGoal_type_support_data_t;

static _ReachDistance_SendGoal_type_support_data_t _ReachDistance_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_SendGoal_service_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReachDistance_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mark_interfaces::action::ReachDistance_SendGoal>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mark_interfaces::action::ReachDistance_SendGoal>,
  &mark_interfaces__action__ReachDistance_SendGoal__get_type_hash,
  &mark_interfaces__action__ReachDistance_SendGoal__get_type_description,
  &mark_interfaces__action__ReachDistance_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mark_interfaces::action::ReachDistance_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_GetResult_Request_type_support_ids_t;

static const _ReachDistance_GetResult_Request_type_support_ids_t _ReachDistance_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_GetResult_Request_type_support_symbol_names_t _ReachDistance_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_GetResult_Request)),
  }
};

typedef struct _ReachDistance_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ReachDistance_GetResult_Request_type_support_data_t;

static _ReachDistance_GetResult_Request_type_support_data_t _ReachDistance_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_GetResult_Request_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_GetResult_Request__get_type_hash,
  &mark_interfaces__action__ReachDistance_GetResult_Request__get_type_description,
  &mark_interfaces__action__ReachDistance_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Request>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_GetResult_Request)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_GetResult_Response_type_support_ids_t;

static const _ReachDistance_GetResult_Response_type_support_ids_t _ReachDistance_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_GetResult_Response_type_support_symbol_names_t _ReachDistance_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_GetResult_Response)),
  }
};

typedef struct _ReachDistance_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ReachDistance_GetResult_Response_type_support_data_t;

static _ReachDistance_GetResult_Response_type_support_data_t _ReachDistance_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_GetResult_Response_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_GetResult_Response__get_type_hash,
  &mark_interfaces__action__ReachDistance_GetResult_Response__get_type_description,
  &mark_interfaces__action__ReachDistance_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Response>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_GetResult_Response)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_GetResult_Event_type_support_ids_t;

static const _ReachDistance_GetResult_Event_type_support_ids_t _ReachDistance_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_GetResult_Event_type_support_symbol_names_t _ReachDistance_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_GetResult_Event)),
  }
};

typedef struct _ReachDistance_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ReachDistance_GetResult_Event_type_support_data_t;

static _ReachDistance_GetResult_Event_type_support_data_t _ReachDistance_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_GetResult_Event_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_GetResult_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_GetResult_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_GetResult_Event__get_type_hash,
  &mark_interfaces__action__ReachDistance_GetResult_Event__get_type_description,
  &mark_interfaces__action__ReachDistance_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Event>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_GetResult_Event)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_GetResult_type_support_ids_t;

static const _ReachDistance_GetResult_type_support_ids_t _ReachDistance_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_GetResult_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_GetResult_type_support_symbol_names_t _ReachDistance_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_GetResult)),
  }
};

typedef struct _ReachDistance_GetResult_type_support_data_t
{
  void * data[2];
} _ReachDistance_GetResult_type_support_data_t;

static _ReachDistance_GetResult_type_support_data_t _ReachDistance_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_GetResult_service_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ReachDistance_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<mark_interfaces::action::ReachDistance_GetResult_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<mark_interfaces::action::ReachDistance_GetResult>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<mark_interfaces::action::ReachDistance_GetResult>,
  &mark_interfaces__action__ReachDistance_GetResult__get_type_hash,
  &mark_interfaces__action__ReachDistance_GetResult__get_type_description,
  &mark_interfaces__action__ReachDistance_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mark_interfaces::action::ReachDistance_GetResult>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<mark_interfaces::action::ReachDistance_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__functions.h"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _ReachDistance_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ReachDistance_FeedbackMessage_type_support_ids_t;

static const _ReachDistance_FeedbackMessage_type_support_ids_t _ReachDistance_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ReachDistance_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ReachDistance_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ReachDistance_FeedbackMessage_type_support_symbol_names_t _ReachDistance_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mark_interfaces, action, ReachDistance_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mark_interfaces, action, ReachDistance_FeedbackMessage)),
  }
};

typedef struct _ReachDistance_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ReachDistance_FeedbackMessage_type_support_data_t;

static _ReachDistance_FeedbackMessage_type_support_data_t _ReachDistance_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ReachDistance_FeedbackMessage_message_typesupport_map = {
  2,
  "mark_interfaces",
  &_ReachDistance_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ReachDistance_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ReachDistance_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ReachDistance_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ReachDistance_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &mark_interfaces__action__ReachDistance_FeedbackMessage__get_type_hash,
  &mark_interfaces__action__ReachDistance_FeedbackMessage__get_type_description,
  &mark_interfaces__action__ReachDistance_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mark_interfaces::action::ReachDistance_FeedbackMessage>()
{
  return &::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance_FeedbackMessage)() {
  return get_message_type_support_handle<mark_interfaces::action::ReachDistance_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "mark_interfaces/action/detail/reach_distance__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace mark_interfaces
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t ReachDistance_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL,
  &mark_interfaces__action__ReachDistance__get_type_hash,
  &mark_interfaces__action__ReachDistance__get_type_description,
  &mark_interfaces__action__ReachDistance__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace mark_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<mark_interfaces::action::ReachDistance>()
{
  using ::mark_interfaces::action::rosidl_typesupport_cpp::ReachDistance_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  ReachDistance_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::mark_interfaces::action::ReachDistance::Impl::SendGoalService>();
  ReachDistance_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::mark_interfaces::action::ReachDistance::Impl::GetResultService>();
  ReachDistance_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::mark_interfaces::action::ReachDistance::Impl::CancelGoalService>();
  ReachDistance_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::mark_interfaces::action::ReachDistance::Impl::FeedbackMessage>();
  ReachDistance_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::mark_interfaces::action::ReachDistance::Impl::GoalStatusMessage>();
  return &ReachDistance_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, mark_interfaces, action, ReachDistance)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<mark_interfaces::action::ReachDistance>();
}

#ifdef __cplusplus
}
#endif
