#include <iostream>
#include <cstdlib>


// Prints array A of size N
void printArray(int A[], unsigned short N) {
  for (unsigned short i = 0; i < N; ++i) {
    std::cout << A[i] << " ";
  }
  std::cout << "\n";
}


/* Concatenates all elements of array A of size NA 
 * and all elements of array B of size NB
 * into resulting array C */
void concatenateArray(int A[], int B[], int C[], unsigned short NA, unsigned short NB) {
  
  for (unsigned short i = 0; i < NA; i++) {
    C[i] = A[i];
    // std::cout << "Copying A[" << i << "] = " << A[i] << "\n";
  }
  
  for (unsigned short i = 0; i < NB; i++) {
    C[i + NA] = B[i];
    // std::cout << "Copying B[" << i << "] = " << B[i] << "\n";
  }
}


int main(int argc, char** argv) {
  int A[15], B[20], C[35];
  unsigned short int NA = 15, NB = 20, NC = 35;
  
  // generate random numbers
  for (unsigned short i = 0; i < NA; i++) {
    A[i] = rand();
  }
  for (unsigned short i = 0; i < NB; i++) {
    B[i] = rand();
  }

  // printArray(A, NA);
  // printArray(B, NB);
  
  concatenateArray(A, B, C, NA, NB);
  printArray(C, NC);

  return 0;
}