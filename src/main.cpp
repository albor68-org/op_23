#include "functions.h"

#include <iostream>

int main () {
    std::cout << "Наибольшее число: " << max(1,2) << std::endl;
    
    int n1, n2;
    std::cout << "Введите 2 числа для их суммы:";
    std::cin >> n1 >> n2;
    std::cout << "Сумма двух чисел:" << sum(n1, n2) << std::endl;
    
    std::cout << "Введите 2 числа для вычисления площади:";
    int p1, p2;
    std::cin >> p1 >> p2;
    std::cout << "Площадь прямоугольника:" << area(p1, p2) << std::endl;

    return 0;
}