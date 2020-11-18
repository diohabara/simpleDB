#include <iostream>
#include <string>

std::string greet(std::string name);

class Greet {
 public:
  static int hello(std::string name) {
    std::cout << "Hello " << name << "!" << std::endl;
    return 0;
  }
};