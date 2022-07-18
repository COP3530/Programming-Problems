# Andrewfied Dijkstra algorithm

## Problem Statement  

A graph is provided as a vector of strings. Write a function with the following signature: `int dijkstra(vector<string>& graph)` that takes in as input a graph and returns the shortest path between vertices `s` and `t`. If no path exists between `s` and `t`, then return `-1`. The details of the graph as a vector of strings are as follows: 

- The start position is represented by a `s` and will always be the first character of the first string.
- The end position is represented by a `t` and will always be the final character of the final string.
- a `.` character represents that you cannot visit this vertex in the graph
- all other characters will be numeric characters `1-9` which represents the cost of moving to that vertex.
- There is no cost in moving to the destination (`t`) character.
- **Adjacent** characters are those immediately horizontal or vertical from the current character (diagonal moves are not allowed).

### Sample Input
```c++
s3153   
1.424  
22.3t
```

### Sample Output
```c++
13
```

### Explanation 
- The shortest path from `s` to `t` follows s -> 3 -> 1 -> 4 -> 2 -> 3 -> t, which totals 13

### Constraints
- 0 < *graph.size()* < 100
- 1 < *graph[0].length()* < 100
- *graph[i].length()* is the same for all 0 <= *i* < *graph.size()*

### Problem Attributes
- Author: Andrew Penton
- Difficulty: Hard (44-120 minutes)
- Date Created: 04/11/2022
- Last Modified: 04/11/2022

### Submission instructions
Code your solution in `src/andrewfied_dijkstra.h` and upload the `andrewfied_dijkstra.h` file on Canvas.

### Unit test instructions
To run unit tests, open terminal and go to the `andrewfied_dijkstra` directory. At this directory, run the following command:

`g++ -std=c++14 -Werror -Wuninitialized -o test test-unit/test.cpp && ./test`

This will show you which tests you pass. We encourage you to build your own tests.
