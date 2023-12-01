#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE(){
    CHECK(std::max(1,2) == 2);
    CHECK(std::max(-1,-2) == -1);
    CHECK(std::max(0,10) == 10);
    CHECK(std::max(-2,2) == 2);
}