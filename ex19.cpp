#include <iostream>
#include <fmt/core.h>
#include <limits>

using std::string, std::cin;
using namespace fmt;

int convert_number(const std::string& buffer) {
  try {
    int num = stoi(buffer);
    return num;
  } catch(...) {
    return -1;
  }
}

int main() {
  string name;
  string buffer;
  int age = 0;
  int height = 0;

  println("What's your name?");
  getline(cin, name);

  println("Welcome {}. What's your age?", name);
  getline(cin, buffer);

  age = convert_number(buffer);
  println("Nice, glad to hear you've lived {} years.", age);

  println("How tall are you in inches?");

  getline(cin, buffer);
  height = convert_number(buffer);
  println("Wow {} is pretty tall.", height);
}
