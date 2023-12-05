#include "functions.h"
#include <catch2/catch.hpp>
#include <math.h>

TEST_CASE() {

    CHECK(area(3, 2) == 6);
    CHECK(area(3, 0) == 0);
    CHECK(area(1, 6) == 6);
}
TEST_CASE() {

    CHECK(sum(1, 2) == 3);
    CHECK(sum(-1, -2) == -3);
    CHECK(sum(0, 10) == 10);
}