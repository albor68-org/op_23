#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE(){

    CHECK(max(1,2)==2);
    CHECK(max(-1,-2)==-1);
    CHECK(max(-2,2)==2);
    CHECK(max(10,0)==10);

    CHECK(add(0,5)==5);
    CHECK(add(-5,0)== -5);
    CHECK(square(4,2)==8);
}