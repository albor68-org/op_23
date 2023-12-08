#include "functions.h"
#include <catch2/catch.hpp>

    TEST_CASE("Максимум из двух чисел") {

    CHECK(max(1, 2) == 2);

    CHECK(max(-1, -2) == -1);

    CHECK(max(0, 10) == 10);

    CHECK(max(-2, 2) == 2);
    }

    TEST_CASE("Сумма") {
    CHECK(CYMM(3, 3)== 6);
    CHECK(CYMM(6, 3)== 9);
    CHECK(CYMM(3, 9)== 12);
    }

    TEST_CASE("area norm") {  
    CHECK(area(2,5)== 10);
    CHECK(area(40,6)== 240);
    
    }

    TEST_CASE("area abnormal") {  
    CHECK_THROWS(area(-2,5));
    CHECK_THROWS(area(23,-34));
    CHECK_THROWS(area(-3,-232));
    CHECK_THROWS(area(0,6));
    }
