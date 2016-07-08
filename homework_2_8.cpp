#include <iostream>

int main(int argc, char** argv) {
  int i, count = -1, sum = 0;
  do {
    std::cin >> i;
    count += 1;
    sum += i;
  } while (i != 0);
  std::cout << "You entered " << count << " numbers" << "\n";
  std::cout << "The sum is " << sum << "\n";
  return 0;
}