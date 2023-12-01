#include "functions.h"
#include <catch2/catch.hpp>
TEST_CASE() {
    CHECK(max(1,2)==2);
    CHECK(max(-1,-2)==-1);
    CHECK(max(0,10)==10);
    CHECK(max(2,-2)==2);
}

TEST_CASE() {
    CHECK(sum(6,5)==12);
    CHECK(sum(8,3)==11);
    CHECK(sum(3,4)==7);
    CHECK(sum(6,19)==25);
}