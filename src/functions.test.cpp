#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE() {
    CHECK(max(1, 2)==2);
    CHECK(max(-1,- 2)==-1);
    CHECK(max(0, 10)==10);
    CHECK(max(-2, 2)==2);
}
TEST_CASE(){
    CHECK(sum(2, 2)==4);
    CHECK(sum(-2, 2)==0);
}
TEST_CASE("area norm"){
    CHECK(square(3, 4)==12);
    CHECK(square(10, 1)==10);
}
TEST_CASE("area abnormal"){
    CHECK_THROWS(square(-3, 4));
    CHECK_THROWS(square(10, -1));
    CHECK_THROWS(square(-10, -1));
    CHECK_THROWS(square(0, 5));
}