#include "functions.h"

#include <iostream>



int main () try  {

 std::cout << "Наибольшое число " << max (1, 2) << std::endl; 

 std::cout << "сумма = " << summ (2, 5) << std::endl; 

 std::cout << "s = " << area (2, 5) << std::endl;

int s = area(4, -2);

  return 0;

}
catch (area_error&){
     return 1;
}
catch(...){
    return 2;
}