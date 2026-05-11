#include <iostream>

// Задание 1. Запасы продовольствия

int main() {
    int food = 100;
    int spendMonth = 4;
    int monthCount = 0;

    std::cout << "Всего гречки было на начало подсчёта: " << food << " кг \n";

    for (food; food > 0;) {
        monthCount++;
        food -= spendMonth;
        std::cout << "После "<< monthCount <<" месяца у вас в запасе останется "<< food <<" кг гречки \n";
    }
}
