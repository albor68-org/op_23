#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE("Максимум"){

   CHECK(max(1 , 2) == 2);

   CHECK(max(-1 , -2) == -1);

   CHECK(max(0 , 10) == 10);

   CHECK(max(-2 , 2) == 2);

}
TEST_CASE("Сумма"){

   CHECK(sum(1 , 2) == 3);

   CHECK(sum(-1 , -2) == -3);

   CHECK(sum(-1 , 2) == 1);
   
   CHECK(sum(0 , 2) == 2);

   CHECK(sum(-1 , 10) == 9);
}
TEST_CASE("Площадь"){

    CHECK(square(1 , 2) == 2);

    CHECK(square(10 , 10) == 100);

    CHECK(square(-1 , 2) == 0);

    CHECK(square(1 , -2) == 0);

}