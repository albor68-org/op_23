#include "functions.h"
#include <iostream>

int main() try {
	
	int s = square(4, -2);


    /*
    std::string word;
    std::cin>>word;
    write_1000(word);
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
*/
    return 0;
}

catch (Area_error&){
    std::cerr << "Area: Нарушены предусловия!"
    << " Аргументы функции должны быть больше 0. ";
    return 1;

}
catch (...){
    return 2;
}