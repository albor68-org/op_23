#include <iostream>
#include "functions.h"

int main () try {

int s = square(4 , -2)  ;

    return 0;
}
catch (Area_error&) {
    std::cerr << "square: нарушены предусловия!"
    << "Аргументы функции должны быть больше 0"
    <<std::endl;
    return 1;
}
catch (...){
    std::cerr << "???: Я не виноват!"
    << "Что-то пошло не так, как задумывалось"
    << std::endl;
    return 2;
}

// Если я буду оставлять активным сеанс работы с компьютером, то с моими файлами могут начаться интересные приключения
