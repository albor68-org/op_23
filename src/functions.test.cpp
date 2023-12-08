#include "functions.h"
#include <catch2/catch.hpp>
#include <math.h>

TEST_CASE("Сумма") {

    CHECK(sum(1, 2) == 3);
    CHECK(sum(-1, -2) == -3);
    CHECK(sum(0, 10) == 10);
}
TEST_CASE("Площадь") {

    CHECK(area(3, 2) == 6);
    CHECK(area(2, 33) == 66);
}
TEST_CASE("Площадь (Ошибка в данных)") {

    CHECK(area(0, 3) == 0);
    CHECK(area(-2, 7) == 0);
    CHECK(area(-1, -3) == 0);
}