#include "functions.h"

#include <iostream>

int main () try {

    int s=square(4, -5);
return 0;

}
catch (Area_error&) {
    std::cerr<<"area: нарушены преусловия!"
    << "Аргументы функции должны быть больше 0."
    << std::endl;
    return 1;
}
catch (...) {
    std::cerr<<"???:Я не виноват!"
    <<"Что-то пошло не так, как задумывалось."   
    << std::endl;
    return 2;
}


