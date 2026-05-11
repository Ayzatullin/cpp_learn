#include <iostream>

// Задание 6. Важные объявления

int main() {

    int start;
    int header = 0;
    int markCount = 1;

    do {
        std::cout << "Введите длину колонтитула \n";
        std::cin >> header;

        std::cout << "Введите кол-во восклицательных знаков \n";
        std::cin >> markCount;

        if (header < markCount){
            std::cout << "Кол-во восклицательных знаков НЕ должно быть больше длины колонтитула\n";
        }
    } while(header < markCount);


    if (header % 2 == 0 || (header % 2 != 0 && markCount % 2 != 0)) {start = header/2 - markCount/2;}
    else {start = header/2 - markCount/2 + 1;}


    for (int counter = 0; counter < header; counter++){
        
        if (counter >= start && markCount > 0) {
            std::cout << "!";
            markCount --;
        }
        else{std::cout << "~";}
    }

}