#include <iostream>

// Ackermann function
long long int ackermann(int m, int n) {
  if (m == 0) {
    return (n + 1);
  } else if (m > 0 && n == 0) {
    return ackermann(m - 1, 1);
  } else if (m > 0 && n > 0) {
    return ackermann(m - 1, ackermann(m, n - 1));
  }
}


int main(int argc, char** argv) {
  int m, n;
  std::cout << "Enter arguments m and n of the Ackermann function: ";
  std::cin >> m >> n;
  std::cout << "A (" << m << ", " << n << ") = " << ackermann(m, n) << "\n";
  return 0;
}