# Hidden Gator

## Problem Statement

In the Marston Science Library, there are `n` students labeled from `1` to `n`. There is a rumor that one of these students is secretly a gator.

If the gator exists, then:

1. The gator knows nobody.
2. Everybody (except for the gator) knows the gator.

There is **at most one** student who could be a gator and satisfies both properties.

You are given a vector `know` of knowledge relations which are also vectors. A knowledge relation `know[i] = [a_i, b_i]` denotes that the student labeled `a_i` knows the student labeled `b_i` (note that `b_i` does not necessarily know `a_i`). If a knowledge relation does not exist in `know`, then such a knowledge relation does not exist.

Write a function that takes as input, `n` and a vector, `know`. This function must return the label of the gator if the gator exists and can be identified, or -1 otherwise.

## Sample Test Cases

**Example 1:**

```c++
Input: n = 2, know = [[1, 2]]
Output: 2
Explanation: All students (student 1) know the gator (student 2), and the gator (student 2) knows nobody. Therefore, the gator exists and is student 2.
```

**Example 2:**

```c++
Input: n = 3, know = [[1, 2], [2, 3], [3, 1]]
Output: -1
Explanation: Every student knows some other student, thus, there is no gator.
```

**Example 3:**

```c++
Input: n = 4, know = [[1, 2], [2, 3], [3, 1]]
Output: -1
Explanation: The first three students know another student. There is a student a_4 that knows nobody, but the first three students do not know a_4, so we cannot determine that a_4 is a gator.
```

**Example 4:**

```c++
Input: n = 1, know = []
Output: 1
Explanation: There are no students that do not know student 1, and student 1 does not know anyone, so student 1 is a gator.
```

## Constraints

- `1 <= n <= 1000`
- `0 <= know.length <= 10^4`
- `know[i].length = 2`
- All the pairs of know are **unique** (no parallel edges)
- `a_i != b_i` (no self loops)
- `1 <= a_i, b_i <= n`

## Problem Attributes

- Author: Matthew DeGuzman
- Difficulty: Easy (20-40 minutes)
- Date Created: 04/17/23
- Last Modified: 04/17/23
