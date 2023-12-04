#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE(){    // ПРОВЕРКА 
    
    CHECK(max(1,2) == 2);    
    CHECK(max(-1,-2) == -1);
    CHECK(max(0,10) == 10);
    CHECK(max(-2,2) == 2);

    CHECK(add(0,5) == 5);
    CHECK(add(0,-5) == -5);
    CHECK(square(4,2) == 8);

}

