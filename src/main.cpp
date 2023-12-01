#include <iostream>
#include "functions.h"
#include <string>


int main() {

    std::cout << "Biggest number: " << max(1,4) << std::endl;

    if (square(2,1) >= 0) {
        std::cout << "Square: " << square(2,1) << std::endl;
    } else {
        std::cout<< "Square cannot be < 0" << std::endl;
    }

    std::cout << "Addition: " << sum(-2,2) << std::endl;

    return 0;

}