#include <fmt/core.h>

using fmt::println;

int bad_adder(int a, int b, int result) {
  if(a < 0 || b < 0) {
    return -1;
  } else {
    result = a + b;
    return 0;
  }
}

int error_adder(int a, int b, int& result) {
  if(a < 0 || b < 0) {
    return -1;
  } else {
    result = a + b;
    return 0;
  }
}

void print_result(const std::string& func_name, int a, int b, int err, int result) {
  println("{}: a={},b={}, err={}, result={}", func_name, a, b, err, result);
}


int main(int argc, char* argv[]) {
  int result = 0;
  int err = 0;

  err = bad_adder(10, 20, result);
  print_result("bad_adder", 10, 20, err, result);

  err = bad_adder(-10, 20, result);
  print_result("bad_adder", -10, 20, err, result);

  err = error_adder(24, 14, result);
  print_result("error_adder", 24, 14, err, result);

  err = error_adder(-24, 14, result);
  print_result("error_adder", -24, 14, err, result);
}
