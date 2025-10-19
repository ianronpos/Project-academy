// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_simulator_interfaces:msg/Comando.idl
// generated code does not contain a copyright notice

#ifndef MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_HPP_
#define MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__my_simulator_interfaces__msg__Comando __attribute__((deprecated))
#else
# define DEPRECATED__my_simulator_interfaces__msg__Comando __declspec(deprecated)
#endif

namespace my_simulator_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Comando_
{
  using Type = Comando_<ContainerAllocator>;

  explicit Comando_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc = 0.0f;
      this->delta = 0.0f;
    }
  }

  explicit Comando_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : coordinates(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->acc = 0.0f;
      this->delta = 0.0f;
    }
  }

  // field types and members
  using _acc_type =
    float;
  _acc_type acc;
  using _delta_type =
    float;
  _delta_type delta;
  using _coordinates_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _coordinates_type coordinates;

  // setters for named parameter idiom
  Type & set__acc(
    const float & _arg)
  {
    this->acc = _arg;
    return *this;
  }
  Type & set__delta(
    const float & _arg)
  {
    this->delta = _arg;
    return *this;
  }
  Type & set__coordinates(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->coordinates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_simulator_interfaces::msg::Comando_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_simulator_interfaces::msg::Comando_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_simulator_interfaces::msg::Comando_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_simulator_interfaces::msg::Comando_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_simulator_interfaces::msg::Comando_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_simulator_interfaces::msg::Comando_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_simulator_interfaces::msg::Comando_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_simulator_interfaces::msg::Comando_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_simulator_interfaces::msg::Comando_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_simulator_interfaces::msg::Comando_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_simulator_interfaces__msg__Comando
    std::shared_ptr<my_simulator_interfaces::msg::Comando_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_simulator_interfaces__msg__Comando
    std::shared_ptr<my_simulator_interfaces::msg::Comando_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Comando_ & other) const
  {
    if (this->acc != other.acc) {
      return false;
    }
    if (this->delta != other.delta) {
      return false;
    }
    if (this->coordinates != other.coordinates) {
      return false;
    }
    return true;
  }
  bool operator!=(const Comando_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Comando_

// alias to use template instance with default allocator
using Comando =
  my_simulator_interfaces::msg::Comando_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_simulator_interfaces

#endif  // MY_SIMULATOR_INTERFACES__MSG__DETAIL__COMANDO__STRUCT_HPP_
