#include "../src/hashing_mode.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <vector>

/*
	To check output (At the sum_of_level directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: findMode 1", "[given]") {
    // Generic test case
    std::vector<int> unsorted = {1, 1, 2, 3, 5, 3, 5, 3};
    
    int mode = 3;
    int target = findMode(unsorted);

    REQUIRE(mode == target);
}

TEST_CASE("Function: findMode 2", "[given]") {
    // Multiple modes case
    std::vector<int> unsorted = {6, 4, 9, 6, 6, 4, 9, 4, 9};
    
    int mode = 4;
    int target = findMode(unsorted);

    REQUIRE(mode == target);
}

TEST_CASE("Function: findMode 3", "[given]") {
    // Generic test case
    std::vector<int> unsorted = {1, 2, 2, 3, 3, 3, 4, 4, 1, 4, 4, 1, 1, 9, 0, 8};
    
    int mode = 1;
    int target = findMode(unsorted);

    REQUIRE(mode == target);
}

TEST_CASE("Function: findMode 4", "[given]") {
    // minimal test case
    std::vector<int> unsorted = {5694};
    
    int mode = 5694;
    int target = findMode(unsorted);

    REQUIRE(mode == target);
}

TEST_CASE("Function: findMode 5", "[given]") {
    // generic test case with negative values
    std::vector<int> unsorted = {1, 2, 3, -1, 3, 2, 1, -1, -3, -3, -2, -2, 44, -2};
    
    int mode = -2;
    int target = findMode(unsorted);

    REQUIRE(mode == target);
}
