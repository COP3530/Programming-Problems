#include "../src/cop3530_7_3.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
    To check output (At the sum_of_level directory):
        g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Example 1")
{
    REQUIRE(hiddenGator(2, std::vector<std::vector<int>>{{1, 2}}) == 2);
}
TEST_CASE("Example 2")
{
    REQUIRE(hiddenGator(3, std::vector<std::vector<int>>{{1, 2}, {2, 3}, {3, 1}}) == -1);
}
TEST_CASE("Example 3")
{
    REQUIRE(hiddenGator(4, std::vector<std::vector<int>>{{1, 2}, {2, 3}, {3, 1}}) == -1);
}

TEST_CASE("Example 4")
{
    REQUIRE(hiddenGator(4, std::vector<std::vector<int>>{}) == 1);
}