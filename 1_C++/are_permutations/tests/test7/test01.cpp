#include "cop3530_1_1.h"
#include "catch.hpp"
#include <string>
#include <stdlib.h>
using namespace std;

TEST_CASE("Function: arePermutations 7", "[io_hidden]")
{
	string S = "vhkmvhqpcmojczmwriiatcd";
	string S2 = "zcjvccqahpmmwdkvhmioirt";
	string S3 = "jodphrmvizhmqcwcavtckmi";
	string S4 = "hdajzimvhwcimmcotkrqpcv";
	string S5 = "wmpjiqcmcrcdzviktgmhovh";

	REQUIRE(arePermutations({S, S2, S3, S4, S5}) == false);
}