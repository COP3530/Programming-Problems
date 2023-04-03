#include "cop3530_2_5.h"
#include "catch.hpp"

TEST_CASE("Function: makeValidString 1", "[given]")
{
	REQUIRE(makeValidString("(") == "()");
}