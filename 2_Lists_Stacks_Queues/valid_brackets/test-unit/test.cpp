#include "../src/cop3530_2_4.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the valid_brackets directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Case 1") {
    REQUIRE(isValid("()") == true);
}

TEST_CASE("Case 2") {
    REQUIRE(isValid("()[]{}<>") == true);
}

TEST_CASE("Case 3") {
    REQUIRE(isValid("()(") == false);
}

TEST_CASE("Case 4") {
    REQUIRE(isValid("(]") == false);
}

TEST_CASE("Case 5") {
    REQUIRE(isValid("([]){}") == true);
}
