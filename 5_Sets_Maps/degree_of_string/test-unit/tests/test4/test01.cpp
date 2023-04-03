#include "cop3530_5_2.h"
#include "catch.hpp"

TEST_CASE("Function: degreeOfString 4", "[o_hidden]")
{
	REQUIRE(degreeOfString("1andOnLY") == 4);
}