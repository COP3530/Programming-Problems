#include "cop3530_1_1.h"
#include "catch.hpp"

TEST_CASE("Function: arePermutations 2", "[given]")
{
	REQUIRE(arePermutations({"abc", "abbc"}) == false);
}