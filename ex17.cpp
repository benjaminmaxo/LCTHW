#include <fmt/core.h>
#include <vector>

using std::string, std::vector;
using namespace fmt;

int main() {
  vector<string> fruit = {
    "Apple", "Orange", "Pear",
    "Grape", "Durian", "Mango"
  };

  // loop through fruit
  for(std::size_t i = 0; i < fruit.size(); i++) {
    println("Fruit #{} is {}", i, fruit[i]);
  }

  // another way to get it using at()
  for(std::size_t i = 0; i < fruit.size(); i++) {
    println("Fruit #{} is {}", i, fruit.at(i));
  }

  // set them all to something else
  vector<string> guitars = {
    "Stratocaster", "Telecaster", "Bass VI",
    "P-Bass", "ASAT Special", "G&L S500"
  };

  for(std::size_t i = 0; i < guitars.size(); i++) {
    println("Changing fruit #{} to guitar {}", i, guitars[i]);
    fruit[i] = guitars[i];
  }

  for(std::size_t i = 0; i < fruit.size(); i++) {
    println("Fruit...I mean Guitar #{} is {}", i, fruit.at(i));
  }

}
