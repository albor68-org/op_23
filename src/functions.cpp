#include "functions.h"
#include <vector>
double max (double i1, double i2){
    if (i1 < i2) return i2;
    return i1;
}
int sum (int s1, int s2){
    return s1+s2;
}
int area (int a, int b){
    if ((a>0) && (b>0)) return a*b;
    else throw Area_error();
}
int contrast(std::vector<int> v) {
    int max = v[0];
    int min = v[0];
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > max) max = v[i];
        if (v[i] < min) min = v[i];
    }
    return (max - min);
    }