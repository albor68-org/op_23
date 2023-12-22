#include <iostream>
#include "functions.h"







int main() try {
   // std:: cout << "\tBIGGEST NUMBER:" << max(1,3) << std :: endl; 
   // std:: cout << "\tADDITION: " << add(7,3) << std :: endl;
   // std:: cout << "\tRECTABLE'S SQUARE (first method): " << square1(-2,9) << std :: endl; 
   // std:: cout << "\tRECTABLE'S SQUARE (second method): " << square2(-2,9) << std :: endl;  
    int s = square3(-2,9);
    std:: cout << s;


    return 0;
}

catch (Square_error&){
    
    std::cerr << "square3:  нарушены предусловия: "
    << "the functions parametres must be MORE then 0"
    << std:: endl;
    return 1; 
}
catch(...){
     std::cerr << "???:  UNKNOWN ERROR\n";

    return 2;
}