## Problem Statement
Fill in the missing code to complete this implementation of the Bellman-Ford algorithm.

* Implement edge relaxation.
* Implement the final loop to check for negative weight cycles.
* Return the vector of distances.
If there is a negative weight cycle, return an empty vector.

The first line of input is `n m s`, where `n` is the number of vertices in the graph, `m` is the number of edges, and `s` is the source/starting vertex for Bellman-Ford.
The following `m` lines are of the form `f t w`. Each line describes an edge from `f` to `t` with weight `w`.
&nbsp;
### Example 1:
>> **Input:** \
> `4 4` \
> `0 1 4` \
> `0 2 3` \
> `1 3 2` \
> `2 1 -2`

>> **Output:** \
> `[0, 1, 3, 3]`

### Difficulty
Shorts (&lt;10 minutes)

### Author
Eugene Li

### Date Created
04/20/2023