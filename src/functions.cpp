#include "functions.h"
#include <vector>

int max (int i1, int i2) {
    if (i1 > i2) return i1;
    return i2;
}

int sum (int a, int b) {
    return a + b;
}

int area (int width, int heigh) {
    if (!((width > 0) && (heigh > 0))) throw Area_error();
    return width * heigh;
}

int contrast(std::vector<int> V) {

    int tempMax = V[0];
    int maxV = 0;

    int tempMin = V[0];
    int minV = 0;

    for (int elMax : V) {

        if (elMax >= tempMax) {
            tempMax = elMax;
            maxV = elMax; 
        }
    }

    for (int elMin : V) {
        if (elMin <= tempMin) {
            tempMin = elMin;
            minV = elMin;
        }
    }

    return (maxV - minV);

}