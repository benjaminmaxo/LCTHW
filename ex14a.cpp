#include <fmt/core.h>

int main() {
  int nb = 0;
  for (; nb < 20; nb++)
    fmt::print("{} ", nb);
  return 0;  
}
