#include <iostream>
#include <pda/pda.hpp>

namespace pda {

void Stack::push(const std::string &symbol) { data.emplace_back(symbol); }

void Stack::pop() { data.pop_back(); }

std::string Stack::top() const { return data.empty() ? "ε" : data.back(); }

bool Stack::empty() const { return data.empty(); }

void Stack::clear() { data.clear(); }

void Stack::print() {
  std::cout << "STACK: ";
  if (data.empty()) {
    std::cout << "ε" << std::endl;
  } else {
    std::cout << '[';
    for (auto it = data.rbegin(); it != data.rend(); ++it) {
      std::cout << *it;
    }
    std::cout << ']';
  }
}

} // namespace pda
