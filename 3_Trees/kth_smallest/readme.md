# Kth Smallest

## Problem Statement
Suppose you are given a binary search tree consisting of unique strings. Given the `root` of this binary search tree, 
and an integer `k`, return the <code>k<sup>th</sup></code> *smallest element* of all nodes in the tree based on 
**alphabetical ordering**. 

## Sample Test Cases

**Example 1:**

```c++
Input: root = ["alpha", "beta", "cat"], k = 1 

* Note: Assume the elements in the array represent order of insertion in the BST.

alpha
 \
  beta
   \
    cat

Output: "alpha"
Explanation: Since k = 1, the first smallest element in alphabetical order is “alpha”.
```

**Example 2:**

```c++
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

```c++
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

```c++
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

```c++
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

- The tree has `n` nodes.
- Each node in the tree consists of lowercase English letters.
- 1 ≤ `k` ≤ `n` ≤ 10<sup>4</sup>
- 1 ≤ `Node.val.length` ≤ 10<sup>4</sup>

## Problem Attributes

- Author: Meaghan Estrada
- Difficulty: Easy (20-40 minutes)
- Date Created: 04/03/23
- Last Modified: 04/12/23
