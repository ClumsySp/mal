#include "linenoise.hpp"
#include <iostream>
#include <string>

std::string READ(std::string &input) { return input; }

std::string EVAL(std::string &input) { return input; }

std::string PRINT(std::string &input) { return input; }

std::string rep(std::string &input) {
  std::string read = READ(input);
  std::string eval = EVAL(read);
  return PRINT(eval);
}

int main() {
  std::string input;
  const auto path = "history.txt";
  linenoise::LoadHistory(path);
  while (1) {
    auto quit = linenoise::Readline("user> ", input);
    if (quit) {
      break;
    }
    std::cout << rep(input) << std::endl;
    linenoise::AddHistory(input.c_str());
  }
  linenoise::SaveHistory(path);
  return 0;
}
