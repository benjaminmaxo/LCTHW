#include <fmt/core.h>

using namespace fmt;

int adder(int a, int b) {
  int res = a + b;
  return res; // push res, pop 11
}

int main() {
  // push [40, 50, line 12]
  int x = adder(40, 50); // pop x
  println("x={}", x);

  // ?
  int y = adder(60, 70); // ?
  println("y={}", y);

  return 0;
}
