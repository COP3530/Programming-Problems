#include "../src/suffix_count.h"
#include "catch/catch_amalgamated.hpp"

/*
	To check output (At the suffix_count directory):

# run this once to build catch
g++ -std=c++14 -Werror -Wuninitialized -g -c test-unit/catch/catch_amalgamated.cpp -o build/catch_amalgamated.o

# run this every time your tests change
g++ -std=c++14 -Werror -Wuninitialized -g build/catch_amalgamated.o test-unit/test.cpp -o build/test && ./build/test

*/

TEST_CASE("Function: suffixCount 1", "[given]") {
	REQUIRE(suffixCount("et tu, brute", 1) == 0);
}

TEST_CASE("Function: suffixCount 2", "[given]") {
	REQUIRE(suffixCount("aaa", 1) == 3);
}

// TEST_CASE("Function: suffixCount 4", "[o_hidden]") {
// 	REQUIRE(suffixCount("aaaaaa", 3) == ?);
// }

// TEST_CASE("Function: suffixCount 5", "[o_hidden]") {
// 	REQUIRE(suffixCount("aaabaaaa", 4) == ?);
// }
