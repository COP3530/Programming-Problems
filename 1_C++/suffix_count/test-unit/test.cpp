#include "../src/suffix_count.h"
#include "catch/catch_amalgamated.hpp"

/*
    To check output (At the suffix_count directory):

    # If you have make...
    # run this command
    make
    # If you installed gcc via the msys2 ucrt64 toolchain, you may need to run this command instead
    mingw32-make

    # If you do not have make...
    # run this once to build catch
    g++ -std=c++14 -Werror -Wuninitialized -g -c test-unit/catch/catch_amalgamated.cpp -o build/catch_amalgamated.o

    # then run this command to compile and run the tests (you do not need to run the previous command again)
    g++ -std=c++14 -Werror -Wuninitialized -g build/catch_amalgamated.o test-unit/test.cpp -o build/test; ./build/test
*/

TEST_CASE("Function: suffixCount 1", "[given]") {
    REQUIRE(suffixCount("et tu, brute", 1) == 2);
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
