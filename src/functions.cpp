#include "functions.h"

int max (int i1, int i2) {
    
    if (i1>i2) return i1;
   
    return i2;

}

int sum (int a, int b) {
    
    return a+b;
}

int squ (int a1, int b1) {

    return a1*b1;
}

int area(int w, int h) {
    if(!((w>0)&&(h>0))) throw Area_error();

    return w*h;
}

int contrast(std::vector <int> v) {

int tempMax = v [0];
int maxV = 0;

int tempMin = v [0];
int minV = 0;

for(int elMax : v) {

    if(elMax>=tempMax) {
        tempMax=elMax;
        maxV = elMax;
    }

}

for (int elMin : v) {
    if(elMin <= tempMin) {
        tempMin = elMin;
        minV = elMin;
    }

}

    return(maxV-minV);

}