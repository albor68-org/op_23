#include "functions.h" 

#include <iostream> 

int main () try {
    int s = area (4, -2);
    return 0;
}
catch (Area_error&) {
    std::cerr << "area: нарушены предусловия," 
    << " аргументы функции должны быть больше нуля" 
    << std::endl;
    return 1;
}
catch (...) {
    std::cerr << "что-то пошло не так... попробуй еще раз!" << std::endl;
    return 2;
}