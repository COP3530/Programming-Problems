#include "../src/triple_sum.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the triple_sum directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: Test 1")
{

    std::vector<std::vector<int>> nums = {
            {-1, 0, 1, 2, -3, 2}
    };

    std::vector<std::vector<int>> expected = {{-1, 0, 1}, {1, 2, -3}};

    REQUIRE(threeSum(nums) == expected);
}

TEST_CASE("Function: Test 2")
{

    std::vector<std::vector<int>> nums = {
            {0, 3, 1}
    };

    std::vector<std::vector<int>> expected = {};

    REQUIRE(threeSum(nums) == expected);
}

TEST_CASE("Function: Test 3")
{

    std::vector<std::vector<int>> nums = {
            {0, 0, 0}
    };

    std::vector<std::vector<int>> expected = {{0, 0, 0}};

    REQUIRE(threeSum(nums) == expected);
}

TEST_CASE("Function: Test 4")
{

    std::vector<std::vector<int>> nums = {
            {-1, -1, 2, -1, -1, 2}
    };

    std::vector<std::vector<int>> expected = {{-1, -1, 2}};

    REQUIRE(threeSum(nums) == expected);
}

TEST_CASE("Function: Test 5")
{

    std::vector<std::vector<int>> nums = {
            {1, 1, 3, 5, 2, 1}
    };

    std::vector<std::vector<int>> expected = {};

    REQUIRE(threeSum(nums) == expected);
}

