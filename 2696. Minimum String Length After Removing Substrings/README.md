# Minimum String Length After Removing Substrings

## Problem Description

You are given a string `s` consisting only of **uppercase** English letters.

You can apply some operations to this string where, in one operation, you can remove **any** occurrence of one of the substrings `"AB"` or `"CD"` from `s`.

Return *the **minimum** possible length of the resulting string that you can obtain*.

Note that the string concatenates after removing the substring and could produce new `"AB"` or `"CD"` substrings.

## Solution Approach

The code uses a stack-like approach with a string `t` to track the valid sequence of characters. It iterates through the given string `s` and checks if the current character forms a valid removable pair ("AB" or "CD") with the last character of `t`. If a valid pair is found, the last character is removed; otherwise, the current character is added to `t`.

## Code Explanation

### `minLength` Function

- Initializes an empty string `t` as a stack to store the remaining characters.
- Iterates over each character of `s`.
- For each character, checks if it forms a pair ("AB" or "CD") with the last character of `t`. If yes, pops the last character from `t`.
- Otherwise, adds the current character to `t`.
- Returns the size of the final string `t` after processing.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the string `s`, since each character is processed once.
- **Space Complexity:** $O(n)$, as the auxiliary space `t` may store up to `n` characters.
