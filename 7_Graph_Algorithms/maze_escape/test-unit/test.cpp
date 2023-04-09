#include "../src/maze_escape.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the maze_escape directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: Test 1", "[given]") 
{
	std::vector<std::string> graph = {
		"s#.#.",   
        ".#...",  
        "...#t"
	};

	REQUIRE(traverse(graph) == 8);
}

TEST_CASE("Function: Test 2", "[given]") 
{
	std::vector<std::string> graph = {
		"s....",   
        ".....",  
        "....t"
	};

	REQUIRE(traverse(graph) == 6);
}