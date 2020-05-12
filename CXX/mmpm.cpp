#include "mmpm.hpp"

void mmpm::parse_json(std::string json) {
  std::cout << json << std::endl;
  std::stack<char> json_symbols;
}

void mmpm::error_message(const std::string message) {
  std::cout << message << std::endl;
}

void mmpm::warning_message(const std::string message) {
  std::cout << message << std::endl;
}

void mmpm::display_modules(const std::string json) {
  std::cout << json << std::endl;
}
