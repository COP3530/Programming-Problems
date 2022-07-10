#include "../src/not_so_simple_graph.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the not_so_simple_graph directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: sumEdge", "[unit]") 
{
	Graph g;

	g.insertEdge(0, 0, 10);
	g.insertEdge(0, 1, 20);
	g.insertEdge(0, 2, 30);

	std::vector<int> expected_weight = {20};
	std::vector<int> expected_adjacent = {0, 1, 2};

	REQUIRE(g.isEdge(0, 0) == 1);
	REQUIRE(g.sumEdge(0, 2) == 30);
	REQUIRE(g.getWeight(0, 1) == expected_weight);
	REQUIRE(g.getAdjacent(0) == expected_adjacent);
}

