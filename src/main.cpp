#include <fstream>
#include <iostream>
#include <string>

#include "../include/pda/pda.hpp"

void process(std::ifstream &input, pda::Stack &pda_stack) {
  char c;

  while (input >> c) {
    std::cout << "Read: " << c << std::endl;
    pda_stack.push(std::string(1, c));
  }

  std::cout << "Top of stack: " << pda_stack.top() << std::endl;
  while (!pda_stack.empty()) {
    std::cout << "Top of stack after pop: " << pda_stack.top() << std::endl;
    pda_stack.pop();
  }
}

int main(int argc, char *argv[]) {
  pda::Stack pda_stack;

  std::ifstream input_file("../input/input.txt");

  process(input_file, pda_stack);

  std::cout << "Top of stack after process: " << pda_stack.top() << std::endl;
  return 0;
}
