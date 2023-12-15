#include "function.h"
#include <vector>

int max(int i1, int i2) {
    if(i1>i2) return i1;
    return i2; 

}
int summ( int i3, int i4)
{
    return i3+i4;

}

int square(int height, int width)
{
    if (!((width>0)&&(height>0))) throw Area_error();
}

int gcd (int a, int b)
{
    while (a!=b){
        if(a>b) a-=b;
        else b-=a;

    }
}
 int contrast(std::vector<int> v)
 {
    std::vector<int> checkV = v;

    int tempMax = checkV[0];
    int maxV = 0;

    int tempMin = checkV[0];
    int minV = 0 ;

    for (int elMax : checkV){
        if (elMax >= tempMax){
            tempMax = elMax;
            maxV = elMax;
        }

    }
    for (int elMin : checkV){
        if(elMin<= tempMin){
            tempMin = elMin;
            minV = elMin;
        }
    }
    return (maxV - minV);
 
 }