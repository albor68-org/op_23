#include "functions.h" 

#include <iostream> 

int main () try{

    std::cout << "Наибольшее число: " << max (1, 2) << std::endl;

    std::cout <<"Сумма: " <<CYMM (3, 5) << std::endl;

    std::cout <<"Площадь: " <<area (1, 10) << std::endl;

    int s = area(4, -2);

    return 0;
}
catch (area_error&){
 return 1;

}
catch(...){
  return 2;
  
}

