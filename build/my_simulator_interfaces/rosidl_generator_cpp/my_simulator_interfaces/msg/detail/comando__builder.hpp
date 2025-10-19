// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_simulator_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

#ifndef MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_
#define MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_simulator_interfaces/msg/detail/comando__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_simulator_interfaces
{

namespace msg
{

namespace builder
{

class Init_Comando_coordinates
{
public:
  explicit Init_Comando_coordinates(::my_simulator_interfaces::msg::Comando & msg)
  : msg_(msg)
  {}
  ::my_simulator_interfaces::msg::Comando coordinates(::my_simulator_interfaces::msg::Comando::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_simulator_interfaces::msg::Comando msg_;
};

class Init_Comando_delta
{
public:
  explicit Init_Comando_delta(::my_simulator_interfaces::msg::Comando & msg)
  : msg_(msg)
  {}
  Init_Comando_coordinates delta(::my_simulator_interfaces::msg::Comando::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return Init_Comando_coordinates(msg_);
  }

private:
  ::my_simulator_interfaces::msg::Comando msg_;
};

class Init_Comando_acc
{
public:
  Init_Comando_acc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Comando_delta acc(::my_simulator_interfaces::msg::Comando::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_Comando_delta(msg_);
  }

private:
  ::my_simulator_interfaces::msg::Comando msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_simulator_interfaces::msg::Comando>()
{
  return my_simulator_interfaces::msg::builder::Init_Comando_acc();
}

}  // namespace my_simulator_interfaces

#endif  // MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_
