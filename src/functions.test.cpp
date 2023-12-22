#include "functions.h"
#include <catch2/catch.hpp>
TEST_CASE() {
    CHECK(max(1,2)==2);
    CHECK(max(-1,-2)==-1);
    CHECK(max(0,10)==10);
    CHECK(max(2,-2)==2);
}

TEST_CASE() {
    CHECK(sum(6,5)==11);
    CHECK(sum(8,3)==11);
    CHECK(sum(3,4)==7);
    CHECK(sum(6,19)==25);
}

TEST_CASE() {
    CHECK(squ(3,4)==12);
    CHECK(squ(7,8)==56);
    CHECK(squ(1,2)==2);
    CHECK(squ(10,20)==200);
}

TEST_CASE("area norm") {

    CHECK (area(3,2) == 6);
    CHECK(area(40,4) == 160);

}

TEST_CASE("area abnormal") {
    CHECK_THROWS(area(-3,2));
    CHECK_THROWS(area(40,-4));
    CHECK_THROWS(area(-4,-10));
}

TEST_CASE("contrast test") {

    CHECK(contrast({5, 2, 3, 6, 8, 29})==27);
    CHECK(contrast({4, 20, 7, 8,})==16);
    CHECK(contrast({26, 40, 3, 14})==37);
}