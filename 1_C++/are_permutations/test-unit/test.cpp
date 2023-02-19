#include "../src/cop3530_1_2.h"
#define CATCH_CONFIG_MAIN 
#include "catch.hpp"

/*
	To check output (At the suffix_count directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Case 1") {
    REQUIRE(arePermutations(std::vector<std::string> {"abba", "bbaa", "aabb"}) == true);
}

TEST_CASE("Case 2") {
    REQUIRE(arePermutations(std::vector<std::string> {"abc", "abbc"}) == false);
}

TEST_CASE("Case 3") {
    REQUIRE(arePermutations(std::vector<std::string> {"gator", "rotag", "sator"}) == false);
}

TEST_CASE("Case 4") {
    REQUIRE(arePermutations(std::vector<std::string> {"shoes", "sheso", "hesos", "shooes", "shoe"}) == false);
}

TEST_CASE("Case 5") {
    REQUIRE(arePermutations(std::vector<std::string> {""}) == true);
}