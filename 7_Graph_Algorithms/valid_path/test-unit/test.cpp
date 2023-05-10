#include "../src/cop3530_7_4.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the valid_path directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: Test 1")
{
    int source = 0;
    int destination = 2;
    int n = 7;

    std::vector<std::pair<int,int>> edges = {
            {0,1}, {0,2}, {1,3},
            {1,2}, {4,5}, {4,6}
    };

    REQUIRE(validPath(n, edges, source, destination) == true);
}

TEST_CASE("Function: Test 2")
{
    int source = 4;
    int destination = 6;
    int n = 7;

    std::vector<std::pair<int,int>> edges = {
            {0,1}, {0,2}, {1,3},
            {1,2}, {4,5}, {4,6}
    };

    REQUIRE(validPath(n, edges, source, destination) == true);
}

TEST_CASE("Function: Test 3")
{
    int source = 0;
    int destination = 3;
    int n = 7;

    std::vector<std::pair<int,int>> edges = {
            {0,1}, {0,2}, {1,3},
            {1,2}, {4,5}, {4,6}
    };

    REQUIRE(validPath(n, edges, source, destination) == false);
}

TEST_CASE("Function: Test 4")
{
    int source = 1;
    int destination = 0;
    int n = 3;

    std::vector<std::pair<int,int>> edges = {
            {0,1}, {0,2}, {1,2}
    };

    REQUIRE(validPath(n, edges, source, destination) == false);
}

TEST_CASE("Function: Test 5")
{
    int source = 1;
    int destination = 3;
    int n = 4;

    std::vector<std::pair<int,int>> edges = {

    };

    REQUIRE(validPath(n, edges, source, destination) == false);
}
