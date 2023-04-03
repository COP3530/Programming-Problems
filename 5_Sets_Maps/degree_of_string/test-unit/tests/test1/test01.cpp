#include "cop3530_5_2.h"
#include "catch.hpp"

TEST_CASE("Function: degreeOfString 1", "[given]")
{
	REQUIRE(degreeOfString("fl1pthat") == 4);
}