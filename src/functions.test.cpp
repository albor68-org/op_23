#include "functions.h"
#include <catch2/catch.hpp>
#include <math.h>

TEST_CASE("Сумма") {

    CHECK(sum(1,2) == 3);
    CHECK(sum(-1, -2) == -3);
    CHECK(sum(0, 10) == 10);
}
TEST_CASE("Площадь (случай успешной работы функции)") {
    CHECK(area(2, 2) == 4);
    CHECK(area(6, 2) == 12);

}
TEST_CASE("Площадь (случай неуспешной работы функции)") {
    CHECK(area(2, 0) == 0);
    CHECK(area(-2, 2) == 0);
    CHECK(area(-2, -2) == 0);
}
