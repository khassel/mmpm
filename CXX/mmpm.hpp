#ifndef MMPM_H
#define MMPM_H

#include <fort.hpp>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

namespace mmpm {
  void warning_message(const std::string message);
  void error_message(const std::string message);

  void display_modules(std::string json);
  void parse_json(const std::string json);
} // namespace mmpm

#endif
