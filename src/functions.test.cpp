#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE("max"){
    CHECK(max(1,2) == 2);
    CHECK(max(-1,-2) == -1);
    CHECK(max(0,10) == 10);
    CHECK(max(-2,2) == 2);
}
TEST_CASE("Cумма"){
    CHECK(summ(-2,2) == 0);
    CHECK(summ(1,2) == 3);
}

TEST_CASE("area norm"){
    CHECK(area(1,2) == 2);
    CHECK(area(4,5) == 20);
}

TEST_CASE("area ne norm"){
    CHECK_THROWS(area(1,-2) == -2);
    CHECK_THROWS(area(4,-5) == -20);
}