#include "cop3530_2_4.h"
#include "catch.hpp"

TEST_CASE("Function: validBrackets 3", "[o_hidden]")
{
	REQUIRE(isValid("()(") == false);
}