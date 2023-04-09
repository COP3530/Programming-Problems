# Andrewfied Maze Escape

## Problem Statement  

Sometimes when dealing with graphs, it is easiest to leave it in its input format 
rather than creating another structure like an adjacency list/matrix. You are given 
a graph represented as a vector of strings. Write a function 
`traverse(vector<string>& graph)` that takes as input a graph and returns the length 
of the shortest path between vertices `s` and `t`. If no path exists between `s` and 
`t`, then return `-1`. The details of the graph as a vector of strings are as follows:

- The start position is represented by a 's' and will always be the first character of 
the first string (`graph[0][0]`). 
- The end position is represented by a 't' and will always be the last character of the 
final string (`graph[graph.size()-1][graph[0].length()-1]`).
- A '.' character represents a normal vertex in the graph.
- A '#' character represents that you cannot visit this vertex in the graph (or there 
is no vertex at this position).
- Adjacent vertices are those immediately horizontal or vertical from the current vertex 
(diagonal moves are not allowed).
- The cost of moving along one edge (from one vertex to an adjacent vertex) is always 1 
(i.e. this is an unweighted graph).

### Sample Input
```c++
s#.#.   
.#...  
...#t    
```

### Sample Output
```c++
8
```

### Explanation 
- The shortest path from 's' to 't' involves 8 steps between adjacent vertices (including 
the initial step from 's' and the final step to 't').  


### Constraints
- 0 < *graph.size()* <= 100
- 0 < *graph[0].length()* <= 100
- *graph[i].length()* is the same for all 0 <= *i* < *graph.size()

### Problem Attributes
- Author: Andrew Penton
- Difficulty: Medium (30-90 minutes)
- Date Created: 11/12/2022
- Last Modified: 11/12/2022

### Submission instructions
Code your solution in `src/maze_escape.h` and upload the `maze_escape.h` file on Canvas.

### Unit test instructions
To run unit tests, open terminal and go to the `andrewfied_maze_escape` directory. At this directory, 
run the following command:

`g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test`

This will show you which tests you pass. We encourage you to build your own tests.
