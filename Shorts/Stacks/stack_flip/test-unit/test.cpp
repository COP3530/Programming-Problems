#include "../src/cop3530_10_1.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the stack_flip directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: reverse 1", "[given]") {
    vector<int> test = {5, 1, 4, 1, 3}, res;
    res = reverseNums(test);

    vector<int> ans = {3, 1, 4, 1, 5};

    REQUIRE(res == ans);
}

TEST_CASE("Function: reverse 2", "[given]") {
    vector<int> test = {1}, res;
    res = reverseNums(test);

    vector<int> ans = {1};

    REQUIRE(res == ans);
}

TEST_CASE("Function: reverse 3", "[given]") {
    vector<int> test = {9, 7}, res;
    res = reverseNums(test);

    vector<int> ans = {7, 9};

    REQUIRE(res == ans);
}

TEST_CASE("Function: reverse 4", "[given]") {
    vector<int> test = {8, 8, 8, 8}, res;
    res = reverseNums(test);

    vector<int> ans = {8, 8, 8, 8};

    REQUIRE(res == ans);
}

TEST_CASE("Function: reverse 5", "[given]") {
    vector<int> test = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, res;
    res = reverseNums(test);

    vector<int> ans = {10, 9 , 8, 7, 6, 5, 4, 3, 2, 1};

    REQUIRE(res == ans);
}