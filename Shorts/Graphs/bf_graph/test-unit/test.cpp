#include "../src/cop3530_10_3.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the sortable directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: sortFirstHalf 1", "[given]") {
    vector<int> test = {6, 5, 4, 3, 2, 1};
    test = sortFirstHalf(test);

    vector<int> ans = {4, 5, 6, 3, 2, 1};

    REQUIRE(test == ans);
}

TEST_CASE("Function: sortFirstHalf 2", "[given]") {
    vector<int> test = {2, 1, 5, 4, 3};
    test = sortFirstHalf(test);

    vector<int> ans = {1, 2, 5, 4, 3};

    REQUIRE(test == ans);
}

TEST_CASE("Function: sortSecondHalf", "[given]") {
    vector<int> test = {2, 1, 5, 4, 3};
    test = sortSecondHalf(test);

    vector<int> ans = {2, 1, 3, 4, 5};

    REQUIRE(test == ans);
}

TEST_CASE("Function: sortReverse", "[given]") {
    vector<int> test = {1, 2, 3, 4, 5};
    test = sortReverse(test);

    vector<int> ans = {5, 4, 3, 2, 1};

    REQUIRE(test == ans);
}

TEST_CASE("Function: sortStructs", "[given]") {
    vector<Student> test = {Student(3, "Bob"), Student(2, "Alice"), Student(1, "Charlie")};
    test = sortStructs(test);

    vector<Student> ans = {Student(1, "Charlie"), Student(2, "Alice"), Student(3, "Bob")};

    REQUIRE(test == ans);
}