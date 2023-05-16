#include "../src/level_frequency.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
    To check output (At the level_frequency directory):
        g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Example 1")
{
    TreeNode *root = insert(std::vector<int>{5, 5, 3, 3, NULL, 3, 1, 2, 3, 0, NULL, NULL, 2});
    int k = 2;
    REQUIRE(levelFreq(root, k) == 2);
}
