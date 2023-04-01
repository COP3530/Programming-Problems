# Count Good Nodes

## Problem Statement

Given a binary tree root, a node `X` in the tree is named **good** if the value of `X` is *even* and in the path from root to `X` there are no nodes with a value *less* than `X`.

Return the number of **good** nodes in the binary tree.

## Sample Test Cases

**Example 1:**

```text
Input: [5, 5, 3, 3, null, 8, 1, 2, 3, 0, 0, null, 2]
Output: 3
Explanation: There are three nodes at the bottom level which are even and there exists no nodes with lesser value on the root path
```

## Constraints

- -10^4 <= `TreeNode.val` <= 10^4
- The given root will never be null

## Problem Attributes

- Author: Matthew DeGuzman
- Difficulty: Easy (20-40 minutes)
- Date Created: 04/01/23
- Last Modified: 04/01/23
