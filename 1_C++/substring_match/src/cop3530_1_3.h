/*
    Substring Match

    Suppose you are given an array of strings str.
    Return all strings in str that is a substring of any other string in str only if all returned strings have the same length.
    You can return the answer in an array of matched strings in any order.
    Definition: A substring is a contiguous sequence of characters within a string.

    Example 1:
    Input: str = [“place”, “misplacement”, “great”, “greatest”]
    Output: [“place”, “great”]
    Explanation: “place” is a substring of “misplacement” and “great” is a substring of “greatest”. Both substrings “place” and “great” have the same length.

    Example 2:
    Input: str = [“red”, “blue”, “rd”]
    Output: [ ]
    Explanation: There does not exist a substring of another string. As a result, there exist no substrings that are the same length.

    Example 3:
    Input: str = [“bat”, “batman”, “batmans”, “cat”, “category”]
    Output: [ ]
    Explanation: “bat” is a substring of “batman” and “batmans”. “batman” is a substring of “batmans”. “cat” is a substring of “category”. The found substrings “bat”, “batman”, and “cat” are not the same length; we do not return anything.

    Example 4:
    Input: str = [“sing”, “singapore”, “singing”]
    Output: [“sing”]
    Explanation: “sing” is a substring of “singapore” and “singing”. Since there are no other substrings to compare “sing” to, we return the one substring “sing”.

    Example 5:
    Input: str = [ ]
    Output: [ ]
    Explanation: The given array of strings str is empty.
*/

#include <iostream>
#include <string>
#include <vector>

void substringMatch(std::vector<std::string> str, std::vector<std::string> result){
    // Your code here

}
