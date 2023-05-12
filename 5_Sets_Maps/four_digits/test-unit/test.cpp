#include "../src/four_digits.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
    To check output (At the four_digits directory):
        g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Case 1")
{
    REQUIRE(fourDigitNumbers("0123") == std::vector<int>{1023, 1203, 2013, 2031, 2103, 2301, 3021, 3201});
}

TEST_CASE("Case 2")
{
    REQUIRE(fourDigitNumbers("11220") == std::vector<int>{1021, 1201, 1221, 2011, 2021, 2101, 2121, 2201, 2211});
}
TEST_CASE("Case 3")
{
    REQUIRE(fourDigitNumbers("0022") == std::vector<int>{});
}