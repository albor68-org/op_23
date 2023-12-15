#include "functions.h"

#include <iostream>

/*int main() 
{   
    int i1, i2;
    std::cout << "Введите числа: " << std::endl;
    std::cin >> i1;
    std::cin >> i2;
    std::cout << "Наибольшее число: " << max(i1,i2) << std::endl;

    int a, b;
    std::cout << "Введите числа: " << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cout << "Сумма чисел: " << sum(a, b) << std::endl;

    int height, width;
    std::cout << "Введите числа: " << std::endl;
    std::cin >> height;
    std::cin >> width;
    std::cout << "Площадь прямоугольника: " << screan_area(height, width) << std::endl;
    
    return 0;
}
    */

int main()
    try{

    int s = screan_area(-100 , 200);
    return 0;
    }

    catch(screan_area_error&)
    {
        std::cerr << "screan_area: нарушены предусловия "
        << " исправьте ошибку "
        << std:: endl;
        return 1;
    }

