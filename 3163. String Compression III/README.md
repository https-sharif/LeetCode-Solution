# String Compression III

## Problem Description

Given a string `word`, compress it using the following algorithm:

- Begin with an empty string `comp`. While `word` is **not** empty, use the following operation:
  - Remove a maximum length prefix of `word` made of a *single character* `c` repeating **at most** 9 times.
  - Append the length of the prefix followed by `c` to `comp`.

Return the string `comp`.

## Solution Approach

This solution iterates over the string, counting consecutive characters and adding a compressed format to the result. For each character sequence, it limits the count to a maximum of 9, then appends the count and character to the compressed string.

## Code Explanation

### `compressedString` Function

- Initializes an empty string `s` to store the compressed version.
- Uses two pointers `i` and `j` to track each sequence of identical characters.
- For each character at `i`, increments `j` while characters match and limits the count to a maximum of 9.
- Appends the count and character to `s` and moves `i` to the next distinct character.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of `word`.
- **Space Complexity:** $O(n)$, for the output compressed string `s`.
