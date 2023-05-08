# Four-digit numbers

## Problem Statement

You are given a string of integers `digits`, where each character represents an integer.

You need to find **all** the unique integers that follow the given requirements:

- The integer consists of the concatenation of *four* elements from digits in any arbitrary order.
- The integer does **not** have leading zeros.
- The integer is *odd*.

For example, suppose `digits` = “1234”, then the integers 3421 and 1243 satisfy the above conditions.

Return a **sorted** array of the unique integers.

## Sample Test Cases

**Example 1:**

```text
Input: digits = “0123”
Output: [1023, 1203, 2013, 2031, 2103, 2301, 3021]
Explanation: Each integer satisfies the conditions and is sorted
```

**Example 2:**

```text
Input: digits = “11220”
Output: [1021, 1201, 1221, 2011, 2021, 2101, 2121, 2201, 2211] 
```

**Example 3:**

```text
Input: digits = “0022”
Output: [] 
```

## Constraints

- 4 <= `digits.length` <= 10^5
- `digits[i]` represents an integer from 0-9 (inclusive)

## Problem Attributes

- Author: Matthew DeGuzman
- Difficulty: Easy (30-60 minutes)
- Date Created: 03/27/23
- Last Modified: 03/27/23
