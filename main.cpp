#include <iostream>
#include <stack>
#include <string>

void process(const std::string &input) {
  std::stack<char> pda_stack;
  pda_stack.push('Z');

  for (char c : input) {
    std::cout << c << std::endl;
  }
}

int main(int argc, char *argv[]) {
  std::string input;

  std::cin >> input;
  std::cout << input << std::endl;

  process(input);

  return 0;
}
