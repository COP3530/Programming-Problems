#include "cop3530_1_1.h"
#include "catch.hpp"

TEST_CASE("Function: arePermutations 4", "[o_hidden]")
{
	REQUIRE(arePermutations({"shoes", "sheso", "hesos", "shooes", "shoe"}) == false);
}
