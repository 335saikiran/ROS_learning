// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mark_interfaces:msg/LedpanelState.idl
// generated code does not contain a copyright notice

#include "mark_interfaces/msg/detail/ledpanel_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mark_interfaces
const rosidl_type_hash_t *
mark_interfaces__msg__LedpanelState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x24, 0xef, 0x8c, 0x35, 0xef, 0xa6, 0x8d, 0x8f,
      0x4e, 0x18, 0x3a, 0xfe, 0x9f, 0xff, 0x31, 0xb5,
      0x01, 0xe5, 0x39, 0xaa, 0x8f, 0x47, 0xa4, 0xa8,
      0xed, 0xb1, 0x5b, 0x5d, 0x45, 0xff, 0x75, 0xde,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char mark_interfaces__msg__LedpanelState__TYPE_NAME[] = "mark_interfaces/msg/LedpanelState";

// Define type names, field names, and default values
static char mark_interfaces__msg__LedpanelState__FIELD_NAME__led_state[] = "led_state";

static rosidl_runtime_c__type_description__Field mark_interfaces__msg__LedpanelState__FIELDS[] = {
  {
    {mark_interfaces__msg__LedpanelState__FIELD_NAME__led_state, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mark_interfaces__msg__LedpanelState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mark_interfaces__msg__LedpanelState__TYPE_NAME, 33, 33},
      {mark_interfaces__msg__LedpanelState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64[] led_state";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mark_interfaces__msg__LedpanelState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mark_interfaces__msg__LedpanelState__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mark_interfaces__msg__LedpanelState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mark_interfaces__msg__LedpanelState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
