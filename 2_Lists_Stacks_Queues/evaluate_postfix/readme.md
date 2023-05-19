# Evaluate Postfix

## Problem Statement
Postfix notation, or reverse polish notation, is a way of writing mathematical expressions such that the operands of an expression are listed before the operator. For example, the expression 1 + 2 would be written as 1 2 + in postfix notation. 

Note, that infix and postfix notations express the same equations differently, but they will both always have the same result.

You are given a vector of strings `postfix` such that each element represents an **integer** or one of the following operators `(+, -, *, /, %)`. Evaluate the expression represented by `postfix` notation and return the resulting value. It is guaranteed that the expression can be properly evaluated.

### Constraints
- 1 ≤ `postfix.length` ≤ 10<sup>4</sup>
- `postfix[i]` will be either represent an unsigned integer or a valid operator: `(+, -, *, /, %)`
- all arithmetic operations will be valid and result in integers

## Sample Test Cases

### Example 1:

```c++
Input: postfix = ["4", "3", "+"]
Output: 7
Explanation: The expression is equivalent to 4 + 3, which evaluates to 7.
```

### Example 2:

```c++
Input: postfix = ["4", "3", "+", "2", "*"]
Output: 14
Explanation: The expression is equivalent to (4 + 3) * 2, which evaluates to 14.
```

### Example 3:

```c++
Input: postfix = ["2", "3", "4", "+", "+"]
Output: 9
Explanation: The expression evaluates to be 9.
```

### Example 4:

```c++
Input: postfix = ["8", "2", "*", "3", "%"]
Output: 1
Explanation: The expression is equivalent to (8 * 2) % 3, which evaluates to 1.
```

### Problem Attributes

- Author: Matthew DeGuzman/Meaghan Estrada
- Difficulty: Easy (10-20 minutes)
- Date Created: 03/01/23
- Last Modified: 03/01/23