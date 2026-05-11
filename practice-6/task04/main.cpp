#include <iostream>

// Задание 4. Счастливый билетик

int main(){

    int number;
    int count;
    bool isHappy = false;

    int part1 = 0;
    int part2 = 0;

    do {
        int tempNumber;
        count = 0;
        
        std::cout << "Введите номер билета: \n";
        std::cin >> number;
        
        tempNumber = number;
        
        do {
            tempNumber /= 10;
            count ++;
        } while(tempNumber != 0);

    } while (count != 6);

    do {
        if (count > 3) {
            part1 += number % 10;
        }
        else {
            part2 += number % 10;
        }
        number /= 10;
        count --;
    } while (count != 0);

    isHappy = part1 == part2;

    if (isHappy) {
        std::cout << "Билет счастливый! \n";
    }
    else {
        std::cout << "Повезёт в следующий раз! \n";
    }
}

