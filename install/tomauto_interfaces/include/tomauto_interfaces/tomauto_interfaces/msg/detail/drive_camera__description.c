// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tomauto_interfaces:msg/DriveCamera.idl
// generated code does not contain a copyright notice

#include "tomauto_interfaces/msg/detail/drive_camera__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tomauto_interfaces
const rosidl_type_hash_t *
tomauto_interfaces__msg__DriveCamera__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x36, 0x7e, 0x4b, 0xb4, 0xfd, 0x2a, 0x01, 0x16,
      0xa1, 0xf2, 0xe8, 0x69, 0x8c, 0x33, 0x61, 0x88,
      0xd1, 0x9f, 0x46, 0x2f, 0x5e, 0x0c, 0xbc, 0xf7,
      0x4d, 0xeb, 0x1c, 0xc9, 0x2b, 0xd0, 0x76, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tomauto_interfaces__msg__DriveCamera__TYPE_NAME[] = "tomauto_interfaces/msg/DriveCamera";

// Define type names, field names, and default values
static char tomauto_interfaces__msg__DriveCamera__FIELD_NAME__detected_object[] = "detected_object";

static rosidl_runtime_c__type_description__Field tomauto_interfaces__msg__DriveCamera__FIELDS[] = {
  {
    {tomauto_interfaces__msg__DriveCamera__FIELD_NAME__detected_object, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tomauto_interfaces__msg__DriveCamera__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tomauto_interfaces__msg__DriveCamera__TYPE_NAME, 34, 34},
      {tomauto_interfaces__msg__DriveCamera__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string detected_object\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tomauto_interfaces__msg__DriveCamera__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tomauto_interfaces__msg__DriveCamera__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 24, 24},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tomauto_interfaces__msg__DriveCamera__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tomauto_interfaces__msg__DriveCamera__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
