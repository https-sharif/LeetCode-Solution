# Delete Characters to Make Fancy String

## Problem Description

A **fancy string** is a string where no **three consecutive** characters are equal.

Given a string `s`, delete the **minimum** possible number of characters from `s` to make it **fancy**.

Return *the final string after the deletion*. It can be shown that the answer will always be **unique**.

## Solution Approach

The function iterates through each character in `s`, counting consecutive occurrences. If the count of consecutive identical characters is less than 3, the character is added to the result string `ans`.

## Code Explanation

### `makeFancyString` Function

- Initializes a counter `cnt` to keep track of consecutive characters and an empty string `ans` for the result.
- Adds the first character of `s` to `ans` as a starting point.
- Iterates through each character in `s`:
  - If the current character is the same as the previous, increments `cnt`.
  - If not, resets `cnt` to 1.
  - If `cnt` is less than 3, appends the current character to `ans`.
- Returns `ans`, which now holds the "fancy" string with no triplets of consecutive identical characters.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the string `s`.
- **Space Complexity:** $O(n)$, where `n` is the space required for the output string `ans`.
