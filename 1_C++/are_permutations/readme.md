# Are permutations

## Problem Statement

In this problem, you are given an array of strings `strs` such that each string only consists of lowercase letters. Write a method that returns true if **all** the strings in `strs` are *permutations* of each other.

### Sample Test Cases

**Example 1:**

```text
Input: strs = [“abba”, “bbaa”, “aabb”]
Output: true
Explanation: Each string can be rearranged to match another
```

**Example 2:**

```text
Input: strs = [“abc”, “abbc”]
Output: false
Explanation: “abc” cannot be rearranged to “abbc” because it only has one ‘b’
```

**Example 3:**

```text
Input: strs = [“gator”, “rotag”, “sator”]
Output: false
```

**Example 4:**

```text
Input: strs = [“shoes”, “sheso”, “hesos”, “shooes”, “shoe”]
Output: false
```

**Example 5:**

```text
Input: strs = [""]
Output: true
```

### Constraints

- 1 <= `strs.length` <= 10^4
- 0 <= `strs[i].size` <= 100
- `strs[i]` only consists of lowercase letters

### Problem Attributes

- Author: Matthew DeGuzman
- Difficulty: Easy (15-30 minutes)
- Date Created: 02/18/2023
- Last Modified: 02/22/2023
