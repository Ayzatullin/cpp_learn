#include <iostream>

// Задание 3. Коллекторы
// Сумма долга должна уменьшаться, если пользователь ввёл сумму, меньшую чем сумма долга. Если пользователь внёс большую сумму, чем требуется для погашения, выведите сообщение о том, какой у него остаток на счету после такой операции.
// При полной выплате долга необходимо учитывать остаток на счету, если он имеется.

int main() { 

  int debt;
  std::string name;


  std::cout << "Please enter you NAME and DEBT amount: \n";
  std::cin >> name >> debt;

  if (debt > 0) {

    do {
      int currentPaymant;

      std::cout << "Please made you current paymant... \n";
      std::cin >> currentPaymant;
      debt -= currentPaymant;
    } while (debt > 0);

    debt *= -1;
    std::cout << "BALANCE: " << debt << "\n";
  }
  else {
    std::cout << "ERROR: Incorrect debt amount! \n";
  }
} 
