cmake_minimum_required(VERSION 3.20)

project(op_23 LANGUAGES CXX)
find_package(Catch2 2 REQUIRED)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/functions.cpp
)

add_executable(test
    src/functions.cpp
    src/functions.test.cpp

)
target_link_libraries(test
    PRIVATE
    Catch2::Catch2WithMain
)