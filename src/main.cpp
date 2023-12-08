#include "functions.h"
#include <iostream>


int main () try {
    int s = square(4, -5);
    return 0;
}

catch (Area_Error&){
    std::cerr<<"area: нарушены предусловия "
    <<"аргументы функции должны быть больше 0"
    <<std::endl;
    return 1;
}

catch (...){
    std::cerr<<"ой ой"
    <<"что-то пошло не так"
    <<std::endl;
    return 2;
}
