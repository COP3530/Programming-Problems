# Triple Sum

## Problem Statement

Suppose you are given an array of integers `nums`.
Return all the triplets such that `nums[i] + nums[j] + nums[k] == 0`.

The solution must **not** contain duplicate triplets.

**Definition**: A **duplicate triplet** is a triplet with the exact same numbers regardless of ordering.


## Sample Test Cases

### Example 1:

```text
Input: nums = [-1, 0, 1, 2, -3, 2]
Output: [{-1, 0, 1}, {1, 2, -3}]

Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0
nums[2] + nums[3] + nums[4] = 1 + 2 + (-3) = 0
There are two distinct triplets: {-1, 0, 1} and {1, 2, -3}.
```

### Example 2:

```text
Input: nums = [0, 3, 1]
Output: [] 

Explanation: There is only one triplet, which does not sum to 0. So, we return nothing.
```

### Example 3:

```text
Input: nums = [0, 0, 0]
Output: [{0, 0, 0}]

Explanation: There is only one possible triplet {0, 0, 0}, which sums to 0. 
Similarly, nums[0] + nums[1] + nums[2] = 0 + 0 + 0 = 0.
```

### Example 4:

```text
Input: nums = [-1, -1, 2, -1, -1, 2]
Output: [{-1, -1, 2}]

Explanation: 
Note that the solution must not contain duplicate triplets. There is only one distinct triplet that sums to 0. 
Likewise, nums[0] + nums[1] + nums[2] = (-1) + (-1) + 2 = 0
```

### Example 5:

```text
Input: nums = [1, 1, 3, 5, 2, 1]
Output: []
Explanation: There does not exist a triplet that sums to 0.
```

### Constraints

- 3 ≤ `nums.length` ≤ 3000
- -10<sup>4</sup> ≤ `nums[i]` ≤ 10<sup>4</sup>

### Problem Attributes

- Author: Meaghan Estrada
- Difficulty: Medium (10-20 minutes)
- Date Created: 5/2/2023
- Last Modified: 5/2/2023