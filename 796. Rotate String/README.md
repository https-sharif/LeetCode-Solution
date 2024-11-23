# Rotate String

## Problem Description

Given two strings `s` and `goal`, return `true` *if and only if* `s` *can become* `goal` *after some number of **shifts** on* `s`.

A **shift** on `s` consists of moving the leftmost character of `s` to the rightmost position.

- For example, if `s = "abcde"`, then it will be `"bcdea"` after one shift.

## Solution Approach

The solution checks if `s` can be rotated to match `goal` by appending `goal` to itself, then checking if `s` is a substring of this doubled string.

## Code Explanation

### `rotateString` Function

1. **Check size mismatch**: If the lengths of `s` and `goal` differ, return `false` as they can’t be rotations of each other.
2. **Concatenate `goal`**: Append `goal` to itself, forming a string where all possible rotations of `goal` appear as substrings.
3. **Substring comparison**: Iterate through each possible rotation by taking substrings of length `n` from the doubled `goal`, comparing each to `s`.
4. **Return result**: If any substring matches `s` then return `true`, otherwise return `false`.

## Complexity

- **Time Complexity:** $O(n^2)$, where `n` is the length of `s`.
- **Space Complexity:** $O(n)$, due to the storage required for the concatenated string `goal + goal`.
