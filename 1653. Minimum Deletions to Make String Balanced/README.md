# Minimum Deletions to Make String Balanced

## Problem Description

You are given a string `s` consisting only of characters `'a'` and `'b'​`​​​.

You can delete any number of characters in `s` to make `s` **balanced**. `s` is **balanced** if there is no pair of indices `(i,j)` such that `i < j` and `s[i] = 'b'` and `s[j]= 'a'`.

Return *the **minimum** number of deletions needed to make* `s` ***balanced***.

## Solution Approach

This solution calculates the minimum number of deletions required to make all 'a's in a string appear before all 'b's:

1. **Initialization**:
   - Initialize `ans` to 0, which will track the minimum deletions needed.
   - Initialize `bcount` to 0, which will count the number of 'b's encountered.

2. **Traverse the String**:
   - For each character in the string:
     - If the character is 'b', increment the `bcount`.
     - If the character is 'a', update `ans` to the minimum of its current value plus 1 and `bcount`.

3. **Return Result**:
   - The final value of `ans` represents the minimum deletions required.

## Complexity

- **Time Complexity**: $O(n)$, where `n` is the length of the string. The algorithm makes a single pass through the string.
- **Space Complexity**: $O(1)$ for the additional variables used.
