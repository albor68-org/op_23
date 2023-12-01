#include "functions.h"
#include <catch2/catch.hpp>

//тест для максимума
TEST_CASE() {
    CHECK(max(1, 2) == 2);
    CHECK(max(-1, -2) == -1);
    CHECK(max(0, 10) == 10);
    CHECK(max(-2, 2) == 2);
}

//тест для суммы
TEST_CASE() {
    CHECK(sum(5, 4) == 9);
    CHECK(sum(-2, 2) == 0);
    CHECK(sum(-5, -4) == -9);
    CHECK(sum(0, 3) == 3);
}