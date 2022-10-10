#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "triangle.cpp"

TEST_CASE("sides", "[abc]")
{
    REQUIRE(sides(1, 2, 3) == 0);    // scalene triangle
    REQUIRE(sides(3, 4, 5) == 1);    // scalene right angled
    REQUIRE(sides(3, 5, 5) == 2);    // isoscles triangle
    REQUIRE(sides(1, 1, 1.41) == 3); // isosceles right angle
    REQUIRE(sides(15, 15, 21.21320) == 3);
    REQUIRE(sides(6, 6, 6) == 4); // equilateral triangle
}