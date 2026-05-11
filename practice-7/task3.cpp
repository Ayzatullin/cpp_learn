#include <iostream>

// Задание 3. Красный Марс

int main() {

    int width = 15;
    int lenght = 20;

    std::string command;
    int x = width/2;
    int y = lenght/2;

    std::cout << "Для выхода, введите 0.\n";

    do {
        std::cout << "Марсоход находится на позиции: (" << x << "; " << y << "), введите команду: \n";
        std::cin >> command;


        if (command != "a" && command != "d" && command != "w" && command != "s"  && command != "0"){
            std::cout << "Допустимые команды a,d,w,s. Для выхода нажмите 0. \n";
        }

        if (command == "0"){break;}


        if (command == "a" && x > 0){
            x --;
        }
        else if (command == "d" && x < width){
            x ++;
        }
        else if(command == "s" && y > 0){
            y --;
        }
        else if(command == "w" && y < lenght){
            y ++;
        }

    } while (true);
}
