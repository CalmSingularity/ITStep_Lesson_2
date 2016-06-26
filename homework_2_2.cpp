#include <iostream>

int main (int argc, char** argv) {
  double x1, x2, result;
  std::cout << "Enter two float numbers: ";
  std::cin >> x1 >> x2;
  result = x1 * x2;
  std::cout << x1 << " * " << x2 << " = " << result << std::endl;
  return 0;
}