#include <iostream>

void sortArray(int* A, int N) {
  for (int k = 1; k < N; ++k) {
    int current = A[k];
    int i = k - 1;
    while ((i >= 0) && (A[i] > current)) {
      A[i + 1] = A[i];
      --i;
    }
    A[i+1]=current;
  }
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
  
  sortArray(x, N);
  std::cout << "Sorted array: ";
  for (int i = 0; i < N; i++) {
    std::cout << x[i] << " ";
  }
  std::cout << "\n";

  return 0;
}