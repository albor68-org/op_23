#include "functions.h"

#include <iostream>



int main () try  {

std::cout << "Наибольшое число " << max (1, 2) << std::endl; 

 std::cout << "сумма = " << summ (2, 5) << std::endl; 

 std::cout << "s = " << area (4, -2) << std::endl;

int s = area(4, -2);

  return 0;

}
catch (area_error&){
  std::cerr << "area: нарушены предусловия" 
  << " аргумены функции должны быть больше 0"
  << std::endl;
     return 1;
}
catch(...){
  std::cerr << "нет слов, одни эмоции" 
  << " что-то пошло не так"
  << std::endl;
    return 2;
}