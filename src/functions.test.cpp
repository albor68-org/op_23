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
TEST_CASE("area norm"){

    CHECK(square(3 , 2) == 6);

    CHECK(square(40 , 6) == 240);
}
TEST_CASE("area ne norm"){

    CHECK_THROWS(square(-2 , 5));

    CHECK_THROWS(square(40 , -4));

    CHECK_THROWS(square(-4 , -10));

    CHECK_THROWS(square(0 , 2));

CHECK_THROWS(square(40 , 0));

CHECK_THROWS(square(0 , 0));

}

TEST_CASE("massiv"){

   CHECK_THROWS(contrast({1 , 2 , 3 , 4}) == 3);


}