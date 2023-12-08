#include <iostream>
#include "functions.h"


int main () try {

    std::cout << "Наибольшее число: " << max(1, 2) << std::endl;

    std::cout << "Сумма: " << sum(5, 4) << std::endl;

    std::cout << "Площадь прямоугольника экранной формы: " << rectArea(4, 5) << std::endl;
    
    return 0;  

}

catch (Area_error&) {

    std::cerr << "[Ошибка в задании длины и ширины прямоугольника экранной формы]" << std::endl;

    return 1;

}

catch (...) {

    std::cerr << "[Ошибка]" << std::endl;

    return 2;

}

