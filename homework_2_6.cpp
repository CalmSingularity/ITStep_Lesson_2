#include <iostream>
#include <clocale>

// Prints out the dollar amount entered as a number in Russian words
int main (int argc, char** argv) {
  setlocale(LC_ALL, "rus");
  int n;
  std::cout << "Введите число от 1 до 9999: ";
  std::cin >> n;

  short int thousands, hundreds, tens, singles;
  singles = n % 10;
  tens = n % 100 / 10;
  hundreds = n % 1000 / 100;
  thousands = n / 1000;

  // std::cout << thousands << hundreds << tens << singles << std::endl;

  switch (thousands) {
    case 1: std::cout << "одна тысяча "; break;
    case 2: std::cout << "две тысячи "; break;
    case 3: std::cout << "три тысячи "; break;
    case 4: std::cout << "четыре тысячи "; break;
    case 5: std::cout << "пять тысяч "; break;
    case 6: std::cout << "шесть тысяч "; break;
    case 7: std::cout << "семь тысяч "; break;
    case 8: std::cout << "восемь тысяч "; break;
    case 9: std::cout << "девять тысяч "; break;
  }

  switch (hundreds) {
    case 1: std::cout << "сто "; break;
    case 2: std::cout << "двести "; break;
    case 3: std::cout << "триста "; break;
    case 4: std::cout << "четыреста "; break;
    case 5: std::cout << "пятьсот "; break;
    case 6: std::cout << "шестьсот "; break;
    case 7: std::cout << "семьсот "; break;
    case 8: std::cout << "восемьсот "; break;
    case 9: std::cout << "девятьсот "; break;
  }

  if (tens == 1) {
    switch (singles) {
      case 1: std::cout << "одиннадцать "; break;
      case 2: std::cout << "двенадцать "; break;
      case 3: std::cout << "тринадцать "; break;
      case 4: std::cout << "четырнадцать "; break;
      case 5: std::cout << "пятнадцать "; break;
      case 6: std::cout << "шестнадцать "; break;
      case 7: std::cout << "семнадцать "; break;
      case 8: std::cout << "восемнадцать "; break;
      case 9: std::cout << "девятнадцать "; break;
    }
    std::cout << "долларов";
  } else {
    switch (tens) {
      case 2: std::cout << "двадцать "; break;
      case 3: std::cout << "тридцать "; break;
      case 4: std::cout << "сорок "; break;
      case 5: std::cout << "пятьдесят "; break;
      case 6: std::cout << "шестьдесят "; break;
      case 7: std::cout << "семьдесят "; break;
      case 8: std::cout << "восемьдесят "; break;
      case 9: std::cout << "девяносто "; break;
    }
    switch (singles) {
      case 0: std::cout << "долларов"; break;
      case 1: std::cout << "один доллар"; break;
      case 2: std::cout << "два доллара"; break;
      case 3: std::cout << "три доллара"; break;
      case 4: std::cout << "четыре доллара"; break;
      case 5: std::cout << "пять долларов"; break;
      case 6: std::cout << "шесть долларов"; break;
      case 7: std::cout << "семь долларов"; break;
      case 8: std::cout << "восемь долларов"; break;
      case 9: std::cout << "девять долларов"; break;
    }
  }
  std::cout << std::endl;
  return 0;
}