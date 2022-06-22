## Problem Statement  

Write C++ code for a function, *extractMax()* that takes as input a max heap, *arr* represented as an integer array and the size of the array, *size*. The function deletes the maximum element in the max heap and **returns** the new max heap array after deletion.

### Constraints
- *size* >= 1  
- The array passed into the *extractMax()* satisfies the max heap constraints.

### Sample Input
> `3`  
> `9 8 7`

### Sample Output
> `8 7`

### Explanation  
- **Input**: Line 1 denotes the number of elements, *size* in the heap. Line 2 denotes the contents of the max heap that is passed into *extractMax()* function.
- **Output**: Output is the max heap after deletion. 

### Problem Attributes
- Author: Amanpreet Kapoor
- Difficulty: Medium (30-44 minutes)
- Date Created: 03/01/2022
- Last Modified: 03/01/2022


### Submission instructions
Code your solution in src/extract_max.h and upload the extract_max.h file on Canvas.


### Unit test instructions
To run unit tests, open terminal and go to the extract_max directory. At this directory, run the following command:

`g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test`

This will show you which tests you pass. We encourage you to build your own tests.
