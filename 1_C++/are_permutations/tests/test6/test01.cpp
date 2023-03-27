#include "cop3530_1_1.h"
#include "catch.hpp"
#include <string>
#include <stdlib.h>
using namespace std;

TEST_CASE("Function: arePermutations 6", "[io_hidden]")
{
	string S = "aaaaaaaaaabbbbbbbbacccccccccdddddddddddddda";
	string S2 = "adbbcdbdcdddcaadcaddacabbacabaddbdabddacacc";
	string S3 = "bddccabdaacbdcdcbaadcdabbcdaabcdadbddacddaa";
	string S4 = "bdaaaddacabdaaddcadadbadbcdbdcdbdbbccacdcac";
	REQUIRE(arePermutations({S, S2, S3, S4}) == true);
}