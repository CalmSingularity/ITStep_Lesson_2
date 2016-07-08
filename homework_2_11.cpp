#include <iostream>
#include <cmath>

// Prints an integer decimal number as a B-decimal number:
void decToBase(int N, int B) {
  int remainder = N;
  int length = floor(log(N) / log(B));
  char result[256];
  for (int i = length; i >= 0; i--) {
    switch (remainder % B) {
      case 0: result[i] = '0'; break;
      case 1: result[i] = '1'; break;
      case 2: result[i] = '2'; break;
      case 3: result[i] = '3'; break;
      case 4: result[i] = '4'; break;
      case 5: result[i] = '5'; break;
      case 6: result[i] = '6'; break;
      case 7: result[i] = '7'; break;
      case 8: result[i] = '8'; break;
      case 9: result[i] = '9'; break;
      default: result[i] = '-';
    }
    remainder = floor(remainder / B);
  }

  // Print result:
  std::cout << N << " in the " << B << "-decimal format: ";
  for (int i = 0; i <= length; i++) {
    std::cout << result[i];
  }
  std::cout << "\n";
}


int main(int argc, char** argv) {
  int N = 8888;
  // std::cout << "Enter an integer number: ";
  // std::cin >> N;

  for (int B = 2; B <= 10; B++) {
    decToBase(N, B);
  }

  return 0;
}