#include <iostream>

// Switch a register (small/capital) of a character
int main (int argc, char** argv) {
  char character1, character2;
  std::cout << "Enter a character: ";
  std::cin >> character1;
  switch (character1) {
    case 'a': character2 = 'A'; break;
    case 'b': character2 = 'B'; break;
    case 'c': character2 = 'C'; break;
    case 'd': character2 = 'D'; break;
    case 'e': character2 = 'E'; break;
    case 'f': character2 = 'F'; break;
    case 'g': character2 = 'G'; break;
    case 'h': character2 = 'H'; break;
    case 'i': character2 = 'I'; break;
    case 'j': character2 = 'J'; break;
    case 'k': character2 = 'K'; break;
    case 'l': character2 = 'L'; break;
    case 'm': character2 = 'M'; break;
    case 'n': character2 = 'N'; break;
    case 'o': character2 = 'O'; break;
    case 'p': character2 = 'P'; break;
    case 'q': character2 = 'Q'; break;
    case 'r': character2 = 'R'; break;
    case 's': character2 = 'S'; break;
    case 't': character2 = 'T'; break;
    case 'u': character2 = 'U'; break;
    case 'v': character2 = 'V'; break;
    case 'w': character2 = 'W'; break;
    case 'x': character2 = 'X'; break;
    case 'y': character2 = 'Y'; break;
    case 'z': character2 = 'Z'; break;
    case 'A': character2 = 'a'; break;
    case 'B': character2 = 'b'; break;
    case 'C': character2 = 'c'; break;
    case 'D': character2 = 'd'; break;
    case 'E': character2 = 'e'; break;
    case 'F': character2 = 'f'; break;
    case 'G': character2 = 'g'; break;
    case 'H': character2 = 'h'; break;
    case 'I': character2 = 'i'; break;
    case 'J': character2 = 'j'; break;
    case 'K': character2 = 'k'; break;
    case 'L': character2 = 'l'; break;
    case 'M': character2 = 'm'; break;
    case 'N': character2 = 'n'; break;
    case 'O': character2 = 'o'; break;
    case 'P': character2 = 'p'; break;
    case 'Q': character2 = 'q'; break;
    case 'R': character2 = 'r'; break;
    case 'S': character2 = 's'; break;
    case 'T': character2 = 't'; break;
    case 'U': character2 = 'u'; break;
    case 'V': character2 = 'v'; break;
    case 'W': character2 = 'w'; break;
    case 'X': character2 = 'x'; break;
    case 'Y': character2 = 'y'; break;
    case 'Z': character2 = 'z'; break;
  }
  std::cout << "Switched character: " << character2 << std::endl;
  return 0;
}