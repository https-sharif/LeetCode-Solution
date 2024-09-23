# Extra Characters in String

## Problem Description

You are given a **0-indexed** string `s` and a dictionary of words `dictionary`. You have to break `s` into one or more **non-overlapping** substrings such that each substring is present in the dictionary. There may be some **extra characters** in `s` that are not part of any valid substrings.

Return *the **minimum** number of extra characters left over if you break up* `s` *optimally*.

## Solution Approach

The solution uses dynamic programming with memoization. The goal is to find the minimum number of extra characters by exploring all possible substring combinations. The recursive `findMin` function checks each possible substring at a given index and tries to minimize the leftover characters.

## Code Explanation

### `findMin` Function

- **Base Case:** If the index `idx` reaches or exceeds the size of the string `s`, return 0 (no extra characters).
- **Memoization:** If the result for the current index `idx` is already computed, return the memoized result.
- **Recursive Step:** Initially, assume there's one extra character at the current index (`idx`). Then, check all possible substrings starting from `idx`. If a substring is found in the dictionary, update the result by considering that substring and moving forward in the string.

### `minExtraChar` Function

- Initializes the `memo` array with `-1` (uncomputed states).
- Adds all words from the `dictionary` to the set `st` for efficient lookups.
- Calls the recursive `findMin` function starting from the first index (`0`).

## Complexity

- **Time Complexity:** $O(n^2)$, where `n` is the length of string `s`.
- **Space Complexity:** $O(n)$, due to the memoization array and recursion stack.
