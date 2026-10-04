/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

int main() { 
  // Example for as1.0
  int a=1;
  homework::AddOneRef(a);
  std::cout << a<<"\n";
  std::cout << homework::isOdd(-1)<<"\n";
}

