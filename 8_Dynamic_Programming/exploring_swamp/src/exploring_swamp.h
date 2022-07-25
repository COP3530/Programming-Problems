/*
    Exploring the swamp

    Explorer Albert, a coffee bean aficionado, is passing through a swamp while simultaneously
    trying to pick up as many coffee beans as possible. The swamp is represented by a m x n 
    integer array, swamp, where swamp[i][j] represents the number of coffee beans located at
    row i, column j of the swamp.

    Albert always enters the swamp at row 0, column 0, and always exits the swamp at row m, 
    column n. At each step, he moves either one unit to the right (across one column) or one
    unit down (across one row). When Albert visits swamp[i][j], he collects all the coffee beans
     at that location. Write a function that returns the maximum number of coffee beans that
    Albert can collect as he traverses through the swamp. Implement your solution using dynamic 
    programming.

    Sample Input:
        5 3 4
        8 6 9
        1 3 2
    
    Sample Output:
        30
*/

#include <iostream>
#include <cstdlib>
#include <vector>

int swampExplorer(std::vector<std::vector<int>> &swamp_maze)
{
    // swamp_maze is the 2D grid of the swamp with coffee beans at each location
    // return the max beans that Albert can collect
    return 0;
}