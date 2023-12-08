#include "functions.h"

int max(int i1, int i2) { // Наибольшее число

    if (i1 > i2) return i1;

    return i2;
}

int sum(int n1, int n2) { // Сумма двух чисел

    return n1+n2; 
}

int area(int p1, int p2){ // Площадь прямоугольника

return p1 * p2;
}

int area1(int w, int h){ // Проверка что площадь не нулевая
    if (!((w > 0) && (h > 0))) throw Area_error();

    return w * h;
}