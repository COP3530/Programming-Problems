#include "cop3530_2_4.h"
#include "catch.hpp"

TEST_CASE("Function: validBrackets 5", "[io_hidden]")
{
	REQUIRE(isValid("([]){}") == true);
}