# Valid Path

## Problem Statement
Suppose you are given a directed graph with `n` vertices represented as an *edge list*, where each vertex is labeled from `0 to n - 1 (inclusive)`. Each edge in the graph is represented as a vector of pairs named `edges`, where **edges[i]** = **[u<sub>i</sub>, v<sub>i</sub>]** denotes a uni-directional edge between vertex **u<sub>i</sub>** and vertex **v<sub>i</sub>**.

Every vertex pair is connected by **at most one** edge (no parallel edges), and there are no self-loops.

Determine if there is a valid path that exists from the given vertex `source` to the given vertex `destination`. Return **true** if a valid path exists, and **false** otherwise.

## Sample Test Cases

**Example 1:**

```c++
Input: n = 7, edges = [{0, 1}, {0, 2}, {1, 3}, {1, 2}, {4, 5}, {4, 6}], source = 0, destination = 2
Output: true

Explanation: There are two paths from vertex 0 to vertex 2: 
0 → 1 → 2
0 → 2
```

**Example 2:**

```c++
Input: n = 7, edges = [{0, 1}, {0, 2}, {1, 3}, {1, 2}, {4, 5}, {4, 6}], source = 4, destination = 6
Output: true

Explanation: There is a path from vertex 4 to vertex 6 in the second component.
```

**Example 3:**

```c++
Input: n = 7, edges = [{0, 1}, {0, 2}, {1, 3}, {1, 2}, {4, 5}, {4, 6}], source = 0, destination = 5
Output: false

Explanation: There is no path from vertex 0 to vertex 5 due to two disconnected components.
```

**Example 4:**

```c++
Input: n = 3, edges = [{0, 1}, {0, 2}, {1, 2}], source = 1, destination = 0
Output: false

Explanation: Although, there is a path from vertex 0 to vertex 1, there is no path from vertex 1 to vertex 0.
```

**Example 5:**

```c++
Input: n = 4, edges = [], source = 1, destination = 3
Output: false

Explanation: There are no edges in the graph, so there is no valid path between vertex 1 and vertex 3.
```

## Constraints

- 2 ≤ `n` ≤ 2 * 10<sup>4</sup>
- 0 ≤ `edges.length` ≤ 2 * 10<sup>4</sup>
- `edges[i].length` == 2
- 0 ≤ **u**<sub>**i**</sub> , **v**<sub>**i**</sub>  ≤ n - 1 
- **u**<sub>**i**</sub> != **v**<sub>**i**</sub> (no self loops)
- 0 ≤ `source, destination` ≤ n - 1
- There are no parallel edges

## Problem Attributes
- Author: Meaghan Estrada
- Difficulty: Easy (20-40 minutes)
- Date Created: 04/19/23
- Last Modified: 04/19/23
