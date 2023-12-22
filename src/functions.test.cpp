#include  "functions.h"
#include "catch2/catch.hpp"

TEST_CASE("Максимум"){

    CHECK(max(1, 2) == 2);
    CHECK(max(-1,-2) == -1);

}

TEST_CASE("Площадь треугольника"){

    CHECK(triangle_square(1, 2) == 1);
    CHECK(triangle_square(100, 20) == 1000);
}

TEST_CASE("Сумма"){

    CHECK(sum(1, 1) == 2);
    CHECK(sum(2, 3) == 5);
    CHECK(sum(-100, 298) == 198);
}

TEST_CASE("Площадь"){

    CHECK(square(200, 50) == 10000);
}