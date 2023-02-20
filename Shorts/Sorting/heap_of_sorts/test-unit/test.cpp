#include "../src/heap_of_sorts.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <vector>
#include <algorithm>

/*
	To check output (At the sum_of_level directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: heapSort 1", "[given]") {
    // generic test case
    std::vector<int> unsorted = {5, 3, 2, 1, 4};
    
    std::vector<int> sorted = unsorted;
    std::sort(sorted.begin(), sorted.end());

    heapSort(unsorted);
    REQUIRE(unsorted == sorted);
}

TEST_CASE("Function: heapSort 2", "[given]") {
    // Already sorted case
    std::vector<int> unsorted = {1, 2, 3, 4, 5, 6, 7};
    
    std::vector<int> sorted = unsorted;
    std::sort(sorted.begin(), sorted.end());

    heapSort(unsorted);
    REQUIRE(unsorted == sorted);
}

TEST_CASE("Function: heapSort 3", "[given]") {
    // Already a max heap
    std::vector<int> unsorted = {7, 6, 4, 5, 3, 1, 2};
    
    std::vector<int> sorted = unsorted;
    std::sort(sorted.begin(), sorted.end());

    heapSort(unsorted);
    REQUIRE(unsorted == sorted);
}

TEST_CASE("Function: heapSort 4", "[given]") {
    // empty test case
    std::vector<int> unsorted = {};
    
    std::vector<int> sorted = unsorted;
    std::sort(sorted.begin(), sorted.end());

    heapSort(unsorted);
    REQUIRE(unsorted == sorted);
}

TEST_CASE("Function: heapSort 5", "[given]") {
    // generic test case with negative values
    std::vector<int> unsorted = {4, -1, -3, 10, 361, -2, 0};
    
    std::vector<int> sorted = unsorted;
    std::sort(sorted.begin(), sorted.end());

    heapSort(unsorted);
    REQUIRE(unsorted == sorted);
}
