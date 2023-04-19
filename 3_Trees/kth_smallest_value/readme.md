# Kth Smallest Value

## Problem Statement
Suppose you are given a 1-indexed binary search tree consisting of unique strings.

Given the `root` of the binary search tree, and an integer `k`, return the <code>k<sup>th</sup></code> _smallest element_ _of all nodes in the tree_ based on **alphabetical ordering**.

## Sample Test Cases

**Example 1:**

```text
Input: root = ["alpha", "beta", "cat"], k = 1

alpha
 \
  beta
   \
    cat
Output: "alpha"
Explanation: Since k = 1, the first (1st) smallest element in alphabetical order is “alpha”.
```

**Example 2:**

```text
Input: root = ["beta", "azimuth", "cat", "alpha"], k = 3

      beta
     /    \
  azimuth  cat
   / 
 alpha	
Output: "beta"
Explanation: The 3rd smallest element is “beta” according to alphabetical ordering.
```

**Example 3:**

```text
Input: root = ["zebra", "bloom", "zig", "ape", "fancy"], k = 2

     zebra
     /   \
  bloom   zig
   /   \
 ape    fancy 
Output: "bloom"
Explanation: The 2nd smallest element of all the elements in the tree is “bloom”.
```

**Example 4:**

```text
Input: root = [“mossy”, “forty”, “zap”, “empty”, “boost”, “accent”, “abort”, “apple”], k = 5

         mossy
         /    \
      forty   zap
       /    
     empty
      /
    boost
     /
  accent
   /  \ 
abort  apple
Output: “empty”
Explanation: The 5th smallest element, according to alphabetical order, is “empty”.
```

**Example 5:**

```text
Input: root = [“igloo”, “doll”, “otter”, “air”, “eat”, “oil”, “wolf”], k = 6

     igloo
    /     \
  doll    otter
  /   \   /   \
air  eat oil wolf
Output: “otter”
Explanation: The 6th smallest element in the tree is “otter”.
```

## Constraints

- The number of nodes in the tree is `n`
- Each node in the tree consists of lowercase English letters
- 1 ≤ `k` ≤ `n` ≤ 10<sup>4</sup>
- 1 ≤ `Node.val.length` ≤ 10<sup>4</sup>

## Problem Attributes

- Author: Meaghan Estrada
- Difficulty: Easy (20-25 minutes)
- Date Created: 04/03/23
- Last Modified: 04/12/23
