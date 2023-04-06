# Valid Brackets

## Problem Statement

There exist four types of brackets:
- the parentheses or round brackets  `()`, 
- curly or brace brackets `{}`, 
- square or box brackets `[]`,  
- angle brackets `<>`.

Suppose you are given a string `s` containing just the characters `(`, `)`, `{`, `}`, `[`,`]`,`<`,`>`. The input string `s` is valid if the brackets are matched by the same type of bracket and in proper order. Determine if the input string `s` is valid. Return *true* if valid, and *false* otherwise.

## Sample Test Cases

### Example 1:

`text
Input: s = “()”
Output: true
Explanation: The opening parenthesis is closed by another parenthesis; a pair of parentheses.
`

### Example 2:

`text
Input: s = “()[]{}<>”
Output: true
Explanation: There exists a proper pair of brackets for each type.
`

### Example 3:

`text
Input: s = “()(”
Output: false
Explanation: Although there is a proper pair of parentheses, there does exist an opening parenthesis that is not closed by another.
`

### Example 4:

`text
Input: s = “(]”
Output: false
Explanation: The opening parenthesis is not closed by the same type of bracket.
`

### Example 5:

`text
Input: s = “([]){}” 
Output: true
Explanation: There is an opening parenthesis closed by the same type, an opening square bracket closed by the same type, and an opening curly bracket closed by the same type.
`

### Constraints

- 1 ≤ `s.length` ≤ 10<sup>4</sup> 
- `s` consists of brackets only `'() [] {} <>'`

### Problem Attributes

- Author: Meaghan Estrada
- Difficulty: Easy (10-20 minutes)
- Date Created: 03/21/23
- Last Modified: 03/22/23