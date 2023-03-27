#include "../src/cop3530_10_2.h"
#include <stack>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the stack_ops directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: all 1", "[given]") {
    std::stack<int> stk;

    REQUIRE(isEmpty(stk) == true);

    push(stk, 10);
    push(stk, 24);

    REQUIRE(pop(stk) == 24);

    REQUIRE(getSize(stk) == 1);
}

TEST_CASE("Function: all 2", "[given]") {
    std::stack<int> stk;

    push(stk, 1);

    REQUIRE(pop(stk) == 1);
    REQUIRE(getSize(stk) == 0);
    REQUIRE(isEmpty(stk) == true);

    push(stk, 10);
    push(stk, 24);

    REQUIRE(pop(stk) == 24);

    REQUIRE(getSize(stk) == 1);
}

TEST_CASE("Function: isEmpty 1", "[given]") {
    std::stack<int> stk;

    REQUIRE(isEmpty(stk) == true);
    push(stk, 4);
    REQUIRE(isEmpty(stk) == false);
    REQUIRE(pop(stk) == 4);
    REQUIRE(isEmpty(stk) == true);
}

TEST_CASE("Function: getSize 1", "[given]") {
    std::stack<int> stk;

    for (int i = 10; i <= 100; i += 10) {
        push(stk, i);
    }

    REQUIRE(getSize(stk) == 10);
    push(stk, 110);
    REQUIRE(getSize(stk) == 11);
    REQUIRE(pop(stk) == 110);
    REQUIRE(pop(stk) == 100);
    REQUIRE(pop(stk) == 90);
    REQUIRE(getSize(stk) == 8);
}

TEST_CASE("Function: push and pop 1", "[given]") {
    std::stack<int> stk;

    push(stk, 55);
    push(stk, 34);
    push(stk, 5);
    push(stk, 3);
    push(stk, 2);
    push(stk, 1);
    REQUIRE(pop(stk) == 1);
    REQUIRE(pop(stk) == 2);
    REQUIRE(pop(stk) == 3);
    REQUIRE(pop(stk) == 5);
    push(stk, 21);
    push(stk, 13);
    push(stk, 8);
    REQUIRE(pop(stk) == 8);
    REQUIRE(pop(stk) == 13);
    REQUIRE(pop(stk) == 21);
    REQUIRE(pop(stk) == 34);
    REQUIRE(pop(stk) == 55);
}

TEST_CASE("Function: all 3", "[given]") {
    std::stack<int> stk;

    REQUIRE(isEmpty(stk) == true);

    push(stk, -10);
    push(stk, -24);

    REQUIRE(pop(stk) == -24);
    REQUIRE(getSize(stk) == 1);
}

TEST_CASE("Function: all 4", "[given]") {
    std::stack<int> stk;

    push(stk, 0);
    push(stk, 0);
    push(stk, 0);

    REQUIRE(pop(stk) == 0);

    push(stk, 14);
    push(stk, 14);

    REQUIRE(pop(stk) == 14);
    REQUIRE(pop(stk) == 14);
    REQUIRE(pop(stk) == 0);

    push(stk, 15);

    REQUIRE(getSize(stk) == 2);
    REQUIRE(isEmpty(stk) == false);
}
