#include <iostream>
#include <clocale>

void printCurrency(short int currency, short int l_case) {
  switch (l_case) {
    case 0: 
      switch (currency) {
        case 0: std::cout << "долларов"; break;
        case 1: std::cout << "фунтов"; break;
        case 2: std::cout << "евро"; break;
        case 3: std::cout << "рублей"; break;
        case 4: std::cout << "марок"; break;
        case 5: std::cout << "франков"; break;
      }
      break;
    case 1: 
      switch (currency) {
        case 0: std::cout << "доллар"; break;
        case 1: std::cout << "фунт"; break;
        case 2: std::cout << "евро"; break;
        case 3: std::cout << "рубль"; break;
        case 4: std::cout << "марка"; break;
        case 5: std::cout << "франк"; break;
      }
      break;
    case 2: 
      switch (currency) {
        case 0: std::cout << "доллара"; break;
        case 1: std::cout << "фунта"; break;
        case 2: std::cout << "евро"; break;
        case 3: std::cout << "рубля"; break;
        case 4: std::cout << "марки"; break;
        case 5: std::cout << "франка"; break;
      }
      break;
  }
}

// Prints out the currency amount entered as a number in Russian words
int main(int argc, char** argv) {
  setlocale(LC_ALL, "rus");
  int n;
  short int currency;
  std::cout << "Введите валюту от 0 до 5: ";
  std::cin >> currency; 
  std::cout << "Введите число от 1 до 9999: ";
  std::cin >> n;

  short int thousands, hundreds, tens, singles;
  singles = n % 10;
  tens = n % 100 / 10;
  hundreds = n % 1000 / 100;
  thousands = n / 1000;

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
    printCurrency(currency, 0);
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
      case 0: 
        printCurrency(currency, 0); 
        break;
      case 1: 
        if (currency == 4) {
          std::cout << "одна "; 
        } else {
          std::cout << "один ";
        }
        printCurrency(currency, 1); 
        break;
      case 2: 
        if (currency == 4) {
          std::cout << "две "; 
        } else {
          std::cout << "два ";
        }
        printCurrency(currency, 2); 
        break;
      case 3: 
        std::cout << "три "; 
        printCurrency(currency, 2); 
        break;
      case 4: 
        std::cout << "четыре "; 
        printCurrency(currency, 2); 
        break;
      case 5: 
        std::cout << "пять "; 
        printCurrency(currency, 0); 
        break;
      case 6: 
        std::cout << "шесть "; 
        printCurrency(currency, 0); 
        break;
      case 7: 
        std::cout << "семь "; 
        printCurrency(currency, 0); 
        break;
      case 8: 
        std::cout << "восемь "; 
        printCurrency(currency, 0); 
        break;
      case 9: 
        std::cout << "девять "; 
        printCurrency(currency, 0); 
        break;
    }
  }
  std::cout << std::endl;
  return 0;
}