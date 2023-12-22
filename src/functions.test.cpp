#include "functions.h"
#include <catch2/catch.hpp>

//TEST_CASE("МАКСИМУМ") {
  //  CHECK(max(1, 2) == 2);
    //CHECK(max(-1, -2) == -1);
   // CHECK(max(0, 10) == 0);
   // CHECK(max(-2, 2) == 2);
//}

//TEST_CASE("СУММА") {
//CHECK(sum(2, 2) == 2);
//CHECK(sum(2, 2) == 5);
//CHECK(sum(0, 2) == 2);
//}

/*TEST_CASE("area true") {
    CHECK(area(1, 2) == 2);
    CHECK(area(4, 2) == 8);
    CHECK(area(3, 3) == 9);
}

TEST_CASE("area false") {
    CHECK_THROWS(area(1, -2));
    CHECK_THROWS(area(4, -2));
    CHECK_THROWS(area(-3, 0));
}*/

TEST_CASE("contrast") {
    CHECK(contrast({1, 2, 3, 4, 5}) == 4);
    CHECK(contrast({3, 10, 5, 7, 9}) == 7);
    CHECK(contrast({4, 8, 5}) == 4);
}