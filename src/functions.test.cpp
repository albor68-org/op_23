#include "functions.h"
#include <catch2/catch.hpp>
#include <iostream>

TEST_CASE(){

    CHECK(max(1 , 2) == 2);

    CHECK(sum(10 , 5) == 15);
    CHECK(sum(-10 , 5) == -5);
    CHECK(sum(0 , 5) == 5);

    CHECK(screan_area(1080 , 720) == 777600);
    // CHECK(screan_area(0 , 0) == 0);
    // CHECK(screan_area(0 , 720) == 0);
    // CHECK(screan_area(1080 , 0) == 0);



}