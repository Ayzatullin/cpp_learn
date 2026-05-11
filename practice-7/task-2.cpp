#include <iostream>

// Задание 2. Кофемашина

int main() {

    int water;
    int milk;

    bool isMakeAmericano;
    bool isMakeLatte;

    int americanoCount = 0;
    int latteCount = 0;

    do {
        isMakeAmericano = false;
        isMakeLatte = false;

        std::cout << "Введите количество воды в мл: \n";
        std::cin >> water;
        std::cout << "Введите количество молока в мл: \n";
        std::cin >> milk;

        if (water >= 300){isMakeAmericano = true;}
        if (water >= 30 && milk >= 270){isMakeLatte = true;}
    } while (!isMakeAmericano && !isMakeLatte);


    while(isMakeAmericano || isMakeLatte){ 
        
        int drinkType;
        do {
            drinkType = 0;
            std::cout << "Выберите напиток (1 — американо, 2 — латте): \n";
            std::cin >> drinkType;
        } while (drinkType < 1 && drinkType > 3);


        if (drinkType == 1 && isMakeAmericano){
            americanoCount ++;
            std::cout << "Ваш напиток готов\n";
            water -= 300;} 
        else if (drinkType == 1){
            std::cout << "Не хватает воды\n";}


        if (drinkType == 2 && isMakeLatte){
            latteCount ++;
            std::cout << "Ваш напиток готов.\n";
            water -= 30;
            milk -= 270;}
        else if (drinkType == 2){
            std::cout << "Не хватает молока\n";}
        

        if (water < 300){isMakeAmericano = false;}
        if (water < 30 || milk < 270){isMakeLatte = false;}
    }

    std::cout << "***Отчёт***  \n";
    std::cout << "Ингредиентов осталось: \n";       
    std::cout << "Вода: " << water << " мл \n";       
    std::cout << "Молоко: " << milk << " мл \n";      
    std::cout << "Кружек американо приготовлено: " << americanoCount << " \n";       
    std::cout << "Кружек латте приготовлено: " << latteCount << " \n";    
}
