#include "cop3530_1_1.h"
#include "catch.hpp"

TEST_CASE("Function: arePermutations 1", "[given]")
{
	REQUIRE(arePermutations({"abba", "bbaa", "aabb"}) == true);
}