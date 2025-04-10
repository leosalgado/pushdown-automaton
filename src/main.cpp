#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

#include <lang/lang1.hpp>
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

  if (lang1(content, pda_stack)) {
    std::cout << "Word accepted" << std::endl;
  } else {
    std::cout << "Word not accepted" << std::endl;
  }
}
