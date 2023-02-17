## Problem Statement
Use `std:sort()` in interesting ways:
* `sortFirstHalf()`: Sort the first half of a vector. If the vector's size is odd, **do not include** the middle element.
* `sortSecondHalf()`: Sort the second half of a vector. If the vector's size is odd, **include** the middle element.
* `sortReverse()`: Sort a vector in descending order.
* `sortStructs()`: Sort a vector of `Student` structs in increasing `id` order. Fill in the provided `operator<` overload and call `std:sort()` normally.

Please see https://cplusplus.com/reference/algorithm/sort/ for reference.
&nbsp;
### Example 1:
> `sortFirstHalf()`
>> **Input:** `[2, 1, 5, 4, 3]` \
>> **Output:** `[1, 2, 5, 4, 3]`

> `sortSecondHalf()`
>> **Input:** `[2, 1, 5, 4, 3]` \
>> **Output:** `[2, 1, 3, 4, 5]`

> `sortReverse()`
>> **Input:** `[1, 2, 3, 4, 5]` \
>> **Output:** `[5, 4, 3, 2, 1]`

> `sortStructs()`
>> **Input:** `[Student(3, "Bob"), Student(2, "Alice"), Student(1, "Charlie")]` \
>> **Output:** `[Student(1, "Charlie"), Student(2, "Alice"), Student(3, "Bob")]`

### Difficulty
Shorts (&lt;10 minutes)

### Author
Eugene Li

### Date Created
02/16/2023