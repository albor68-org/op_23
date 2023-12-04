#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE() {

    CHECK(max(1, 2) == 2);
    CHECK(max(-1, -2) == -1);
    CHECK(max(0, 10) == 10);
    CHECK(max(-2, 2) == 2);
}

TEST_CASE() {

    CHECK(sum(1, 1) == 2);
    CHECK(sum(2, 2) == 4);
    CHECK(sum(8, 5) == 13);
    CHECK(sum(99, 1) == 100);
}

TEST_CASE() {

    CHECK(area(1, 1) == 1);
    CHECK(area(5, 5) == 25);
    CHECK(area(30, 8) == 240);
    CHECK(area(25, 64) == 1600);
}