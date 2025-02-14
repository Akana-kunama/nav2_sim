// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_command:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_COMMAND__MSG__DETAIL__COMMAND__BUILDER_HPP_
#define CUSTOM_COMMAND__MSG__DETAIL__COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_command/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_command
{

namespace msg
{

namespace builder
{

class Init_Command_parameters
{
public:
  explicit Init_Command_parameters(::custom_command::msg::Command & msg)
  : msg_(msg)
  {}
  ::custom_command::msg::Command parameters(::custom_command::msg::Command::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_command::msg::Command msg_;
};

class Init_Command_name
{
public:
  Init_Command_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Command_parameters name(::custom_command::msg::Command::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Command_parameters(msg_);
  }

private:
  ::custom_command::msg::Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_command::msg::Command>()
{
  return custom_command::msg::builder::Init_Command_name();
}

}  // namespace custom_command

#endif  // CUSTOM_COMMAND__MSG__DETAIL__COMMAND__BUILDER_HPP_
