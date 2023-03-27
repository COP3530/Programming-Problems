#include "cop3530_1_1.h"
#include "catch.hpp"
#include <string>
#include <stdlib.h>
using namespace std;

TEST_CASE("Function: arePermutations 9", "[io_hidden]")
{
	string S = "xahtiennikaffrwabfehcunsm";
	string S2 = "ihwxntmffkfehnabuesanicar";
	string S3 = "xinfeuchawemahbfarniktfsn";

	REQUIRE(arePermutations({S, S2, S3}) == true);
}