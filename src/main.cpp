#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include <pda/pda.hpp>

void process(std::ifstream &input, pda::Stack &pda_stack);

int main(int argc, char *argv[]) {
  pda::Stack pda_stack;

  std::ifstream input_file("../input/input.txt");

  process(input_file, pda_stack);

  std::cout << "Top of stack after process: " << pda_stack.top() << std::endl;

  input_file.close();
  return 0;
}

void process(std::ifstream &input, pda::Stack &pda_stack) {
  std::ostringstream ss;
  ss << input.rdbuf();
  std::string content = ss.str();
  int i = 0, len = content.size();

  while (i < len && content[i] == 'a') {
    std::cout << content[i];
    pda_stack.push(std::string(1, content[i]));
    i++;
  }

  while (i < len && content[i] == 'b') {
    std::cout << content[i];
    pda_stack.push(std::string(1, content[i]));
    i++;
  }

  std::cout << std::endl;

  while (!pda_stack.empty()) {
    std::cout << "Top of stack: " << pda_stack.top() << " | ";
    pda_stack.print();
    std::cout << std::endl;
    pda_stack.pop();
  }
}
