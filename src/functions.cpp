#include <cstdio>
#include <iostream>
#include "functions.h"
using namespace std;
void printEr(){
    printf ("ERROR");
}


int max (int i1, int i2){
    if (i1 > i2) return i1;

    return i2;
}

int add (int a, int b){
     int c = a + b;
     return c;
}

int square1 (int x1, int y1){ // функция без предусловия
    int s1 = x1*y1;
    if (s1 < 0){
           printEr();
           
    }
    return s1;
}

int square2 (int x2, int y2){ // функция с предусловием 
    if((x2 > 0) && (y2 >0)){
        int s2 = x2*y2;      
        return s2;
    }                   // если один из параметров отрицат. или ноль 
        return 0;             // тогда возвращает ноль
    
}

int square3 (int w, int h){
    if(((w < 0) || (h < 0))){
        throw Square_error();
    }
        return (w*h);
    
}
