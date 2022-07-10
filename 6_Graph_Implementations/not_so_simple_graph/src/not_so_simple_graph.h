/*
    Not so simple Graph

    Write C++ code for implementing a Graph data structure that supports a directed graph with 
    self-loops and parallel edges. You are expected to implement the following methods and a main
    method is already built for you:

        void *insertEdge*(int from, int to, int weight);   // 1
        bool *isEdge*(int from, int to);                   // 2
        int *sumEdge*(int from, int to);                   // 3
        vector<int> *getWeight*(int from, int to);         // 4
        vector<int> *getAdjacent*(int vertex);             // 5


    Sample Input:
        7    
        1 0 0 10  
        1 0 1 20 
        1 0 2 30
        2 0 0  
        3 0 2 
        4 0 1
        5 0
    
    Sample Output:
        1  
        30
        20 
        0 1 2
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

class Graph
{
   private:
      // TODO: Graph structure that supports parallel edges and self-loops

    public:
      void insertEdge(int from, int to, int weight);  
      bool isEdge(int from, int to);  
      int sumEdge(int from, int to); 
      std::vector<int> getWeight(int from, int to); 
      std::vector<int> getAdjacent(int vertex); 
};

void Graph::insertEdge(int from, int to, int weight) 
{
   /*
        TODO: insertEdge() adds a new edge between the from 
        and to vertex.
   */

}
        
bool Graph::isEdge(int from, int to) 
{
    /*
        TODO: isEdge() returns a boolean indicating true 
        if there is an edge between the from and to vertex
    */
    
    return true;
}

int Graph::sumEdge(int from, int to)
{
    /*
        TODO: sumEdge() returns the sum of weights of all edges 
        connecting the from and to vertex. Returns 0 if no edges 
        connect the two vertices.
    */
    return 0;
}

std::vector<int> Graph::getWeight(int from, int to)
{
    /*
        TODO: getWeight() returns a sorted vector containing all 
        weights of the edges connecting the from and to vertex
    */
    return std::vector<int>();
}

std::vector<int> Graph::getAdjacent(int vertex) 
{
    /*
        TODO: getAdjacent() returns a sorted vector of all vertices
        that are connected to a vertex
    */
    return std::vector<int>();
}
