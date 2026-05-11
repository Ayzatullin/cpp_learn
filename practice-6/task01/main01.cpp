#include <iostream> 

// Задание 1. Кукушка
// В начале работы она спрашивает, который час, а затем нужное количество раз пишет «Ку-ку!»

int main() { 
  int hour;

  do {
    std::cout << "Который час? \n";
    std::cin >> hour;
  } while (hour < 1 || hour > 12);

  while (hour != 0){
    std::cout << "Ку-ку! \n";
    hour --;
  }    
}
