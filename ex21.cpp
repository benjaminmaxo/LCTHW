#include <vector>
#include <fmt/core.h>
#include <iostream>
#include <fstream>

using std::vector, std::string, std::ofstream, std::ios;
using fmt::println;

int main(int argc, char *argv[]) {
  vector<string> names{
    "Frank", "Joe", "Mary", "Thompson"
  };
  ofstream outfile{"names.txt"};

  for(auto& name : names) {
    outfile.write(name.c_str(), name.size());
    outfile.put('\n');
  }
}
