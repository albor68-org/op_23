#include <math.h>
#include "functions.h"
double max (double i1, double i2){
    if (i1 < i2) return i2;
    return i1;
}
int sum (int s1, int s2){
    return s1+s2;
}
int area (int a, int b){
    if (!((a>0) && (b>0))) throw Area_error();
    return a*b;   
}