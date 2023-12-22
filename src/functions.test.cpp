#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE("max"){
    
    CHECK(max(1, 2) == 2);
    CHECK(max(-1, -2) == -1);
    CHECK(max(0, 10) == 10);
    CHECK(max(-2, 2) == 2);
}

TEST_CASE("summ"){
    CHECK(summ(-2, 2) == 0);
    CHECK(summ(-20, 2) == -18);
}

TEST_CASE("area norm"){
    CHECK(area(6, 2) == 12);
    CHECK(area(10, 15) == 150);
}

TEST_CASE("area ne norm"){
    CHECK_THROWS(area(6, -2));
    CHECK_THROWS(area(-10, -15));
    CHECK_THROWS(area(-10, 15));
    CHECK_THROWS(area(-10, 0));
    CHECK_THROWS(area(0, 15));
}
TEST_CASE("mas"){
    CHECK_THROWS(contrast({10, 12, 13, 14}) == -20);
    
}