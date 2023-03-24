#include "../src/cop3530_2_5.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <stack>

/*
	To check output (At the make_valid_string directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Case 1") {
	REQUIRE(makeValidString("(") == "()");
}

TEST_CASE("Case 2") {
	REQUIRE(makeValidString("{)") == "{()}");
}

TEST_CASE("Case 3") {
	REQUIRE(makeValidString("(((}]") == "((({}[])))");
}

TEST_CASE("Case 4") {
	REQUIRE(makeValidString("(){}") == "(){}");
}

TEST_CASE("Case 5") {
	REQUIRE(makeValidString("([([([") == "([([([])])])");
}