#include <sstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int a_int = stoi("1234");
  long a_long = stol("37812394");
  long long a_long_long = stoll("-68354647782938476");
  unsigned long a_unsigned_long = stoul("84938374");
  unsigned long long a_ul_long = stoull("68354647782938476");
  float a_float = stof("0.1234");
  double a_double = stod("3.23499");
  long double a_long_double = stold("0.00234002");

  string from_number = to_string(123456);
  string from_float = to_string(1.1000f);

  ostringstream msg;

  msg << "An int " << a_int << endl;
  msg << "A long " << a_long << endl;
  msg << "A long long " << a_long_long << endl;
  msg << "An unsigned long " << a_unsigned_long << endl;
  msg << "An unsigned long long " << a_ul_long << endl;
  msg << "An float " << a_float << endl;
  msg << "An double " << a_double << endl;
  msg << "An long double " << a_long_double << endl;
  msg << "From number " << from_number << endl;
  msg << "From float " << from_float << endl;

  cout << "The result is: " << endl << msg.str();

  return 0;
}
