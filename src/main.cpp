#include "functions.h" 

#include <iostream> 

int main () {
    std::cout << "наибольшее число: " << max(1, 7) << std::endl;
    std::cout << "сумма: " << sum(9, 2) << std::endl;
    std::cout << "площадь: " << square(6, 3) << std::endl;
    return 0;
}
