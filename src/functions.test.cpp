#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE() {
    CHECK(max(1, 2) == 2);
    CHECK(max(-1, -2) == -1);
    CHECK(max(0, 10) == 0);
    CHECK(max(-2, 2) == 2);
    
    CHECK(sum(2, 2) == 2);
    CHECK(sum(2.2, 2) == 5.5);
    CHECK(sum(0, 2) == 2);

    CHECK(square(-1, 2) == 2);
    CHECK(square(4, 2) == 8);
    CHECK(square(3, -3) == 9);
}