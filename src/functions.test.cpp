#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE(){

    CHECK(max(1, 2) == 2);
    CHECK(max(-1, -2) == -1);
    CHECK(max(0, 10) == 10);
    CHECK(max(-2, 2) == 2);

    CHECK(sum(1,1) == 2);
    CHECK(sum(-1,1) == 0);
    CHECK(sum(-1,-1) == -2);

    CHECK(square(2,2) == 4);
}