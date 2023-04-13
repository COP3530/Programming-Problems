#include "../src/mineral_sweeper.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
	To check output (At the mineral_sweeper directory):
		g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: updateValues 1", "[given]") {
    vector<string> student = {
        "00#0",
        "0##0",
        "#000",
        "#0##"
    };
    vector<string> expected = {
        "13#2",
        "2##2",
        "#543",
        "#3##"
    };
    updateValues(student);

    REQUIRE(student == expected);
}

TEST_CASE("Function: updateValues 2", "[given]") {
    vector<string> student = {
        "##0#",
        "#00#",
        "0###",
        "0#00"
    };
    vector<string> expected = {
        "##3#",
        "#56#",
        "3###",
        "2#42"
    };
    updateValues(student);

    REQUIRE(student == expected);
}

TEST_CASE("Function: updateValues 3", "[given]") {
    vector<string> student = {
        "0#0#0",
        "#0#0#",
        "0##0#",
        "#0##0",
        "##0##",
        "0##0#"
    };
    vector<string> expected = {
        "2#3#2",
        "#5#5#",
        "3##6#",
        "#6##4",
        "##6##",
        "3##4#"
    };
    updateValues(student);

    REQUIRE(student == expected);
}

TEST_CASE("Function: updateValues 4", "[given]") {
    vector<string> student = {
        "###00#0##",
        "#0##00###",
        "####00000",
        "##0000###",
        "##0#0#000",
        "0##0#00##",
        "##0##0#0#",
        "0##0##00#",
        "0####00#0"
    };
    vector<string> expected = {
        "###32#4##",
        "#8##32###",
        "####22464",
        "##6332###",
        "##5#3#454",
        "5##5#43##",
        "##6##5#5#",
        "4##7##34#",
        "2####32#2"
    };
    updateValues(student);

    REQUIRE(student == expected);
}

TEST_CASE("Function: updateValues 5", "[given]") {
    vector<string> student = {
        "##0#0",
        "0#0##",
        "##00#",
        "00###",
        "#00##"

    };
    vector<string> expected = {
        "##4#3",
        "5#5##",
        "##56#",
        "34###",
        "#23##"
    };
    updateValues(student);

    REQUIRE(student == expected);
}