# Valid Path

## Problem Statement
Suppose you are given a directed graph with `n` vertices represented as an edge list, where each vertex is labeled from `0 to n - 1 (inclusive)`. Each edge in the graph is represented in a vector of pairs named `edges`, where **edges[i]** = **[u<sub>i</sub>, v<sub>i</sub>]** denotes a uni-directional edge between vertex **u<sub>i</sub>** and vertex **v<sub>i</sub>**.

Every vertex pair is connected by **at most one** edge, and there are no self-loops nor parallel edges.

Determine if there is a valid path that exists from the given vertex source to the given vertex destination. Return **true** if a valid path exists, and **false** otherwise.

## Sample Test Cases

**Example 1:**

```text
Input: n = 7, edges = [{0, 1}, {0, 2}, {1, 3}, {1, 2}, {4, 5}, {4, 6}], source = 0, destination = 2
Output: true

Explanation: There are two paths from vertex 0 to vertex 2: 
0 → 1 → 2
0 → 2
```

**Example 2:**

```text
Input: n = 7, edges = [{0, 1}, {0, 2}, {1, 3}, {1, 2}, {4, 5}, {4, 6}], source = 4, destination = 6
Output: true

Explanation: There is a path from vertex 4 to vertex 6 in the second component.
```

**Example 3:**

```text
Input: n = 7, edges = [{0, 1}, {0, 2}, {1, 3}, {1, 2}, {4, 5}, {4, 6}], source = 0, destination = 5
Output: false

Explanation: There is no path from vertex 0 to vertex 5 due to two disconnected components.
```

**Example 4:**

```text
Input: n = 3, edges = [{0, 1}, {0, 2}, {1, 2}], source = 1, destination = 0
Output: false

Explanation: There is no path from vertex 1 to vertex 0. There is only a path from vertex 0 to vertex 1.
```
**Example 5:**

```text
Input: n = 4, edges = [], source = 1, destination = 3
Output: false

Explanation: There are no edges in the graph, so there is no valid path between vertex 1 and vertex 3.
```
## Constraints

- 2 ≤ `n` ≤ 2 * 10<sup>4</sup>
- 0 ≤ `edges.length` ≤ 2 * 10<sup>4</sup>
- `edges[i].length` == 2
- 0 ≤ **u**<sub>**i**</sub> , **v**<sub>**i**</sub>  ≤ n - 1
- **u**<sub>**i**</sub> != **v**<sub>**i**</sub>
- 0 ≤ `source, destination` ≤ n - 1
- There are no duplicate edges
- There are no self loops


## Problem Attributes

- Author: Meaghan Estrada
- Difficulty: Easy (10-20 minutes)
- Date Created: 04/19/23
- Last Modified: 04/19/23
