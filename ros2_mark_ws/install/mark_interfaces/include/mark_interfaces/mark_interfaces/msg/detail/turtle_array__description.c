// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from mark_interfaces:msg/TurtleArray.idl
// generated code does not contain a copyright notice

#include "mark_interfaces/msg/detail/turtle_array__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_mark_interfaces
const rosidl_type_hash_t *
mark_interfaces__msg__TurtleArray__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x33, 0xb7, 0x22, 0xe2, 0x9e, 0xfc, 0x72, 0xde,
      0x11, 0x35, 0x06, 0xf0, 0xac, 0x3b, 0x3b, 0x8e,
      0xa7, 0x3b, 0xc2, 0xea, 0x60, 0xbf, 0x81, 0x25,
      0xa9, 0x2f, 0xec, 0x26, 0x98, 0x13, 0x62, 0x46,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "mark_interfaces/msg/detail/turtle__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t mark_interfaces__msg__Turtle__EXPECTED_HASH = {1, {
    0x26, 0x41, 0x5a, 0x64, 0xba, 0x35, 0x0e, 0xb3,
    0x7b, 0x8e, 0xfc, 0x7f, 0xcd, 0x1f, 0xa6, 0xe1,
    0xc2, 0x4d, 0x66, 0xa2, 0x90, 0x21, 0x0c, 0xcb,
    0x90, 0x02, 0x42, 0xbe, 0xd6, 0x61, 0x1b, 0x35,
  }};
#endif

static char mark_interfaces__msg__TurtleArray__TYPE_NAME[] = "mark_interfaces/msg/TurtleArray";
static char mark_interfaces__msg__Turtle__TYPE_NAME[] = "mark_interfaces/msg/Turtle";

// Define type names, field names, and default values
static char mark_interfaces__msg__TurtleArray__FIELD_NAME__turtles[] = "turtles";

static rosidl_runtime_c__type_description__Field mark_interfaces__msg__TurtleArray__FIELDS[] = {
  {
    {mark_interfaces__msg__TurtleArray__FIELD_NAME__turtles, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {mark_interfaces__msg__Turtle__TYPE_NAME, 26, 26},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription mark_interfaces__msg__TurtleArray__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {mark_interfaces__msg__Turtle__TYPE_NAME, 26, 26},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
mark_interfaces__msg__TurtleArray__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {mark_interfaces__msg__TurtleArray__TYPE_NAME, 31, 31},
      {mark_interfaces__msg__TurtleArray__FIELDS, 1, 1},
    },
    {mark_interfaces__msg__TurtleArray__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&mark_interfaces__msg__Turtle__EXPECTED_HASH, mark_interfaces__msg__Turtle__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = mark_interfaces__msg__Turtle__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "Turtle[] turtles";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
mark_interfaces__msg__TurtleArray__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {mark_interfaces__msg__TurtleArray__TYPE_NAME, 31, 31},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
mark_interfaces__msg__TurtleArray__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *mark_interfaces__msg__TurtleArray__get_individual_type_description_source(NULL),
    sources[1] = *mark_interfaces__msg__Turtle__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
