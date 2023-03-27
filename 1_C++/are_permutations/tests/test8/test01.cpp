#include "cop3530_1_1.h"
#include "catch.hpp"
#include <string>
#include <stdlib.h>
using namespace std;

TEST_CASE("Function: arePermutations 8", "[io_hidden]")
{
	string S = "bxbtxahurhkenwckiminyfoxaksnjwnaetbfimsnhafeabfp";
	string S2 = "bxbtxahurhkenwckimenyfoxaksnjwnaetbfimsnhafeabfp";

	REQUIRE(arePermutations({S, S2}) == false);
}