#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "triangle.cpp"

TEST_CASE("valid", "[a,b,c]")
{

    REQUIRE(valid(60, 50, 70) == 1);
    REQUIRE(valid(60, 60, 60) == 1);
    REQUIRE(valid(-50, 50, 70) == 0);
    REQUIRE(valid(0, -50, 70) == 0);
    REQUIRE(valid(60, 50, -70) == 0);
    REQUIRE(valid(-0, -50, -70) == 0);
    REQUIRE(valid(00, 90, 90) == 0);
    REQUIRE(valid(110, 00, 70) == 0);
    REQUIRE(valid(60, 50, 00) == 0);
    REQUIRE(valid(00, 00, 00) == 0);
    REQUIRE(valid(180, 0, 0) == 0);
    REQUIRE(valid(110, 20, 50) == 1);
    REQUIRE(valid(45, 45, 90) == 1);
}