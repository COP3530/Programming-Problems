# Exploring the swamp

## Problem Statement  

Explorer Albert, a coffee bean aficionado, is passing through a swamp while simultaneously trying to pick up as many coffee beans as 
possible. The swamp is represented by a `m x n` integer array, `swamp`, where `swamp[i][j]` represents the number of 
coffee beans located at row `i`, column `j` of the swamp. Albert always enters the swamp at row `0`, column `0`, and always exits 
the swamp at row `m`, column `n`. At each step, he moves either one unit to the right (across one column) or one unit down (across one row).

When Albert visits `swamp[i][j]`, he collects all the coffee beans at that location. Write a function that returns the maximum number of 
coffee beans that Albert can collect as he traverses through the swamp. Implement your solution using dynamic programming.  


### Sample Input
```c++
3 3  
5 3 4  
8 6 9  
1 3 2  
```

### Sample Output
```c++
30
```

### Explanation 
- **Input** consists of m+1 lines
  -  Line 1 of input denotes two integers `m` representing number of rows and `n` representing number of columns.
  - `m` lines follow in the input, each line repesenting a row in the grid and containing `n` integers each representing the number of coffee beans.
- **Output** is the global optimal.
  - In the example input, it is calculated as 5 + 8 + 6 + 9 + 2 = 30 which is the maximum number of coffee beans that Albert can pick up.

### Problem Attributes
- Author: Victoria Mei
- Difficulty: Hard (44-120 minutes)
- Date Created: 04/16/2022
- Last Modified: 12/04/2022

### Submission instructions
Code your solution in `src/cop3530_9_1.h` and upload the `cop3530_9_1.h` file on Canvas.

### Unit test instructions
To run unit tests, open terminal and go to the `exploring_swamp` directory. At this directory, run the following command:

`g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test`

This will show you which tests you pass. We encourage you to build your own tests.
