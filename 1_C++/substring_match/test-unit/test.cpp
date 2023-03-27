#include "../src/cop3530_1_3.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the substring_match directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/


TEST_CASE("Case 1") {
	std::vector<std::string> str = {"place", "misplacement", "great", "greatest"};
	std::vector<std::string> result;
	std::vector<std::string> expected = {"place", "great"};
	substringMatch(str, result);
	std::sort(str.begin(), str.end());
	std::sort(result.begin(), result.end());
	REQUIRE(result == expected);
}

TEST_CASE("Case 2") {
    std::vector<std::string> str = {"red", "blue", "rd"};
	std::vector<std::string> result;
	std::vector<std::string> expected = {};
	substringMatch(str, result);
	std::sort(str.begin(), str.end());
	std::sort(result.begin(), result.end());
	REQUIRE(result == expected);
}

TEST_CASE("Case 3") {
    std::vector<std::string> str = {"bat", "batman", "batmans", "cat", "category"};
	std::vector<std::string> result;
	std::vector<std::string> expected = {};
	substringMatch(str, result);
	std::sort(str.begin(), str.end());
	std::sort(result.begin(), result.end());
	REQUIRE(result == expected);
}

TEST_CASE("Case 4") {
	std::vector<std::string> str = {"sing", "singapore", "singing"};
	std::vector<std::string> result;
	std::vector<std::string> expected = {"sing"};
	substringMatch(str, result);
	std::sort(str.begin(), str.end());
	std::sort(result.begin(), result.end());
	REQUIRE(result == expected);
}

TEST_CASE("Case 5") {
    std::vector<std::string> str = {};
	std::vector<std::string> result;
	std::vector<std::string> expected = {};
	substringMatch(str, result);
	REQUIRE(result == expected);
}