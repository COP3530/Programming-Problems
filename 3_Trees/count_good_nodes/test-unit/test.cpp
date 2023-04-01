#include "../src/cop3530_3_2.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
    To check output (At the sum_of_level directory):
        g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Example 1")
{
    TreeNode *root = insert(std::vector<int>{5, 5, 3, 3, INT_MIN, 8, 1,
                                             2, 3, 0, 0, INT_MIN, 2});
    REQUIRE(countGoodNodes(root) == 3);
}