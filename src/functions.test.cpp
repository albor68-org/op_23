#include "functions.h"
#include <catch2/catch.hpp>

TEST_CASE("Maximum"){    // ПРОВЕРКА 
    CHECK(max(1,2) == 2);    
    CHECK(max(-1,-2) == -1);
    CHECK(max(0,10) == 10);
    CHECK(max(-2,2) == 2);
}

TEST_CASE("Addition"){    //каждую функция теструем отдельно, иногда стоит тестировать конкретные свойства одной функ. тоже отдельно 
    CHECK(add(0,5) == 5);
    CHECK(add(0,-5) == -5);
}

TEST_CASE("Square"){  
    CHECK(square1(4,2) == 8);

}

