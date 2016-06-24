#include <iostream>
using namespace std;

// Multiplication table
int main (int argc, char** argv) {
  
  // First part: A equals 1 to 5
  for (int b = 1; b <= 9; b++) {
    for (int a = 1; a <= 5; a++) {
      cout << a << " * " << b << " = " << (a * b) << "   ";

      // improve output formatting with additional spacing:
      if (a * b < 10) cout << " ";
    }
    cout << endl;
  }
  cout << endl;

  // Second part: A equals 6 to 10
  for (int b = 1; b <= 9; b++) {
    for (int a = 6; a <= 10; a++) {
      cout << a << " * " << b << " = " << (a * b) << "   ";

      // improve output formatting with additional spacing:
      if (a * b < 10) cout << " ";
    }
    cout << endl;
  }
  
  return 0;
}