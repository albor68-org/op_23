#include  "functions.h"
#include "catch2/catch.hpp"

TEST_CASE(){

    CHECK(max(1, 2) == 2);
    CHECK(max(-1,-2) == -1);
    CHECK(max(100, 200) == 200);
    CHECK(max(-1, 2) == 2);
    CHECK(max(0,-2) == 0);
    CHECK(max(0, 1) == 1);

}