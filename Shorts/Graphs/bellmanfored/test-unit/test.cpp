#include "../src/bellmanfored.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
        To check output (At the sortable directory):
                g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: graph 1", "[given]") {
    vector<vector<pair<int, int>>> graph = {
        {{1, 4}, {2, 3}},
        {{3, 2}},
        {{1, -2}},
        {}};
    int src = 0;
    vector<int> dists = bellman_ford(graph, src);

    REQUIRE(dists[0] == 0);
    REQUIRE(dists[1] == 1);
    REQUIRE(dists[2] == 3);
    REQUIRE(dists[3] == 3);
}

TEST_CASE("Function: graph 2", "[given]") {
    vector<vector<pair<int, int>>> graph = {
        {{1, 4}, {2, 3}},
        {{3, 2}},
        {{1, -2}},
        {}};
    int src = 1;
    vector<int> dists = bellman_ford(graph, src);

    REQUIRE(dists[0] == INT_MAX);
    REQUIRE(dists[1] == 0);
    REQUIRE(dists[2] == INT_MAX);
    REQUIRE(dists[3] == 2);
}

TEST_CASE("Function: graph 3", "[given]") {
    vector<vector<pair<int, int>>> graph = {
        {{1, 2}, {2, 1}},
        {{3, 4}},
        {{4, 3}},
        {{5, -5}},
        {{3, 1}},
        {{2, 2}}};
    int src = 0;
    vector<int> dists = bellman_ford(graph, src);

    REQUIRE(dists[0] == 0);
    REQUIRE(dists[1] == 2);
    REQUIRE(dists[2] == 1);
    REQUIRE(dists[3] == 5);
    REQUIRE(dists[4] == 4);
    REQUIRE(dists[5] == 0);
}

TEST_CASE("Function: graph 4, negative weight cycle", "[given]") {
    vector<vector<pair<int, int>>> graph = {
        {{1, 1}, {2, 2}},
        {{3, 3}},
        {{4, 1}, {1, -6}},
        {{2, 1}},
        {{0, -1}}};
    int src = 0;
    vector<int> dists = bellman_ford(graph, 0);

    REQUIRE(dists == vector<int>());
    cout << "Negative weight cycle found!";
}

TEST_CASE("Function: graph 5, negative weight cycle", "[given]") {
    vector<vector<pair<int, int>>> graph = {
        {{1, 1}},
        {{2, 2}},
        {{3, -4}, {4, 1}},
        {{5, 3}},
        {{2, -2}, {1, 2}},
        {{4, -1}}};
    int src = 0;
    vector<int> dists = bellman_ford(graph, 0);

    REQUIRE(dists == vector<int>());
    cout << "Negative weight cycle found!";
}