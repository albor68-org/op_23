#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE(){
    
    CHECK(max(1, 2) == 2);
    CHECK(max(-1, -2) == -1);
    CHECK(max(0, 10) == 10);
    CHECK(max(-2, 2) == 2);
    TEST_CASE(){
    CHECK(summ(-2, 2) == 0);
    CHECK(summ(-20, 2) == -18);
    }
    TEST_CASE(){
    CHECK(area(6, 2) == 12);

    }

}