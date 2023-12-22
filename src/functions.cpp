#include <iostream>
#include "functions.h"
#include <algorithm>
int max(int i1, int i2){
    if (i1>i2) return i1;
    return i2;
}

int sum(int s1, int s2){
    return s1+s2;
}

int square(int sq1, int sq2){
    if (!((sq1>0) && (sq2>0))) throw Area_Error();
    return sq1*sq2;
}

int contrast(std::vector<int> v) {
    auto[min, max] = std::minmax_element(begin(v), end(v));
    return *max-*min;
}