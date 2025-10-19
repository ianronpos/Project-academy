// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from my_simulator_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

#ifndef MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__FUNCTIONS_H_
#define MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "my_simulator_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "my_simulator_interfaces/msg/detail/comando__struct.h"

/// Initialize msg/Comando message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * my_simulator_interfaces__msg__Comando
 * )) before or use
 * my_simulator_interfaces__msg__Comando__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
bool
my_simulator_interfaces__msg__Comando__init(my_simulator_interfaces__msg__Comando * msg);

/// Finalize msg/Comando message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
void
my_simulator_interfaces__msg__Comando__fini(my_simulator_interfaces__msg__Comando * msg);

/// Create msg/Comando message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * my_simulator_interfaces__msg__Comando__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
my_simulator_interfaces__msg__Comando *
my_simulator_interfaces__msg__Comando__create();

/// Destroy msg/Comando message.
/**
 * It calls
 * my_simulator_interfaces__msg__Comando__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
void
my_simulator_interfaces__msg__Comando__destroy(my_simulator_interfaces__msg__Comando * msg);

/// Check for msg/Comando message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
bool
my_simulator_interfaces__msg__Comando__are_equal(const my_simulator_interfaces__msg__Comando * lhs, const my_simulator_interfaces__msg__Comando * rhs);

/// Copy a msg/Comando message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
bool
my_simulator_interfaces__msg__Comando__copy(
  const my_simulator_interfaces__msg__Comando * input,
  my_simulator_interfaces__msg__Comando * output);

/// Initialize array of msg/Comando messages.
/**
 * It allocates the memory for the number of elements and calls
 * my_simulator_interfaces__msg__Comando__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
bool
my_simulator_interfaces__msg__Comando__Sequence__init(my_simulator_interfaces__msg__Comando__Sequence * array, size_t size);

/// Finalize array of msg/Comando messages.
/**
 * It calls
 * my_simulator_interfaces__msg__Comando__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
void
my_simulator_interfaces__msg__Comando__Sequence__fini(my_simulator_interfaces__msg__Comando__Sequence * array);

/// Create array of msg/Comando messages.
/**
 * It allocates the memory for the array and calls
 * my_simulator_interfaces__msg__Comando__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
my_simulator_interfaces__msg__Comando__Sequence *
my_simulator_interfaces__msg__Comando__Sequence__create(size_t size);

/// Destroy array of msg/Comando messages.
/**
 * It calls
 * my_simulator_interfaces__msg__Comando__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
void
my_simulator_interfaces__msg__Comando__Sequence__destroy(my_simulator_interfaces__msg__Comando__Sequence * array);

/// Check for msg/Comando message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
bool
my_simulator_interfaces__msg__Comando__Sequence__are_equal(const my_simulator_interfaces__msg__Comando__Sequence * lhs, const my_simulator_interfaces__msg__Comando__Sequence * rhs);

/// Copy an array of msg/Comando messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_my_simulator_interfaces
bool
my_simulator_interfaces__msg__Comando__Sequence__copy(
  const my_simulator_interfaces__msg__Comando__Sequence * input,
  my_simulator_interfaces__msg__Comando__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__FUNCTIONS_H_
