# Four Digits

## Problem Statement

You are given a string `digits`, where each character represents an integer.

You need to find **all** unique integers that follow the given requirements:

- The integer consists of the concatenation of *four* characters from `digits` in any arbitrary order.
- The integer does **not** have leading zeros.
- The integer is *odd*.
- Each digit in the integer is *distinct*.

For example, suppose `digits` = "1234", then the integers "3421" and "1243" satisfy the above conditions.

Write a function that takes in as input a string called `digits` and returns a **sorted** array of unique integers.

## Sample Test Cases

**Example 1:**

```c++
Input: digits = "0123"
Output: [1023, 1203, 2013, 2031, 2103, 2301, 3021, 3201]
Explanation: Each integer satisfies the conditions and is sorted.
```

**Example 2:**

```c++
Input: digits = "11220"
Output: [1021, 1201, 1221, 2011, 2021, 2101, 2121, 2201, 2211] 
Explanation: Each integer satisfies the conditions and is sorted.
```

**Example 3:**

```c++
Input: digits = "0022"
Output: [] 
Explanation: None of the four digit combinations can satisfy the conditions as we don't have four unique values in digits.
```

## Constraints

- 4 <= `digits.length` <= 10^5
- `digits[i]` represents an integer from 0-9 (inclusive)

## Problem Attributes

- Author: Matthew DeGuzman
- Difficulty: Easy (40-60 minutes)
- Date Created: 03/27/23
- Last Modified: 03/27/23
