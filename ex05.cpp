#include <iostream>
#include <string>

int main() {
  std::cout << "This is printed.\n";
  std::cerr << "This writes to the error output.\n";

  // notice the \t at the start
  std::cout << "\tThis is tabbed in.\n";

  return 0;
}
