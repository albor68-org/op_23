#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE(){

    CHECK(max(1,2)==2);
    CHECK(max(-1,-2)==-1);
    CHECK(max(-2,2)==2);
    CHECK(max(10,0)==10);

    CHECK(add(0,5)==5);
    CHECK(add(-5,0)== -5);
    CHECK(square(4,2)==8);

}
TEST_CASE("area norm"){    

    CHECK(area(3,2)==6);
    CHECK(area(40,4)==160);
}
TEST_CASE("area abnormal"){    

    CHECK_THROWS(area(-3,2));
    CHECK_THROWS(area(40,-4));
    CHECK_THROWS(area(-10,-4));
    CHECK_THROWS(area(0,4));
    CHECK_THROWS(area(40,0));
    CHECK_THROWS(area(0,0));
}