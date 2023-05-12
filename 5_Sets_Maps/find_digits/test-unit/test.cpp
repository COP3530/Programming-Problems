#include "../src/find_digits.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the find_digits directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: findDigits. Testing adding 1 new digit. x is \"1234\", y is \"12345\"", "[simple]") {
	std::string x = "1234", y = "12345";
	REQUIRE(findTheDigits(x, y) == "5");
}

TEST_CASE("Function: findDigits. Testing adding n more new digits. x is \"8\", y is \"56981234\"", "[simple]") {
	std::string x = "8", y = "56981234";
	REQUIRE(findTheDigits(x, y) == "1234569");
}

TEST_CASE("Function: findDigits. Testing adding repetitive digits. x is \"1\", y is \"321321\"", "[edge]") {
	std::string x = "1", y = "321321";
	REQUIRE(findTheDigits(x, y) == "12233");
}


