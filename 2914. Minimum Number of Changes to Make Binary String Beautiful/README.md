# Minimum Number of Changes to Make Binary String Beautiful

## Problem Description

You are given a **0-indexed** binary string `s` having an even length.

A string is **beautiful** if it's possible to partition it into one or more substrings such that:

- Each substring has an **even length**.
- Each substring contains **only** `1`'s or **only** `0`'s.
  
You can change any character in `s` to `0` or `1`.

Return *the **minimum** number of changes required to make the string* `s` *beautiful*.

## Solution Approach

The solution identifies groups of consecutive identical characters in the string. For each group, if the length is odd, one change is needed to break the repetition. If the length is even, no change is required, but the alternating pattern must be tracked. The minimum number of changes is determined by counting the odd-length groups.

## Solution Explanation

The algorithm works as follows:
1. Traverse the string `s`, identifying groups of consecutive identical characters.
2. For each group:
   - If the group length is odd, increment the change count and set a flag for required changes.
   - If the group length is even, reset the flag to indicate no changes needed for the group.
3. Continue until the entire string is processed.
4. The final result is the number of changes required.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the input string `s`.
- **Space Complexity:** $O(1)$, as the solution uses only a constant amount of extra space.
