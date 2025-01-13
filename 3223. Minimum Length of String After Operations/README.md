# Minimum Length of String After Operations

## Problem Description

You are given a string `s`.

You can perform the following process on `s` **any** number of times:

- Choose an index `i` in the string such that there is **at least** one character to the left of index `i` that is equal to `s[i]`, and **at least** one character to the right that is also equal to `s[i]`.
- Delete the **closest** character to the **left** of index `i` that is equal to `s[i]`.
- Delete the **closest** character to the **right** of index `i` that is equal to `s[i]`.
  
Return the **minimum** length of the final string `s` that you can achieve.

## Solution Approach

The solution utilizes a frequency array to count the occurrences of each character in the string. For each character with an odd frequency, the approach adjusts it to an even count by assuming the removal of a single character.

## Code Explanation

1. **Initialization**:
   - The function accepts a string `s`.
   - It initializes a frequency vector `freq` of size 26 (for each letter in the English alphabet).

2. **Frequency Calculation**:
   - Iterate over the string `s` to compute the frequency of each character.

3. **Result Calculation**:
   - For each non-zero frequency, check if the frequency is odd using bitwise operations.
   - If odd, increment the result by 2.

## Complexity

- **Time Complexity**: $O(n)$ where `n` is the length of the string.
- **Space Complexity**: $O(1)$, using constant space for the frequency array.
