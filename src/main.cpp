#include "functions.h"
#include <iostream>
int main()  try {
        std::cout << "Наибольшее число" << max (1,2) << std::endl;
        std::cout << "Сумма = " << summ(2,5) <<std::endl;
        std::cout << "s = " << area(2,5) <<std::endl;
        int s = area (4, -2);
        return 0  ;  

}

catch(area_error&){
        std::cerr <<"Area : нарушены предусловия"
        << "Аргументы функции должны быть больше 0."
        <<std::endl;
        return 1;
}
catch(...){
        std::cerr <<"???: Я не виноват!!!"
        << "Что=то пошло не так, как задумывалось."
        <<std::endl;
        return 2;


}
