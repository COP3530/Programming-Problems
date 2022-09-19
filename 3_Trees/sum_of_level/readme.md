# Sum of Level

## Problem Statement
Given the root node of an non-empty Binary Search Tree and a certain level, `L`, write a function that returns the sum of all the TreeNode values at level `L`. If there are no nodes at level `L`, return -1. Assume the levels to start at 0, i.e. the root node is located at level 0.

### Constraints
- Levels >= 0
- Value(TreeNode) is an integer and Value(TreeNode) is unique.     
- Sum of nodes in a level will always be an integer. 

### Sample Input
```c++
4  
2 1 3 4  
0
```

### Sample Output
```c++
2
```

### Explanation  
- **Input**: Line 1 denotes the number of elements to be inserted into the tree. Line 2 denotes the elements inserted in that order in a BST. Line 3 denotes the Level, `L`. The tree for sample input is as follows:  

![alt text. Tree for sample image with values inserted as 2, 1, 3, 4](https://drive.google.com/uc?export=view&id=1Zfq2d9aLwwHCQyT9G1-y7v9ykDjami6w)

- **Output**: The sum of all nodes at the level, `L`. 

### Problem Attributes
- Author: Amanpreet Kapoor
- Difficulty: Medium (30-44 minutes)
- Date Created: 01/31/2022
- Last Modified: 01/31/2022

### Submission instructions
Code your solution in `src/cop3530_3_1.h` and upload the `cop3530_3_1.h` file on Canvas.

### Unit test instructions
To run unit tests, open terminal and go to the `sum_of_level` directory. At this directory, run the following command:

`g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test`

This will show you which tests you pass. We encourage you to build your own tests.
