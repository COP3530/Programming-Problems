#include "cop3530_5_2.h"
#include "catch.hpp"

TEST_CASE("Function: degreeOfString 5", "[io_hidden]")
{
	REQUIRE(degreeOfString("STANL00NA") == 2);
}