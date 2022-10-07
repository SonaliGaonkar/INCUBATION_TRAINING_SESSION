#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "identifier.cpp"

TEST_CASE("isValid", "[abc]")
{

    REQUIRE(isValid("_abcd") == 1); // valid
    REQUIRE(isValid("_ABCVF") == 1);
    REQUIRE(isValid("&^$#)") == 0); // invalid
    REQUIRE(isValid("_AB123") == 1);
    REQUIRE(isValid("_ANVG") == 1);
    REQUIRE(isValid("1abcd") == 0);
    REQUIRE(isValid("_12567fds") == 1);
    REQUIRE(isValid("1235698") == 0);
}