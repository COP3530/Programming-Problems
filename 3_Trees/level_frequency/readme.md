# Good Nodes

## Problem Statement
Given the root of a binary tree and a positive integer `k`, return the number of values that **appear in at least** `k` **levels of the tree**.

## Sample Test Cases

**Example 1:**

```c++
Input: root = [5, 5, 3, 3, null, 3, 1, 2, 3, 0, null, null, 2], k = 2
        5
     /     \
    5       3
   /       /  \
  3       3    1
 /  \    /      \
2    3  0        2
Output: 2
Explanation: The binary tree below shows that 5 appears at the level 0 and 1, and 3 appears at level 1, 2, and 3, so there are two values which appear in at least k = 2 different levels. 
Note that 2 appears twice at the bottom level, but it only appears in one level so it is not considered.
```

## Problem Attributes

- Author: Matthew DeGuzman
- Difficulty: Easy (10-20 minutes)
- Date Created: 05/01/23
- Last Modified: 05/01/23