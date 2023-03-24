# Make Valid String

## Problem Statement

You are given a string `str` that contains only the characters `(`, `)`, `{`, `}`, `[`, `]`. The string `str` is valid if:

- each opening bracket is closed by a matching bracket
- each bracket is closed in the correct order
- each closing bracket has a corresponding opening bracket

If `str` is not valid then add the minimum number of correct brackets to make `str` valid and return the new string, else return `str`.

### Sample Test Cases

**Example 1:**

```text
Input: str = "("
Output: "()"
Explanation: The opening parenthesis, must be closed by a matching closed parenthesis
```

**Example 2:**

```text
Input: str = "{)"
Output: "{}()", "{()}", or "({})"
Explanation: The corresponding braces and parentheses were added to make str valid. Note that there are multiple correct outputs for str.
```

**Example 3:**

```text
Input: str = "(){}"
Output: "(){}"
Explanation: str is valid so we return it.
```

**Example 4:**

```text
Input: str = "((}]"
Output: "(({}[]))"
```

**Example 5:**

```text
Input: str = "([([(["
Output: "([([([])])])"
```

## Constraints

- 0 <= `str.length` <= 10^4
- `str[i]` contains only the characters `(`, `)`, `{`, `}`, `[`, `]`

## Problem Attributes

- Author: Matthew DeGuzman
- Difficulty: Medium (20-40 minutes)
- Date Created: 03/06/2023
- Last Modified: 03/06/2023
