#include <iostream>
#include <string>

std::string READ(std::string& input) {
  return input;
}

std::string EVAL(std::string& input) {
  return input;
}

std::string PRINT(std::string& input) {
  return input;
}

std::string rep(std::string& input) {
  std::string read = READ(input);
  std::string eval = EVAL(read);
  return PRINT(eval);
}

int main() {
  std::string input;
  while (1) {
    std::cout << "user> ";
    if (!std::getline(std::cin, input)) {
      break;
    }
    std::cout << input << "\n";
  }
  return 0;
}
