#include <fmt/core.h>

using namespace fmt;

auto adder(int a, int b) {
  return a + b;
}

int main() {
  auto x = adder(100, 40);
  println("x={}", x);

  auto y = adder(100, 50);
  println("y={}", y);

  return 0;
}
