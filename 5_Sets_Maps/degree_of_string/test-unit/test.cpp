#include "../src/degree_of_string.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
    To check output (At the are_permutations directory):
        g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Case 1")
{
    REQUIRE(degreeOfString("fl1pthat") == 4);
}

TEST_CASE("Case 2")
{
    REQUIRE(degreeOfString("hiHighh") == 7);
}

TEST_CASE("Case 3")
{
    REQUIRE(degreeOfString("stylish") == 6);
}

TEST_CASE("Case 4")
{
    REQUIRE(degreeOfString("1andOnLY") == 4);
}

TEST_CASE("Case 5")
{
    REQUIRE(degreeOfString("STANL00NA") == 2);
}