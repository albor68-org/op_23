#include <iostream>
#include "functions.h"
#include <math.h>

//int main() {
//    std::cout << "Наибольшее число:" << max(5.8, 3.1) << std::endl;
//    return 0;
//}
int main() try{
    int s = area(4, -24);
    return 0;
}

//catch(Area_error&){
//    std::cerr << "area: нарушены предусловия!"
//    << " Аргументы функции дожны быть больше 0."
//    << std::endl;

//    return 1;
//}
catch(...){
    std::cerr << "???: я не виноват!"
    << " Что-то пошло не так, как задумывалось"
    << std::endl;

    return 2;
}