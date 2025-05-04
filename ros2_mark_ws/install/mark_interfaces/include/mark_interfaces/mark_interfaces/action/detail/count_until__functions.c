// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mark_interfaces:action/CountUntil.idl
// generated code does not contain a copyright notice
#include "mark_interfaces/action/detail/count_until__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
mark_interfaces__action__CountUntil_Goal__init(mark_interfaces__action__CountUntil_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // target_number
  // period
  return true;
}

void
mark_interfaces__action__CountUntil_Goal__fini(mark_interfaces__action__CountUntil_Goal * msg)
{
  if (!msg) {
    return;
  }
  // target_number
  // period
}

bool
mark_interfaces__action__CountUntil_Goal__are_equal(const mark_interfaces__action__CountUntil_Goal * lhs, const mark_interfaces__action__CountUntil_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_number
  if (lhs->target_number != rhs->target_number) {
    return false;
  }
  // period
  if (lhs->period != rhs->period) {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_Goal__copy(
  const mark_interfaces__action__CountUntil_Goal * input,
  mark_interfaces__action__CountUntil_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // target_number
  output->target_number = input->target_number;
  // period
  output->period = input->period;
  return true;
}

mark_interfaces__action__CountUntil_Goal *
mark_interfaces__action__CountUntil_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Goal * msg = (mark_interfaces__action__CountUntil_Goal *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_Goal));
  bool success = mark_interfaces__action__CountUntil_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_Goal__destroy(mark_interfaces__action__CountUntil_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_Goal__Sequence__init(mark_interfaces__action__CountUntil_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Goal * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_Goal *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_Goal__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_Goal__Sequence__fini(mark_interfaces__action__CountUntil_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_Goal__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_Goal__Sequence *
mark_interfaces__action__CountUntil_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Goal__Sequence * array = (mark_interfaces__action__CountUntil_Goal__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_Goal__Sequence__destroy(mark_interfaces__action__CountUntil_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_Goal__Sequence__are_equal(const mark_interfaces__action__CountUntil_Goal__Sequence * lhs, const mark_interfaces__action__CountUntil_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_Goal__Sequence__copy(
  const mark_interfaces__action__CountUntil_Goal__Sequence * input,
  mark_interfaces__action__CountUntil_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_Goal * data =
      (mark_interfaces__action__CountUntil_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mark_interfaces__action__CountUntil_Result__init(mark_interfaces__action__CountUntil_Result * msg)
{
  if (!msg) {
    return false;
  }
  // reached_number
  return true;
}

void
mark_interfaces__action__CountUntil_Result__fini(mark_interfaces__action__CountUntil_Result * msg)
{
  if (!msg) {
    return;
  }
  // reached_number
}

bool
mark_interfaces__action__CountUntil_Result__are_equal(const mark_interfaces__action__CountUntil_Result * lhs, const mark_interfaces__action__CountUntil_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reached_number
  if (lhs->reached_number != rhs->reached_number) {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_Result__copy(
  const mark_interfaces__action__CountUntil_Result * input,
  mark_interfaces__action__CountUntil_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // reached_number
  output->reached_number = input->reached_number;
  return true;
}

mark_interfaces__action__CountUntil_Result *
mark_interfaces__action__CountUntil_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Result * msg = (mark_interfaces__action__CountUntil_Result *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_Result));
  bool success = mark_interfaces__action__CountUntil_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_Result__destroy(mark_interfaces__action__CountUntil_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_Result__Sequence__init(mark_interfaces__action__CountUntil_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Result * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_Result *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_Result__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_Result__Sequence__fini(mark_interfaces__action__CountUntil_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_Result__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_Result__Sequence *
mark_interfaces__action__CountUntil_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Result__Sequence * array = (mark_interfaces__action__CountUntil_Result__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_Result__Sequence__destroy(mark_interfaces__action__CountUntil_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_Result__Sequence__are_equal(const mark_interfaces__action__CountUntil_Result__Sequence * lhs, const mark_interfaces__action__CountUntil_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_Result__Sequence__copy(
  const mark_interfaces__action__CountUntil_Result__Sequence * input,
  mark_interfaces__action__CountUntil_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_Result * data =
      (mark_interfaces__action__CountUntil_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mark_interfaces__action__CountUntil_Feedback__init(mark_interfaces__action__CountUntil_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // current_number
  return true;
}

void
mark_interfaces__action__CountUntil_Feedback__fini(mark_interfaces__action__CountUntil_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // current_number
}

bool
mark_interfaces__action__CountUntil_Feedback__are_equal(const mark_interfaces__action__CountUntil_Feedback * lhs, const mark_interfaces__action__CountUntil_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // current_number
  if (lhs->current_number != rhs->current_number) {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_Feedback__copy(
  const mark_interfaces__action__CountUntil_Feedback * input,
  mark_interfaces__action__CountUntil_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // current_number
  output->current_number = input->current_number;
  return true;
}

mark_interfaces__action__CountUntil_Feedback *
mark_interfaces__action__CountUntil_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Feedback * msg = (mark_interfaces__action__CountUntil_Feedback *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_Feedback));
  bool success = mark_interfaces__action__CountUntil_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_Feedback__destroy(mark_interfaces__action__CountUntil_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_Feedback__Sequence__init(mark_interfaces__action__CountUntil_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Feedback * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_Feedback *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_Feedback__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_Feedback__Sequence__fini(mark_interfaces__action__CountUntil_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_Feedback__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_Feedback__Sequence *
mark_interfaces__action__CountUntil_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_Feedback__Sequence * array = (mark_interfaces__action__CountUntil_Feedback__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_Feedback__Sequence__destroy(mark_interfaces__action__CountUntil_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_Feedback__Sequence__are_equal(const mark_interfaces__action__CountUntil_Feedback__Sequence * lhs, const mark_interfaces__action__CountUntil_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_Feedback__Sequence__copy(
  const mark_interfaces__action__CountUntil_Feedback__Sequence * input,
  mark_interfaces__action__CountUntil_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_Feedback * data =
      (mark_interfaces__action__CountUntil_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "mark_interfaces/action/detail/count_until__functions.h"

bool
mark_interfaces__action__CountUntil_SendGoal_Request__init(mark_interfaces__action__CountUntil_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mark_interfaces__action__CountUntil_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!mark_interfaces__action__CountUntil_Goal__init(&msg->goal)) {
    mark_interfaces__action__CountUntil_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__action__CountUntil_SendGoal_Request__fini(mark_interfaces__action__CountUntil_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  mark_interfaces__action__CountUntil_Goal__fini(&msg->goal);
}

bool
mark_interfaces__action__CountUntil_SendGoal_Request__are_equal(const mark_interfaces__action__CountUntil_SendGoal_Request * lhs, const mark_interfaces__action__CountUntil_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!mark_interfaces__action__CountUntil_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_SendGoal_Request__copy(
  const mark_interfaces__action__CountUntil_SendGoal_Request * input,
  mark_interfaces__action__CountUntil_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!mark_interfaces__action__CountUntil_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

mark_interfaces__action__CountUntil_SendGoal_Request *
mark_interfaces__action__CountUntil_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Request * msg = (mark_interfaces__action__CountUntil_SendGoal_Request *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_SendGoal_Request));
  bool success = mark_interfaces__action__CountUntil_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_SendGoal_Request__destroy(mark_interfaces__action__CountUntil_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__init(mark_interfaces__action__CountUntil_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Request * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_SendGoal_Request *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_SendGoal_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__fini(mark_interfaces__action__CountUntil_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_SendGoal_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_SendGoal_Request__Sequence *
mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Request__Sequence * array = (mark_interfaces__action__CountUntil_SendGoal_Request__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__destroy(mark_interfaces__action__CountUntil_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__are_equal(const mark_interfaces__action__CountUntil_SendGoal_Request__Sequence * lhs, const mark_interfaces__action__CountUntil_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__copy(
  const mark_interfaces__action__CountUntil_SendGoal_Request__Sequence * input,
  mark_interfaces__action__CountUntil_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_SendGoal_Request * data =
      (mark_interfaces__action__CountUntil_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
mark_interfaces__action__CountUntil_SendGoal_Response__init(mark_interfaces__action__CountUntil_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    mark_interfaces__action__CountUntil_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__action__CountUntil_SendGoal_Response__fini(mark_interfaces__action__CountUntil_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
mark_interfaces__action__CountUntil_SendGoal_Response__are_equal(const mark_interfaces__action__CountUntil_SendGoal_Response * lhs, const mark_interfaces__action__CountUntil_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_SendGoal_Response__copy(
  const mark_interfaces__action__CountUntil_SendGoal_Response * input,
  mark_interfaces__action__CountUntil_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

mark_interfaces__action__CountUntil_SendGoal_Response *
mark_interfaces__action__CountUntil_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Response * msg = (mark_interfaces__action__CountUntil_SendGoal_Response *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_SendGoal_Response));
  bool success = mark_interfaces__action__CountUntil_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_SendGoal_Response__destroy(mark_interfaces__action__CountUntil_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__init(mark_interfaces__action__CountUntil_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Response * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_SendGoal_Response *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_SendGoal_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__fini(mark_interfaces__action__CountUntil_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_SendGoal_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_SendGoal_Response__Sequence *
mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Response__Sequence * array = (mark_interfaces__action__CountUntil_SendGoal_Response__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__destroy(mark_interfaces__action__CountUntil_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__are_equal(const mark_interfaces__action__CountUntil_SendGoal_Response__Sequence * lhs, const mark_interfaces__action__CountUntil_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__copy(
  const mark_interfaces__action__CountUntil_SendGoal_Response__Sequence * input,
  mark_interfaces__action__CountUntil_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_SendGoal_Response * data =
      (mark_interfaces__action__CountUntil_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mark_interfaces/action/detail/count_until__functions.h"

bool
mark_interfaces__action__CountUntil_SendGoal_Event__init(mark_interfaces__action__CountUntil_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mark_interfaces__action__CountUntil_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    mark_interfaces__action__CountUntil_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    mark_interfaces__action__CountUntil_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__action__CountUntil_SendGoal_Event__fini(mark_interfaces__action__CountUntil_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
mark_interfaces__action__CountUntil_SendGoal_Event__are_equal(const mark_interfaces__action__CountUntil_SendGoal_Event * lhs, const mark_interfaces__action__CountUntil_SendGoal_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_SendGoal_Event__copy(
  const mark_interfaces__action__CountUntil_SendGoal_Event * input,
  mark_interfaces__action__CountUntil_SendGoal_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mark_interfaces__action__CountUntil_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mark_interfaces__action__CountUntil_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mark_interfaces__action__CountUntil_SendGoal_Event *
mark_interfaces__action__CountUntil_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Event * msg = (mark_interfaces__action__CountUntil_SendGoal_Event *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_SendGoal_Event));
  bool success = mark_interfaces__action__CountUntil_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_SendGoal_Event__destroy(mark_interfaces__action__CountUntil_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_SendGoal_Event__Sequence__init(mark_interfaces__action__CountUntil_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Event * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_SendGoal_Event *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_SendGoal_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_SendGoal_Event__Sequence__fini(mark_interfaces__action__CountUntil_SendGoal_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_SendGoal_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_SendGoal_Event__Sequence *
mark_interfaces__action__CountUntil_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_SendGoal_Event__Sequence * array = (mark_interfaces__action__CountUntil_SendGoal_Event__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_SendGoal_Event__Sequence__destroy(mark_interfaces__action__CountUntil_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_SendGoal_Event__Sequence__are_equal(const mark_interfaces__action__CountUntil_SendGoal_Event__Sequence * lhs, const mark_interfaces__action__CountUntil_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_SendGoal_Event__Sequence__copy(
  const mark_interfaces__action__CountUntil_SendGoal_Event__Sequence * input,
  mark_interfaces__action__CountUntil_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_SendGoal_Event * data =
      (mark_interfaces__action__CountUntil_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
mark_interfaces__action__CountUntil_GetResult_Request__init(mark_interfaces__action__CountUntil_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mark_interfaces__action__CountUntil_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__action__CountUntil_GetResult_Request__fini(mark_interfaces__action__CountUntil_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
mark_interfaces__action__CountUntil_GetResult_Request__are_equal(const mark_interfaces__action__CountUntil_GetResult_Request * lhs, const mark_interfaces__action__CountUntil_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_GetResult_Request__copy(
  const mark_interfaces__action__CountUntil_GetResult_Request * input,
  mark_interfaces__action__CountUntil_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

mark_interfaces__action__CountUntil_GetResult_Request *
mark_interfaces__action__CountUntil_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Request * msg = (mark_interfaces__action__CountUntil_GetResult_Request *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_GetResult_Request));
  bool success = mark_interfaces__action__CountUntil_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_GetResult_Request__destroy(mark_interfaces__action__CountUntil_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_GetResult_Request__Sequence__init(mark_interfaces__action__CountUntil_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Request * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_GetResult_Request *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_GetResult_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_GetResult_Request__Sequence__fini(mark_interfaces__action__CountUntil_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_GetResult_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_GetResult_Request__Sequence *
mark_interfaces__action__CountUntil_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Request__Sequence * array = (mark_interfaces__action__CountUntil_GetResult_Request__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_GetResult_Request__Sequence__destroy(mark_interfaces__action__CountUntil_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_GetResult_Request__Sequence__are_equal(const mark_interfaces__action__CountUntil_GetResult_Request__Sequence * lhs, const mark_interfaces__action__CountUntil_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_GetResult_Request__Sequence__copy(
  const mark_interfaces__action__CountUntil_GetResult_Request__Sequence * input,
  mark_interfaces__action__CountUntil_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_GetResult_Request * data =
      (mark_interfaces__action__CountUntil_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "mark_interfaces/action/detail/count_until__functions.h"

bool
mark_interfaces__action__CountUntil_GetResult_Response__init(mark_interfaces__action__CountUntil_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!mark_interfaces__action__CountUntil_Result__init(&msg->result)) {
    mark_interfaces__action__CountUntil_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__action__CountUntil_GetResult_Response__fini(mark_interfaces__action__CountUntil_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  mark_interfaces__action__CountUntil_Result__fini(&msg->result);
}

bool
mark_interfaces__action__CountUntil_GetResult_Response__are_equal(const mark_interfaces__action__CountUntil_GetResult_Response * lhs, const mark_interfaces__action__CountUntil_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!mark_interfaces__action__CountUntil_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_GetResult_Response__copy(
  const mark_interfaces__action__CountUntil_GetResult_Response * input,
  mark_interfaces__action__CountUntil_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!mark_interfaces__action__CountUntil_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

mark_interfaces__action__CountUntil_GetResult_Response *
mark_interfaces__action__CountUntil_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Response * msg = (mark_interfaces__action__CountUntil_GetResult_Response *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_GetResult_Response));
  bool success = mark_interfaces__action__CountUntil_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_GetResult_Response__destroy(mark_interfaces__action__CountUntil_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_GetResult_Response__Sequence__init(mark_interfaces__action__CountUntil_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Response * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_GetResult_Response *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_GetResult_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_GetResult_Response__Sequence__fini(mark_interfaces__action__CountUntil_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_GetResult_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_GetResult_Response__Sequence *
mark_interfaces__action__CountUntil_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Response__Sequence * array = (mark_interfaces__action__CountUntil_GetResult_Response__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_GetResult_Response__Sequence__destroy(mark_interfaces__action__CountUntil_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_GetResult_Response__Sequence__are_equal(const mark_interfaces__action__CountUntil_GetResult_Response__Sequence * lhs, const mark_interfaces__action__CountUntil_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_GetResult_Response__Sequence__copy(
  const mark_interfaces__action__CountUntil_GetResult_Response__Sequence * input,
  mark_interfaces__action__CountUntil_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_GetResult_Response * data =
      (mark_interfaces__action__CountUntil_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "mark_interfaces/action/detail/count_until__functions.h"

bool
mark_interfaces__action__CountUntil_GetResult_Event__init(mark_interfaces__action__CountUntil_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    mark_interfaces__action__CountUntil_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!mark_interfaces__action__CountUntil_GetResult_Request__Sequence__init(&msg->request, 0)) {
    mark_interfaces__action__CountUntil_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!mark_interfaces__action__CountUntil_GetResult_Response__Sequence__init(&msg->response, 0)) {
    mark_interfaces__action__CountUntil_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__action__CountUntil_GetResult_Event__fini(mark_interfaces__action__CountUntil_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  mark_interfaces__action__CountUntil_GetResult_Request__Sequence__fini(&msg->request);
  // response
  mark_interfaces__action__CountUntil_GetResult_Response__Sequence__fini(&msg->response);
}

bool
mark_interfaces__action__CountUntil_GetResult_Event__are_equal(const mark_interfaces__action__CountUntil_GetResult_Event * lhs, const mark_interfaces__action__CountUntil_GetResult_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!mark_interfaces__action__CountUntil_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!mark_interfaces__action__CountUntil_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_GetResult_Event__copy(
  const mark_interfaces__action__CountUntil_GetResult_Event * input,
  mark_interfaces__action__CountUntil_GetResult_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!mark_interfaces__action__CountUntil_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!mark_interfaces__action__CountUntil_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

mark_interfaces__action__CountUntil_GetResult_Event *
mark_interfaces__action__CountUntil_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Event * msg = (mark_interfaces__action__CountUntil_GetResult_Event *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_GetResult_Event));
  bool success = mark_interfaces__action__CountUntil_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_GetResult_Event__destroy(mark_interfaces__action__CountUntil_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_GetResult_Event__Sequence__init(mark_interfaces__action__CountUntil_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Event * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_GetResult_Event *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_GetResult_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_GetResult_Event__Sequence__fini(mark_interfaces__action__CountUntil_GetResult_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_GetResult_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_GetResult_Event__Sequence *
mark_interfaces__action__CountUntil_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_GetResult_Event__Sequence * array = (mark_interfaces__action__CountUntil_GetResult_Event__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_GetResult_Event__Sequence__destroy(mark_interfaces__action__CountUntil_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_GetResult_Event__Sequence__are_equal(const mark_interfaces__action__CountUntil_GetResult_Event__Sequence * lhs, const mark_interfaces__action__CountUntil_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_GetResult_Event__Sequence__copy(
  const mark_interfaces__action__CountUntil_GetResult_Event__Sequence * input,
  mark_interfaces__action__CountUntil_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_GetResult_Event * data =
      (mark_interfaces__action__CountUntil_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "mark_interfaces/action/detail/count_until__functions.h"

bool
mark_interfaces__action__CountUntil_FeedbackMessage__init(mark_interfaces__action__CountUntil_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    mark_interfaces__action__CountUntil_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!mark_interfaces__action__CountUntil_Feedback__init(&msg->feedback)) {
    mark_interfaces__action__CountUntil_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
mark_interfaces__action__CountUntil_FeedbackMessage__fini(mark_interfaces__action__CountUntil_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  mark_interfaces__action__CountUntil_Feedback__fini(&msg->feedback);
}

bool
mark_interfaces__action__CountUntil_FeedbackMessage__are_equal(const mark_interfaces__action__CountUntil_FeedbackMessage * lhs, const mark_interfaces__action__CountUntil_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mark_interfaces__action__CountUntil_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_FeedbackMessage__copy(
  const mark_interfaces__action__CountUntil_FeedbackMessage * input,
  mark_interfaces__action__CountUntil_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!mark_interfaces__action__CountUntil_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

mark_interfaces__action__CountUntil_FeedbackMessage *
mark_interfaces__action__CountUntil_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_FeedbackMessage * msg = (mark_interfaces__action__CountUntil_FeedbackMessage *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mark_interfaces__action__CountUntil_FeedbackMessage));
  bool success = mark_interfaces__action__CountUntil_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mark_interfaces__action__CountUntil_FeedbackMessage__destroy(mark_interfaces__action__CountUntil_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mark_interfaces__action__CountUntil_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mark_interfaces__action__CountUntil_FeedbackMessage__Sequence__init(mark_interfaces__action__CountUntil_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_FeedbackMessage * data = NULL;

  if (size) {
    data = (mark_interfaces__action__CountUntil_FeedbackMessage *)allocator.zero_allocate(size, sizeof(mark_interfaces__action__CountUntil_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mark_interfaces__action__CountUntil_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mark_interfaces__action__CountUntil_FeedbackMessage__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mark_interfaces__action__CountUntil_FeedbackMessage__Sequence__fini(mark_interfaces__action__CountUntil_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mark_interfaces__action__CountUntil_FeedbackMessage__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mark_interfaces__action__CountUntil_FeedbackMessage__Sequence *
mark_interfaces__action__CountUntil_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mark_interfaces__action__CountUntil_FeedbackMessage__Sequence * array = (mark_interfaces__action__CountUntil_FeedbackMessage__Sequence *)allocator.allocate(sizeof(mark_interfaces__action__CountUntil_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mark_interfaces__action__CountUntil_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mark_interfaces__action__CountUntil_FeedbackMessage__Sequence__destroy(mark_interfaces__action__CountUntil_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mark_interfaces__action__CountUntil_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mark_interfaces__action__CountUntil_FeedbackMessage__Sequence__are_equal(const mark_interfaces__action__CountUntil_FeedbackMessage__Sequence * lhs, const mark_interfaces__action__CountUntil_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mark_interfaces__action__CountUntil_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mark_interfaces__action__CountUntil_FeedbackMessage__Sequence__copy(
  const mark_interfaces__action__CountUntil_FeedbackMessage__Sequence * input,
  mark_interfaces__action__CountUntil_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mark_interfaces__action__CountUntil_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mark_interfaces__action__CountUntil_FeedbackMessage * data =
      (mark_interfaces__action__CountUntil_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mark_interfaces__action__CountUntil_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mark_interfaces__action__CountUntil_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mark_interfaces__action__CountUntil_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
