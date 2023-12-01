#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE(){

     CHECK(max(0 , 10) == 10);
     CHECK(max(-2 , 2) == 2);

}