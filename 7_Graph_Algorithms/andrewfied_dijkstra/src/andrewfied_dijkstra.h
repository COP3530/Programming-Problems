/*
    Quiz 10: Andrewfied Dijkstra algorithm

    A graph is provided as a vector of strings. Write a function with the following signature: 
    int dijkstra(vector<string>& graph) that takes in as input a graph and returns the shortest 
    path between vertices s and t. If no path exists between s and t, then return -1. The details
     of the graph as a vector of strings are as follows:
     
    1. The start position is represented by a 's' and will always be the first character of the first string.
    2. The end position is represented by a 't' and will always be the final character of the final string.
    3. a '.' character represents that you cannot visit this vertex in the graph
    4. all other characters will be numeric characters '1'-'9' which represents the cost of moving to that vertex.
    5. There is no cost in moving to the destination ('t') character.
    6. Adjacent characters are those immediately horizontal or vertical from the current character (diagonal moves are not allowed).

    Sample Input:
        s3153
        1.424
        22.3t
    
    Sample Output:
        13
        
    Explanation:
        The shortest path from 's' to 't' follows s -> 3 -> 1 -> 4 -> 2 -> 3 -> t, which totals 13
*/

#include <iostream>
#include <vector>

int dijkstra(std::vector<std::string> &graph) 
{
	return -1;
}
