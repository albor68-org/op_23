#include "functions.h"
#include <catch2/catch.hpp>
#include <math.h>

//TEST_CASE("Сумма") {
//
  //  CHECK(sum(1,2) == 3);
    //CHECK(sum(-1, -2) == -3);
    //CHECK(sum(0, 10) == 10);
//}
TEST_CASE("Площадь (случай успешной работы функции)") {
    CHECK(area(2, 2) == 4);
    CHECK(area(6, 3) == 18);

}
TEST_CASE("Площадь (случай неуспешной работы функции)") {
    CHECK_THROWS(area(-3, 2));
    CHECK_THROWS(area(40, -2));
    CHECK_THROWS(area(-2, -2));
}

