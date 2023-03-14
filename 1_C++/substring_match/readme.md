# Substring Match

## Problem Statement

Suppose you are given an array of strings `str`. Return all strings in `str` that is a substring of any other string in `str` **only if** all returned strings have the same length.

You can return the answer in an array of matched strings in any order.

**Definition**: A **substring** is a contiguous sequence of characters within a string.

## Sample Test Cases

**Example 1:**
```text
Input: str = [“place”, “misplacement”, “great”, "greatest"]
Output: ["place", "great"]
Explanation: “place” is a substring of “misplacement” and “great” is a substring of “greatest”. Both substrings “place” and “great” have the same length.
```
**Example 2:**

```text
Input: str = [“red”, “blue”, “rd”]
Output: [ ] 
Explanation: There does not exist a substring of another string. As a result, there exist no substrings that are the same length.
```

**Example 3:**

```text
Input: str = [“bat”, “batman”, “batmans”, “cat”, “category”]
Output: [ ]
Explanation: “bat” is a substring of “batman” and “batmans”. “batman” is a substring of “batmans”. “cat” is a substring of “category”. The found substrings “bat”, “batman”, and “cat” are not the same length; we do not return anything.
```

**Example 4:**

```text
Input: str = [“sing”, “singapore”, “singing”]
Output:  [“sing”]
Explanation: “sing” is a substring of “singapore” and “singing”. Since there are no other substrings to compare “sing” to, we return the one substring “sing”.
```

**Example 5:**

```text
Input: str = [ ]
Output: [ ]
Explanation: The given array of strings str is empty.
```
### Constraints

- All the strings in `str` are unique
- `str[i]` contain only lowercase English letters
- 0 ≤ `str.length` ≤ 100
- `str[i].size` ≥ 1

### Problem Attributes

- Author: Meaghan Estrada
- Difficulty: Medium (20-30 minutes)
- Date Created: 3/6/2023
- Last Modified: 3/8/2023
