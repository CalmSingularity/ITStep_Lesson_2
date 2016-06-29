#include <iostream>

int findMax(int x[], int N) {
  int max = 0;
  for (int i = 0; i < N; i++) {
    if (x[i] > max) max = x[i];
  }
  return max;
}


int main(int argc, char** argv) {
  int x[255], N;
  for (int i = 0; i < 256; i++) {
    x[i] = 0;
  }
  std::cout << "Enter the size of array from 1 to 256: ";
  std::cin >> N;
  std::cout << "Enter " << N << " elements of the array: ";
  for (int i = 0; i < N; i++) {
    std::cin >> x[i];
  }
  std::cout << "The max value is " << findMax(x, N) << "\n";
  return 0;
}