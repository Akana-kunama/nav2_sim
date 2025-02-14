// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from custom_command:msg/Command.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_COMMAND__MSG__DETAIL__COMMAND__TRAITS_HPP_
#define CUSTOM_COMMAND__MSG__DETAIL__COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "custom_command/msg/detail/command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace custom_command
{

namespace msg
{

inline void to_flow_style_yaml(
  const Command & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: parameters
  {
    if (msg.parameters.size() == 0) {
      out << "parameters: []";
    } else {
      out << "parameters: [";
      size_t pending_items = msg.parameters.size();
      for (auto item : msg.parameters) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: parameters
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parameters.size() == 0) {
      out << "parameters: []\n";
    } else {
      out << "parameters:\n";
      for (auto item : msg.parameters) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Command & msg, bool use_flow_style = false)
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

}  // namespace custom_command

namespace rosidl_generator_traits
{

[[deprecated("use custom_command::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const custom_command::msg::Command & msg,
  std::ostream & out, size_t indentation = 0)
{
  custom_command::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use custom_command::msg::to_yaml() instead")]]
inline std::string to_yaml(const custom_command::msg::Command & msg)
{
  return custom_command::msg::to_yaml(msg);
}

template<>
inline const char * data_type<custom_command::msg::Command>()
{
  return "custom_command::msg::Command";
}

template<>
inline const char * name<custom_command::msg::Command>()
{
  return "custom_command/msg/Command";
}

template<>
struct has_fixed_size<custom_command::msg::Command>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<custom_command::msg::Command>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<custom_command::msg::Command>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CUSTOM_COMMAND__MSG__DETAIL__COMMAND__TRAITS_HPP_
