#include <iostream>
#include "functions.h"

int main () {
    std::cout << "Наибольшее число: " << std::max(1, 2) << std::endl;

    std::cout << "Сумма: " << sum(5, 4) << std::endl;

    std::cout << "Площадь прямоугольника экранной формы: " << rectArea(30, 40) << std::endl;

    return 0;    
}

