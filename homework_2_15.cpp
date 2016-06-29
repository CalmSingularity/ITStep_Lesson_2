#include <iostream>

// Multiplication table
int main(int argc, char** argv) {
  
  for (int a_shift = 0; a_shift < 10; a_shift = a_shift + 5) {
    for (int b = 1; b <= 9; b++) {
      for (int a = a_shift + 1; a <= a_shift + 5; a++) {
        std::cout << a << " * " << b << " = " << (a * b) << "   ";

        // improve output formatting with additional spacing:
        if (a * b < 10) {
          std::cout << " ";
        }
      }
      std::cout << "\n";
  }
  std::cout << "\n";
  }
  
  return 0;
}