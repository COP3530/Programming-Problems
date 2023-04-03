#include "cop3530_5_2.h"
#include "catch.hpp"

TEST_CASE("Function: degreeOfString 2", "[given]")
{
	REQUIRE(degreeOfString("hiHighh") == 7);
}