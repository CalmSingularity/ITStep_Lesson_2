#include <iostream>
#include <cmath>

// Calculates the geometric average of the 16 numbers entered by user:
int main(int argc, char** argv) {
  int A[16];
  double product = 1;
  std::cout << "Enter 16 numbers: " << "\n";
  for (int i = 0; i < 16; ++i) {
    std::cin >> A[i];
    product *= A[i];
    // std::cout << "A[" << i << "] = " << A[i] << "\n";
    // std::cout << "Product = " << product << "\n";
  };
  std::cout << "The geometric average is " << sqrt(sqrt(sqrt(sqrt(product)))) << "\n";
  return 0;
}