## Problem Statement

You are given the partial implementation of a set for strings. This set uses the hash function `size(string) % capacity`. The `capacity` of the set is provided as the first number in each test case. To give an example, in a set with capacity 5, the string "Amy" would hash to index 3 in the set's underlying array. Collisions are handled using open addressing via **linear probing**.

You must implement the `insert` function:
- `void Set::insert(string s)`: Add the string to the set! Resolve collisions using **linear probing**. The set must not have duplicate values, and inserting element past the set's capacity should have no effect.

### Example 1:

> **Input:** \
> `5` \
> `insert Alice` \
> `insert Aakanksha` \
> `insert Wei` \
> `insert Bob` \
> `insert Carlos` \
> **Output:** \
> `[Alice, Bob, Carlos, Wei, Aakanksha]` \
> **Explanation:**
> * "Alice" hashes to index 5 which becomes index 0 since our capacity is 5.
> * "Aakanksha" hashes to index 9 which becomes index 4.
> * "Wei" hashes to index 3.
> * "Bob" hashes to index 3, but the index already occupied by "Wei." Through linear probing, "Bob" tries index 4, then index 0, and finally the unoccupied index 1.
> * "Carlos" hashes to index 6 which becomes index 1 but the index is already occupied by "Bob". Through linear probing, "Carlos" ends up in index 2.`

### Difficulty

Shorts (&lt;10 minutes)

### Author

Eugene Li

### Date Created

03/29/2023
