# Permutation in String

## Problem Description

Given two strings `s1` and `s2`, return `true` if `s2` contains a **permutation** of `s1`, or `false` otherwise.

In other words, return `true` if one of `s1`'s permutations is a substring of `s2`.

## Solution Approach

The solution uses a sliding window technique to maintain a window of size `s1`'s length in `s2`. By comparing frequency counts of characters within the window to the frequency of characters in `s1`, we can determine if a permutation exists.

## Code Explanation

### `checkInclusion` Function

1. **Base Case**:  
   If `s1` is longer than `s2`, return `false` because a longer string can't be a permutation of a shorter one.

2. **Frequency Arrays**:  
   Two frequency vectors of size 26 (for the 26 lowercase English letters) are used:
   - `freq`: stores the frequency of characters in `s1`.
   - `tempFreq`: stores the frequency of characters in the current window of `s2`.

3. **Initial Setup**:  
   Populate both `freq` and `tempFreq` for the first `n` characters of `s1` and `s2`.

4. **Sliding Window**:  
   Traverse through `s2`, adjusting the window of size `n`. After each step, compare `tempFreq` with `freq`:
   - If they match, return `true`.
   - Update the window by adding the next character in `s2` and removing the oldest character.

5. **Final Check**:  
   Return `true` if the last window matches; otherwise, return `false`.

## Complexity

- **Time Complexity:** $O(n + m)$, where `n` is the length of `s1` and `m` is the length of `s2`.
- **Space Complexity:** $O(1)$, since the frequency arrays always have a fixed size of 26.
