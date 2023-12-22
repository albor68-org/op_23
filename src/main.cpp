#include "functions.h"
#include <iostream>
#include <math.h>

//int main() {
//    std::cout << "Наибольшее число:" << max(4.2, 9.3) <<std::endl;
//    return 0;
//}
int main () try {
    int s = area(4, -2);
    return 0;
}
catch (Area_error&) {
    std::cerr << "area: Нарушены предусловия"
    << "Аргументы функции должны быть больше нуля"
    << std::endl;
    return 1;
}
catch (...) {
    std::cerr << "???: Я не виноват!"
    << "Что-то пошло пошло не так, как задумывалось"
    << std::endl;
    return 2;
}