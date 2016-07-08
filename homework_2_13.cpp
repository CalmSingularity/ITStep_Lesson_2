#include <iostream>

bool isPrime(int x) {
  for (int divisor = 2; divisor < x; ++divisor) {
    int residual = x % divisor;
    if (residual == 0) {
      return false;
    }
  }
  return true;
}

int main(int argc, char** argv) {
  int i, count_prime = -1, count_even = -1, count_odd = 0;
  do {
    std::cin >> i;
    if (isPrime(i)) {
      count_prime += 1;
    }
    if (i % 2 == 0) {
      count_even += 1;
    } else {
      count_odd += 1;
    }
  } while (i != 0);
  std::cout << "You entered:\n";
  std::cout << count_prime << " prime number(s)\n";
  std::cout << count_even << " even number(s)\n";
  std::cout << count_odd << " odd number(s)\n";
  return 0;
}