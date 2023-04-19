#include "../src/cop3530_3_3.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the kth_smallest_value directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/


TEST_CASE("Example 1")
{
    TreeNode* root = new TreeNode("alpha");
    root = insert(root, "beta");
    root = insert(root, "cat");
    REQUIRE("alpha" == kthSmallest(root, 1));
}

TEST_CASE("Example 2")
{
    TreeNode* root = new TreeNode("beta");
    root = insert(root, "azimuth");
    root = insert(root, "cat");
    root = insert(root, "alpha");
    REQUIRE("beta" == kthSmallest(root, 3));
}

TEST_CASE("Example 3")
{
    TreeNode* root = new TreeNode("zebra");
    root = insert(root, "bloom");
    root = insert(root, "zig");
    root = insert(root, "ape");
    root = insert(root, "fancy");
    REQUIRE("bloom" == kthSmallest(root, 2));
}

TEST_CASE("Example 4")
{
    TreeNode* root = new TreeNode("mossy");
    root = insert(root, "forty");
    root = insert(root, "zap");
    root = insert(root, "empty");
    root = insert(root, "boost");
    root = insert(root, "accent");
    root = insert(root, "abort");
    root = insert(root, "apple");
    REQUIRE("empty" == kthSmallest(root, 5));
}

TEST_CASE("Example 5")
{
    TreeNode* root = new TreeNode("igloo");
    root = insert(root, "doll");
    root = insert(root, "otter");
    root = insert(root, "air");
    root = insert(root, "eat");
    root = insert(root, "oil");
    root = insert(root, "wolf");
    REQUIRE("otter" == kthSmallest(root, 6));
}