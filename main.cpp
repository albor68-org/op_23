#include <iostream>

double max (double i1 , double i2);

int main (){


std::cout << "Наибольшее число: " << max(5.8 , 3)<< std::endl;


    return 0;


}


double max (double i1 , double i2){

    if (i1 > i2) return i1;

    return i2;
}