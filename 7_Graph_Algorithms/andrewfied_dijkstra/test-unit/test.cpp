#include "../src/andrewfied_dijkstra.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the andrewfied_dijkstra directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: Test 1", "[given]") 
{
	std::vector<std::string> graph = {
		"s3153",
		"1.424",
		"22.3t"
	};

	REQUIRE(dijkstra(graph) == 13);
}

// TEST_CASE("Function: Test 2", "[output_hidden]") 
// {
// 	std::vector<std::string> graph = {
// 		"s3153",
// 		"....4",
// 		"....t"
// 	};
	
// 	REQUIRE(dijkstra(graph) == ?);
// }

// TEST_CASE("Function: Test 3", "[output_hidden]") 
// {
// 	std::vector<std::string> graph = {
// 		"s3",
// 		".t"
// 	};
	
// 	REQUIRE(dijkstra(graph) == ?);
// }

// TEST_CASE("Function: Test 4", "[output_hidden]") 
// {
// 	std::vector<std::string> graph = {
// 		"s3",
// 		"1t"
// 	};
	
// 	REQUIRE(dijkstra(graph) == ?);
// }

// TEST_CASE("Function: Test 5", "[output_hidden]") 
// {
// 	std::vector<std::string> graph = {
// 		"s999",
// 		"999.",
// 		"99.t"
// 	};
	
// 	REQUIRE(dijkstra(graph) == ?);
// }