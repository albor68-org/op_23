#include <iostream>

int max(int i1, int i2)
{
    if (i1 > i2) return i1;
    return i2;
}

int sum(int a, int b)
{
    return a + b;
}

int screan_area(int height, int width)
{
    if ((height <= 0) || (width <= 0))
    {
    std::cout << "ERROR-------ERROR------ERROR "<< std::endl;
    }
    return (height * width);
}



    class Area_error {};

    int screan_area (int height, int width )
    {
        if (!((height > 0) && (width > 0))) trow Area_error;
        return height * width;
    }