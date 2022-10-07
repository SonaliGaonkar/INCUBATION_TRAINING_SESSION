#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "points.cpp"

TEST_CASE("axisCheck", "x,y")
{

    REQUIRE(axisCheck(2, 3) == 0); //neither x axis nor y axis
    REQUIRE(axisCheck(4, 0) == 2);  //x-axis
    REQUIRE(axisCheck(0, 0) == 3);  //origin
    REQUIRE(axisCheck(0, -3) == 1);   //y-axis
    REQUIRE(axisCheck(-2, 0) == 2);
    REQUIRE(axisCheck(0, 0) == 3);
    REQUIRE(axisCheck(0, 3) == 1);
    REQUIRE(axisCheck(8, 0) == 2);
    REQUIRE(axisCheck(-4, -8) == 0);
    REQUIRE(axisCheck(8, 3) == 0);
    REQUIRE(axisCheck(1, 0) == 2);
    REQUIRE(axisCheck(0, 5) == 1);
}