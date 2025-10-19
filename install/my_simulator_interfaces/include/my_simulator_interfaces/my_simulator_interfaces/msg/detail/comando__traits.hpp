// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_simulator_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

#ifndef MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__TRAITS_HPP_
#define MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_simulator_interfaces/msg/detail/comando__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace my_simulator_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Comando & msg,
  std::ostream & out)
{
  out << "{";
  // member: acc
  {
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << ", ";
  }

  // member: delta
  {
    out << "delta: ";
    rosidl_generator_traits::value_to_yaml(msg.delta, out);
    out << ", ";
  }

  // member: coordinates
  {
    out << "coordinates: ";
    to_flow_style_yaml(msg.coordinates, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Comando & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc: ";
    rosidl_generator_traits::value_to_yaml(msg.acc, out);
    out << "\n";
  }

  // member: delta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta: ";
    rosidl_generator_traits::value_to_yaml(msg.delta, out);
    out << "\n";
  }

  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinates:\n";
    to_block_style_yaml(msg.coordinates, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Comando & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_simulator_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_simulator_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_simulator_interfaces::msg::Comando & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_simulator_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_simulator_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_simulator_interfaces::msg::Comando & msg)
{
  return my_simulator_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_simulator_interfaces::msg::Comando>()
{
  return "my_simulator_interfaces::msg::Comando";
}

template<>
inline const char * name<my_simulator_interfaces::msg::Comando>()
{
  return "my_simulator_interfaces/msg/Comando";
}

template<>
struct has_fixed_size<my_simulator_interfaces::msg::Comando>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<my_simulator_interfaces::msg::Comando>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<my_simulator_interfaces::msg::Comando>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__TRAITS_HPP_
