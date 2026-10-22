#include <fmt/core.h>

using namespace fmt;

void adder(int a, int b) {
  println("{}+{}={}", a, b, a+b);
} // pop stack, jump back

int main() {
  adder(20, 26);  // push [20, 26, line 10]
  adder(30, 36);  // ?

  return 0;
}
