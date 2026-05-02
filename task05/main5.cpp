#include <iostream>

// Задание 5. Числа Фибоначчи
// 1, 1, 2, 3, 5, 8, 13

int main() {

    int num1 = 1;
    int num2 = 1;

    int orderNumber;
    std::cout << "Введите номер последовательности:  \n";
    std::cin >> orderNumber;

    while (orderNumber > 2) {
        num2 += num1;
        num1 = num2 - num1;
        orderNumber --;
    };

    std::cout << "Число в последовательности: " << num2 << " \n";
}
