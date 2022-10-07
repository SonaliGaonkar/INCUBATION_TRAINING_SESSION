#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "circle.cpp"

TEST_CASE("points", "[x, y, x1, y1, r]") // co-ordinates of center(x1,y1)
                                         // co-ordinates of point  (x,y)
{

    REQUIRE(points(1, 1, 0, 1, 2) == 1); // inside circle
    REQUIRE(points(5, 9, 0, 1, 2) == 2); // outside outside
    REQUIRE(points(0, 0, 0, 0, 0) == 0); // on circle
    REQUIRE(points(5, 9, 3, 2, 2) == 2);
    REQUIRE(points(-4, 3, -2, 1, 3) == 1);
    REQUIRE(points(-8, -3, -2, -1, 3) == 2);
    REQUIRE(points(99, 99, 99, 99, 99) == 1);
    REQUIRE(points(-3, -2, -2, -3, 5) == 1);
    REQUIRE(points(2, 4, 0, 0, 5) == 1);
}