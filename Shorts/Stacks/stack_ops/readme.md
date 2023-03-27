## Problem Statement
Write functions to implement the following operations on a stack of integers:

- `void push(std::stack<int>& stk, int x)` pushes `x` onto `stk`
- `int pop(std::stack<int>& stk)` pops the top entry off of the stack and returns its value
- `bool isEmpty(std::stack<int>& stk)` returns `true` or `false` to indicate if the stack contains elements
- `size_t getSize(std::stack<int>& stk)` returns the size (number of elements) of the stack

The main function will initialize an empty stack of integers and perform the following operations:
- Read in the number of commands, `n`. Each command is represented by an integer:
    - `1 x` calls `push(stk, x)`
    - `2` calls `pop(stk)` and prints the returned value
    - `3` calls `isEmpty(stk)` and prints "empty" or "nonempty" appropriately
    - `4` calls `getSize(stk)` and prints the returned value


You can assume all inputs will be valid.
&nbsp;
### Example 1:
>> **Input:** \
>> `5` \
>> `3` \
>> `1 10` \
>> `1 24` \
>> `2` \
>> `4` \
>> **Output:** \
>> `empty` \
>> `24` \
>> `1`

### Difficulty
Shorts (&lt;10 minutes)

### Author
Andrew Penton