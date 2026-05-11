#include <iostream>

// Задание 5. Координатные оси

int main() {

    for (int row = 0; row < 20; row ++){
        for (int col = 0; col < 50; col ++){

            if (row == 0 && col == 25){std::cout << "^";}
            else if (row == 10 && col == 49){std::cout << ">";}
            else if (row == 10 && col == 25){std::cout << "+";}
            else if (row == 10){std::cout << "-";}
            else if (col == 25){std::cout << "|";}
            else {std::cout << " ";}
        }
        std::cout << "\n";
    }


}