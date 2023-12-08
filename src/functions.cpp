#include "functions.h"
int max( int i1, int i2){
    if (i1>i2) return i1;

    return i2;

}

int add (int a, int b){
    int c=a+b;
    return c;
}
int square (int x, int y){
    int s =x*y;
   
            return s;
        }

int area (int w, int h){
    if (!((w>0) && (h>0))) throw Area_error();

    return w*h;
        }
