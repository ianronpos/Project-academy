// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_
#define INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces/msg/detail/comando__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces
{

namespace msg
{

namespace builder
{

class Init_Comando_delta
{
public:
  explicit Init_Comando_delta(::interfaces::msg::Comando & msg)
  : msg_(msg)
  {}
  ::interfaces::msg::Comando delta(::interfaces::msg::Comando::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces::msg::Comando msg_;
};

class Init_Comando_acc
{
public:
  Init_Comando_acc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Comando_delta acc(::interfaces::msg::Comando::_acc_type arg)
  {
    msg_.acc = std::move(arg);
    return Init_Comando_delta(msg_);
  }

private:
  ::interfaces::msg::Comando msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces::msg::Comando>()
{
  return interfaces::msg::builder::Init_Comando_acc();
}

}  // namespace interfaces

#endif  // INTERFACES__MSG__DETAIL__COMANDO__BUILDER_HPP_
