#include "cop3530_2_4.h"
#include "catch.hpp"

TEST_CASE("Function: validBrackets 1", "[given]")
{
	REQUIRE(isValid("()") == true);
}