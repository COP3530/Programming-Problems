# Degree of a String

## Problem Statement

Given a string `str`, the **degree** of this string is defined as the maximum frequency of any one of its characters.

Your task is to find the **minimum** length of a **contiguous** substring of `str`, that has the same degree as `str`.

## Sample Test Cases

**Example 1:**

```text
Input: str = “fl1pthat”
Output: 4
Explanation: The maximum frequency is 2, and the smallest contiguous substring that has frequency 2 is “that” which has length 4.
```

**Example 2:**

```text
Input: str = “hiHighh”
Output: 7
Explanation: The maximum frequency is 3. Note that 'H' and 'h' are considered different characters, so 'h' has a frequency of 3 and 'H' has frequency of 1. Therefore, the smallest contiguous substring with the same degree as str is "hiHighh" which has length 7.
```

**Example 3:**

```text
Input: str = "stylish"
Output: 6
```

**Example 4:**

```text
Input: str = “1andOnLY”
Output: 4
```

**Example 5:**

```text
Input: str = “STANL00NA”
Output: 2
```

## Constraints

- 0 <= `str.length` <= 10^4
- `str` consists only of alphanumeric characters

## Problem Attributes

- Author: Matthew DeGuzman
- Difficulty: Medium (30-60 minutes)
- Date Created: 03/22/23
- Last Modified: 03/22/23
