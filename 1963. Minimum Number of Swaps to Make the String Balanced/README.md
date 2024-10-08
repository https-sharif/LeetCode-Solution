# Minimum Number of Swaps to Make the String Balanced

## Problem Description

You are given a **0-indexed** string `s` of **even** length `n`. The string consists of **exactly** `n / 2` opening brackets `'['` and `n / 2` closing brackets `']'`.

A string is called **balanced** if and only if:

- It is the empty string, or
- It can be written as `AB`, where both `A` and `B` are **balanced** strings, or
- It can be written as [`C]`, where `C` is a **balanced** string.

You may swap the brackets at **any** two indices **any** number of times.

Return *the **minimum** number of swaps to make `s` **balanced***.

## Solution Approach

The solution counts mismatches of unbalanced closing brackets and determines how many swaps are needed to fix them. The mismatches are handled by increasing a counter for `[` and decrementing it for `]` when a valid match is found. The minimum swaps are derived from the total number of remaining mismatches.

## Code Explanation

### `minSwaps` Function

- **mismatch**: Tracks the number of unbalanced brackets.
- The loop checks each character in the string:
  - If it's `[`, it increments `mismatch`.
  - If it's `]`, it checks if there are unmatched `[`. If so, it decrements `mismatch`, otherwise increments it (indicating an unbalanced `]`).
- The result `(mismatch + 1) / 2` gives the minimum number of swaps required.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the string `s` because we traverse the string once.
- **Space Complexity:** $O(1)$, only a few variables are used regardless of the string size.
