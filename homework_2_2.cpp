#include <iostream>

double multiply(double a, double b) {
  return a * b;
}

int main(int argc, char** argv) {
  double x1, x2, result;
  std::cout << "Enter two float numbers: ";
  std::cin >> x1 >> x2;
  std::cout << x1 << " * " << x2 << " = " << multiply(x1, x2) << "\n";
  return 0;
}