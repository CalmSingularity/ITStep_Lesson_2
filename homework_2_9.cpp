#include <iostream>

int main(int argc, char** argv) {
  int A[16], sum = 0;
  std::cout << "Enter 16 numbers: " << "\n";
  for (int i = 0; i < 16; ++i) {
    std::cin >> A[i];
    sum += A[i];
    // std::cout << "A[" << i << "] = " << A[i] << "\n";
  };
  std::cout << "The average is " << ((float) sum / 16) << "\n";
  return 0;
}