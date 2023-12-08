#include "functions.h" 

#include <iostream> 

int main () try {
    int s = area (4, -2);
    return 0;
}
catch (Area_error&) {
    return 1;
}
catch (...) {
    return 2;
}