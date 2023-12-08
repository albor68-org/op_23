#include "functions.h"

#include <iostream>

int main () try {
/*
// Наибольшее число
    std::cout << "Наибольшее число: " << max(1,2) << std::endl;

// Сумма двух чисел
    int n1, n2;
    std::cout << "Введите 2 числа для их суммы:";
    std::cin >> n1 >> n2;
    std::cout << "Сумма двух чисел:" << sum(n1, n2) << std::endl;

// Площадь прямоугольника    
    std::cout << "Введите 2 числа для вычисления площади:";
    int p1, p2;
    std::cin >> p1 >> p2;
    std::cout << "Площадь прямоугольника:" << area(p1, p2) << std::endl;
*/
    int s = area1(4, -2);

    return 0;
}

catch (Area_error&) {   // Поимка ошибки нулевой площади
    std::cerr << "area1: нарушены предусловия! " 
    << "Аргументы функции должны быть больше 0." << std::endl;

    return 1;
}

catch (...) {   // Поимка других ошибок 
    std::cerr << "???: Ничего не понимаю. " 
    << "Что-то пошло не так." << std::endl;

    return 2;
}