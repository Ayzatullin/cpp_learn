#include <iostream>

// Задание 6. Вклады
// По данным числам X, Y, P определяет, сколько лет пройдёт, прежде чем сумма достигнет значения Y

int main() {

    int startAmount;
    int stopAmount;
    int percent;
    int years = 0;

    do {
        std::cout << "Введите размер вклада: \n";
        std::cin >> startAmount;

        std::cout << "Введите процентную ставку: \n";
        std::cin >> percent;

        std::cout << "Введите желаемую сумму: \n";
        std::cin >> stopAmount;
    } while (startAmount < 1 && percent < 1 && percent > 101 && stopAmount < 1);

    while(startAmount < stopAmount) {
        int persCalc = startAmount * percent / 100;

        startAmount += persCalc;
        years ++;
    }

    std::cout << "Придётся подождать: " << years << " лет \n";
}
 