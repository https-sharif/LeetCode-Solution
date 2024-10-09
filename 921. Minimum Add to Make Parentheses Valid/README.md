# Minimum Add to Make Parentheses Valid

## Problem Description

A parentheses string is valid if and only if:

- It is the empty string.
- It can be written as `AB` (`A` concatenated with `B`), where `A` and `B` are valid strings, or
- It can be written as `(A)`, where `A` is a valid string.

You are given a parentheses string `s`. In one move, you can insert a parenthesis at any position of the string. The task is to return the minimum number of moves required to make `s` valid.

For example, if `s = "()))"`, you can insert an opening parenthesis to be `"(()))"` or a closing parenthesis to be `"())))"`.

Return *the minimum number of moves required to make* `s` *valid*.

## Solution Approach

The solution keeps track of open parentheses and counts the necessary insertions when mismatches occur, adjusting for each invalid closing parenthesis or extra open parentheses that need to be balanced.

## Code Explanation

### `minAddToMakeValid` Function

- `open`: Tracks the number of unbalanced opening parentheses.
- `ans`: Counts the number of insertions required to balance invalid closing parentheses.
- The loop iterates through the string:
  - If the current character is '(', increment `open`.
  - If it's ')', check if there are unbalanced '(', and decrement `open`. If not, increment `ans` for a missing '('.
- The final result is the sum of `open` (unbalanced '(') and `ans` (needed insertions).

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the string.
- **Space Complexity:** $O(1)$, as only a few variables are used regardless of input size.
