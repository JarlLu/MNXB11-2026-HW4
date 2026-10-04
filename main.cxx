/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include "as2.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  int a=1;
  float b=-5.5;
  homework::AddOneRef(a);
  std::cout << a<<"\n";
  std::cout << homework::isOdd(-1)<<"\n";
  std::cout << homework::floatToInt(b) << "\n";
  std::cout << homework::factorial(5) << "\n";
  std::cout << homework::factorial(0) << "\n";
  std::cout << homework::factorial(-1) << "\n";
  
  std::cout << "Assignment 2\n";
  homework::Foo foo{5};
  std::cout << foo.bar()<<"\n";
  std::cout << foo.baz()<<"\n";
  std::cout << foo.x << "\n";
  std::vector<double> vec=foo.quux();
  std::cout << vec[0]<< vec[1]<<vec[2]<<"\n";
}

