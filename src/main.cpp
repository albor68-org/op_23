#include "functions.h"

#include <iostream>

int main () {

    std::cout << "Наибольшее число: "<< max(1,2) << std::endl;
    std::cout << "Сумма двух чисел: "<<sum(7,21) << std::endl;
    std::cout << "Площадь прямоугольника: "<< squ(6,5) << std::endl;

    return 0;
}
