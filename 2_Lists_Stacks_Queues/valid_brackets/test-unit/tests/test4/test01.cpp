#include "cop3530_2_4.h"
#include "catch.hpp"

TEST_CASE("Function: validBrackets 4", "[o_hidden]")
{
	REQUIRE(isValid("(]") == false);
}