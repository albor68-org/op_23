#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE() {

     CHECK(max(1, 2) == 2);
     CHECK(max(-1, -2) == -1);
     CHECK(max(0, 10) == 10);
     CHECK(max(-2, 2) == 2);

}
