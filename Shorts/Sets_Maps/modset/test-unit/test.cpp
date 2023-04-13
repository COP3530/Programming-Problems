#include "../src/modset.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

/*
        To check output (At the modset directory):
                g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test
*/

TEST_CASE("Function: insert all", "[given]") {
    Set s = Set(5);
    s.insert("Alice");      // length 5 => index 0
    s.insert("Aakanksha");  // length 9 => index 4
    s.insert("Wei");        // length 3 => index 3
    s.insert("Carlos");     // length 6 => index 1

    REQUIRE(s._set[0] == "Alice");
    REQUIRE(s._set[1] == "Carlos");
    REQUIRE(s._set[2] == "empty");
    REQUIRE(s._set[3] == "Wei");
    REQUIRE(s._set[4] == "Aakanksha");
    REQUIRE(s.size == 4);
}

TEST_CASE("Function: insert all, past capacity", "[given]") {
    Set s = Set(5);
    s.insert("Alice");      // length 5 => index 0
    s.insert("Aakanksha");  // length 9 => index 4
    s.insert("Wei");        // length 3 => index 3
    s.insert("Carlos");     // length 6 => index 1
    s.insert("Abidemi");    // length 7 => index 2

    s.insert("Sergei");  // past capacity, no effect
    s.insert("Jakub");   // past capacity, no effect

    REQUIRE(s._set[0] == "Alice");
    REQUIRE(s._set[1] == "Carlos");
    REQUIRE(s._set[2] == "Abidemi");
    REQUIRE(s._set[3] == "Wei");
    REQUIRE(s._set[4] == "Aakanksha");
    REQUIRE(s.size == 5);
}

TEST_CASE("Function: insert all, duplicates", "[given]") {
    Set s = Set(5);
    s.insert("Alice");      // length 5 => index 0
    s.insert("Aakanksha");  // length 9 => index 4
    s.insert("Alice");      // duplicate
    s.insert("Wei");        // length 3 => index 3
    s.insert("Carlos");     // length 6 => index 1
    s.insert("Carlos");     // duplicate
    s.insert("Abidemi");    // length 7 => index 2
    s.insert("Abidemi");    // duplicate

    REQUIRE(s._set[0] == "Alice");
    REQUIRE(s._set[1] == "Carlos");
    REQUIRE(s._set[2] == "Abidemi");
    REQUIRE(s._set[3] == "Wei");
    REQUIRE(s._set[4] == "Aakanksha");
    REQUIRE(s.size == 5);
}

TEST_CASE("Function: insert all, collisions", "[given]") {
    Set s = Set(5);
    s.insert("Alice");      // length 5 => index 0
    s.insert("Aakanksha");  // length 9 => index 4
    s.insert("Wei");        // length 3 => index 3
    s.insert("Bob");        // length 3 => index 3 => index 1
    s.insert("Carlos");     // length 6 => index 1 => index 2

    REQUIRE(s._set[0] == "Alice");
    REQUIRE(s._set[1] == "Bob");
    REQUIRE(s._set[2] == "Carlos");
    REQUIRE(s._set[3] == "Wei");
    REQUIRE(s._set[4] == "Aakanksha");
    REQUIRE(s.size == 5);
}

TEST_CASE("Function: insert all, duplicates and collisions", "[given]") {
    Set s = Set(5);
    s.insert("Alice");      // length 5 => index 0
    s.insert("Aakanksha");  // length 9 => index 4
    s.insert("Alice");      // duplicate
    s.insert("Wei");        // length 3 => index 3
    s.insert("Bob");        // length 3 => index 1
    s.insert("Bob");        // duplicate
    s.insert("Carlos");     // length 6 => index 1 => index 2
    s.insert("Carlos");     // duplicate

    REQUIRE(s._set[0] == "Alice");
    REQUIRE(s._set[1] == "Bob");
    REQUIRE(s._set[2] == "Carlos");
    REQUIRE(s._set[3] == "Wei");
    REQUIRE(s._set[4] == "Aakanksha");
    REQUIRE(s.size == 5);
}