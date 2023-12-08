#include "function.h"

#include <iostream>



int main () try {
    int s=square(4,-2);
    






    std::cout << "наибольшее число: " <<max(1,2) << std::endl;
     std::cout << "summa: " <<summ(80,10) <<std::endl;
     std::cout << "square: " <<square(2,5) <<std::endl;
    
    return 0;

}

catch(Area_error&){
    return 1; 
}

catch(...){
    return 2;
}
