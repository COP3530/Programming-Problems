#include "../src/evaluate_postfix.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the evaluate_postfix directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Test Case 1") {
    std::vector<std::string> postfix = {"4", "3", "+"};
    REQUIRE(evalRPN(postfix) == 7);
}

TEST_CASE("Test Case 2") {
    std::vector<std::string> postfix = {"4", "3", "+", "2", "*"};
    REQUIRE(evalRPN(postfix) == 14);
}

TEST_CASE("Test Case 3") {
    std::vector<std::string> postfix = {"2", "3", "4", "+", "+"};
    REQUIRE(evalRPN(postfix) == 9);
}

TEST_CASE("Test Case 4") {
    std::vector<std::string> postfix = {"8", "2", "*", "3", "%"};
    REQUIRE(evalRPN(postfix) == 1);
}

