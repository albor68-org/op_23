#include "functions.h"

#include <iostream>


int main () {

     std::cout << "Наибольшее число: " << max(max(1, 2), max(3, 4)) << std::endl;
     
     return 0;

}
