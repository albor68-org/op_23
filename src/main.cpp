#include "functions.h"

#include <iostream>

int main () try {
    int s = area(4, -2);

    return 0;
}
catch (Area_error&) {
    std::cerr << "area: нарушены предусловия" 
    <<" аргументы функции должны быть больше 0"
    <<std::endl;
    return 1;
}
catch (...) {
    std::cerr<<"Что-то пошло не так"
    <<" Это фиаско, братан"
    <<std::endl;
    return 2;
}