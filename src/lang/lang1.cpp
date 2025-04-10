#include <iostream>
#include <pda/pda.hpp>

bool lang1(std::string &content, pda::Stack &pda_stack) {
  // a^jb^k | j, k >= 0
  int i = 0, len = content.size();

  std::cout << "READS: ";
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

  // Didn't read till the end
  if (i < (len - 1)) {
    return false;
  }

  while (pda_stack.top() == "b") {
    std::cout << "Top of stack: " << pda_stack.top() << " | ";
    pda_stack.print();
    std::cout << std::endl;
    pda_stack.pop();
  }

  while (pda_stack.top() == "a") {
    std::cout << "Top of stack: " << pda_stack.top() << " | ";
    pda_stack.print();
    std::cout << std::endl;
    pda_stack.pop();
  }

  return pda_stack.empty();
}
