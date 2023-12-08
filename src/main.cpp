#include "functions.h"
#include <iostream>

int main ()try{
    
    int s = area(4, -2);

return 0;

}

catch (Area_error&){
    
    std:: cerr<< "area:  нарушены предусловия."<< std::endl
    << "Аргументы функции должны быть больше нуля"
    << std::endl;
    return 1;
}
catch(...){
    std::cerr<<"???: Я не виноват!"
    << "Что-то пошло не так, как задумывалось"
    << std::endl;
    return 2;
}


