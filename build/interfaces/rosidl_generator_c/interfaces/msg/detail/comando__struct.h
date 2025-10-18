// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COMANDO__STRUCT_H_
#define INTERFACES__MSG__DETAIL__COMANDO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Comando in the package interfaces.
typedef struct interfaces__msg__Comando
{
  float acc;
  float delta;
} interfaces__msg__Comando;

// Struct for a sequence of interfaces__msg__Comando.
typedef struct interfaces__msg__Comando__Sequence
{
  interfaces__msg__Comando * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces__msg__Comando__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES__MSG__DETAIL__COMANDO__STRUCT_H_
