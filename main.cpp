#include <iostream>


int main () {
    std::cout << "Наибольшее число: " << std::max(1, 2) << std::endl;   

    return 0;    
}

int max (int i1, int i2) {

    if (i1 > i2) return i1;

    return i2;
    
}