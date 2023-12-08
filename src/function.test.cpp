#include "function.h"
#include <catch2/catch.hpp>

TEST_CASE() {
 CHECK(max(1,2) == 2);  
           CHECK(max(-1,-2) == -1); 
           CHECK(max(0,10) == 10);
           CHECK(max(-2,2) == 2);
           CHECK(summ(3,5)==8);
           CHECK(square(4,5)==20);
             
}


TEST_CASE("square") {
CHECK (square(3,2)==6);
CHECK (square(40,4)==160);
}

TEST_CASE("area abnormal") {
CHECK_THROWS (square(-3,2));
CHECK_THROWS (square(40,-4));
}
