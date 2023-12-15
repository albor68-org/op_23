#include "functions.h"
#include <vector>

int max (int i1, int i2) {

    if (i1 > i2) return i1;

    return i2;
    
}

int sum (int i1, int i2) {
    int i3 = i1 + i2;
    return i3;
}

int rectArea (int height, int width) {
    if (!((height > 0) && (width > 0))) throw Area_error();

    return height*width;
}

int contrast (std::vector<int> v) {

    std::vector<int> checkV = v;

    int tempMax = checkV[0];
    int maxV = 0;

    int tempMin = checkV[0];
    int minV = 0;

    for (int elMax : checkV) {

        if (elMax >= tempMax) {
            tempMax = elMax;
            maxV = elMax;
        }
        
    }

    for (int elMin : checkV) {

        if (elMin <= tempMin) {
            tempMin = elMin;
            minV = elMin;
        }
      
    }

    return (maxV - minV);

}