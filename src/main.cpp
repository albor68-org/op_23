#include "functions.h"
#include <iostream>

int main() {
    int triangle_height{100};
    int triangle_lenght{20};

    int square_height{100};
    int square_lenght{200};

    int i1{10};
    int i2{1000};

    std::cout << "Наибольшее число:" << std::endl;
    std::cout << max(10, 11) << std::endl;
    std::cout << "Сложение чисел:" << std::endl;
    std::cout << sum(i1,i2) << std::endl;
    std::cout << "Площадь треугольника:" << std::endl;
    std::cout << triangle_square(triangle_height, triangle_lenght) << std::endl;
    std::cout << "Площадь прямоугольника:" << std::endl;
    std::cout << square(square_height, square_lenght) << std::endl;

    return 0;
}