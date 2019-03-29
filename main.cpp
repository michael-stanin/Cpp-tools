#include <iostream>

int main() {
  if (true)
    std::cout << true;
  int *p;
  *p = 0;
  std::cout << "Hello World";
  return 0;
}