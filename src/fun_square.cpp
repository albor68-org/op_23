#include "functions.h"

double square(double d, double f){

    if (!((d > 0) && (f > 0))) throw Area_error();

    else { return d * f; }

}
