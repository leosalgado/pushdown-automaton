#pragma once

#include <string>
#include <vector>

namespace pda {

class Stack {

private:
  std::vector<std::string> data;

public:
  void push(const std::string &symbol);
  void pop();
  std::string top() const;
  bool empty() const;
  void clear();
};

} // namespace pda
