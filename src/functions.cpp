#include "functions.h"

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