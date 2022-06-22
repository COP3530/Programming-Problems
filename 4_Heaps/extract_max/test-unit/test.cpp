#include "../src/extract_max.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the extract_max directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: extractMax 1", "[output_visible]") {
	int input[] = {9, 8, 7};
    int size = 3;
    int expectedOutput[] = {8, 7};
    int* output = extractMax(input, size);
    for(int i = 0; i < size - 1; i++)
	    REQUIRE(expectedOutput[i] == output[i]);
}

TEST_CASE("Function: extractMax 2", "[output_visible]") {
	int input[] = {9, 8, 7, 6};
    int size = 4;
    int expectedOutput[] = {8, 6, 7};
    int* output = extractMax(input, size);
    for(int i = 0; i < size - 1; i++)
	    REQUIRE(expectedOutput[i] == output[i]);
}

// TEST_CASE("Function: extractMax 3", "[output_hidden]") {
// 	int input[] = {3, 1};
//     int size = 2;
//     int expectedOutput[] = {1};
//     int* output = extractMax(input, size);
//     for(int i = 0; i < size - 1; i++)
// 	    REQUIRE(expectedOutput[i] == output[i]);
// }

