#include "functions.h"
#include <iostream>

int main() {
    /*
    int triangle_height;
    int triangle_lenght;

    int square_height;
    int square_lenght;
    */
    int i1;
    int i2;
    std::cout << "Запишите 2 числа, для поиска наибольшего" << std::endl;
    std::cin >> i1;
    std::cin >> i2;
    std::cout << "Наибольшее число:" << std::endl;
    std::cout << max(i1, i2) << std::endl;
    std::cout << "Запишите 2 числа, которые нужно сложить" << std::endl;
    std::cin >> i1;
    std::cin >> i2;
    std::cout << "Сложение чисел:" << std::endl;
    std::cout << sum(i1,i2) << std::endl;
    std::cout << "Запишите 2 числа, высоту и длину прямоугольного треугольника" << std::endl;
    std::cin >> i1;
    std::cin >> i2;
    std::cout << "Площадь треугольника:" << std::endl;
    std::cout << triangle_square(i1, i2) << std::endl;
    std::cout << "Запишите 2 числа, высоту и ширину прямоугольник" << std::endl;
    std::cin >> i1;
    std::cin >> i2;
    std::cout << "Площадь прямоугольника:" << std::endl;
    std::cout << square(i1, i2) << std::endl;

    return 0;
}