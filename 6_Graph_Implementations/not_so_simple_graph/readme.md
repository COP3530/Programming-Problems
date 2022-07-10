# Not so simple Graph

## Problem Statement  
Write C++ code for implementing a Graph data structure that supports a directed graph with 
self-loops and parallel edges. You are expected to implement the following methods and a main
method is already built for you:

```c++
    void insertEdge(int from, int to, int weight);  
    bool isEdge(int from, int to);  
    int sumEdge(int from, int to);  
    vector<int> getWeight(int from, int to);  
    vector<int> getAdjacent(int vertex);    
```

- *insertEdge()* adds a new edge between the *from* and *to* vertex.
- *isEdge()* returns a boolean indicating true if there is an edge between the from and to vertex.
- *sumEdge()* returns the sum of weights of all edges connecting the *from* and *to* vertex. Returns 0 if no edges connect the two vertices.
- *getWeight()* returns a sorted vector containing all weights of the edges connecting the *from* and *to* vertex.
- *getAdjacent()* returns a sorted vector of all vertices that are connected to a vertex. Note that the values can be duplicates.

### Sample Input
```c++
7    
1 0 0 10  
1 0 1 20  
1 0 2 30  
2 0 0  
3 0 2  
4 0 1  
5 0  
```

### Sample Output
```c++
1
30
20
0 1 2
```

### Explanation 
- **Input**: Line 1 denotes the number of lines (n) that follow. Each next line denotes a call to one of the five functions you need to
   implement. The first letter of every line denotes which method is getting called: e.g. 1 is *insertEdge()*, 2 is *isEdge()*, 3 
   is *sumEdge()*, 4 is *getWeight()*, 5 is *getAdjacent()*. This is followed with the necessary parameters. 
- **Output**: Output is the printing of returned  values from respective function calls that return some value and are not of *void* return type. 

### Problem Attributes
- Author: Amanpreet Kapoor
- Difficulty: Medium (30-44 minutes)
- Date Created: 03/28/2022
- Last Modified: 03/28/2022

### Submission instructions
Code your solution in `src/not_so_simple_graph.h` and upload the `not_so_simple_graph.h` file on Canvas.

### Unit test instructions
To run unit tests, open terminal and go to the `not_so_simple_graph` directory. At this directory, run the following command:

`g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test`

This will show you which tests you pass. We encourage you to build your own tests.
