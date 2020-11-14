#include "greet.h"
#include "includes/add.h"

int main() {
  Greet::hello("World");
  std::cout << add(1, 1) << std::endl;
}
