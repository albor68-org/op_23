#include <iostream>
#include "functions.h"

int max(int i1, int i2)
{
    if (i1 > i2) return i1;
    return i2;
}

int sum(int a, int b)
{
    return a + b;
}

int screan_area (int height, int width )
{
    if (!((height > 0) && (width > 0)))
    {
        throw screan_area_error();
    }
    return height * width;
}

/*
int contrast(std::vector<int> v) 
{

vector<int> myVector [5]

int max_v = myVector[0];

    for(int i = 0; i < 5; ++i)
    {
        if(myVector[i] > max_v)
        {
            max_v = myVector[i];
        }
    }

int min_v = v[0];

    for(int i = 0; i < 5; ++i)
    {
        if(myVector[i] < min_v)
        {
            min_v = myVector[i];
        }
    }

return max_v - min_v;

}
*/