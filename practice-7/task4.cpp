#include <iostream>

// Задание 4. Рамка

int main() {
    int width, height;

    std::cout << "Введите ширину и высоту \n";
    std::cin >> width >> height;

    for (int w = 0; w < width; w ++){
        for (int h = 0; h <  height; h ++){

            if (h == 0 || h == height-1){
                std::cout << "|";}
            else if (w == 0 || w == width-1){
                std::cout << "-";}
            else {
                std::cout << " ";}
                
        }
        std::cout << "\n";
    }
}
