#include <iostream>

// Задание 2. Слишком большие числа
// Напишите программу, которая считала бы для него, сколько цифр (знаков) во вводимом числе.

int main() { 

  int number;
  int count = 0;

  std::cout << "Введите число:  \n";
  std::cin >> number;

  do {
    number /= 10;
    count ++;
  } while(number != 0);
    
  std::cout << "Цифр в числе: " << count <<" \n";
} 