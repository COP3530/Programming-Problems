#include "cop3530_1_1.h"
#include "catch.hpp"

TEST_CASE("Function: arePermutations 3", "[o_hidden]")
{
	REQUIRE(arePermutations({"gator", "rotag", "sator"}) == false);
}