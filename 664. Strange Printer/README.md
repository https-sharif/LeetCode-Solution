# Strange Printer

## Problem Description

There is a strange printer with the following two special properties:

The printer can only print a sequence of **the same character** each time.
At each turn, the printer can print new characters starting from and ending at any place and will cover the original existing characters.
Given a string `s`, return *the minimum number of turns the printer needed to print it*.

## Solution Approach

The solution uses a dynamic programming approach to minimize the number of printing turns needed for a string.

1. **Dynamic Programming Table**: 
   - A 2D DP table (`dp[i][j]`) is created where `dp[i][j]` represents the minimum number of turns required to print the substring `s[i:j]`.

2. **Base Case**: 
   - If `i > j`, the substring is empty, so `dp[i][j] = 0`.

3. **Recursive Case**:
   - For each substring `s[i:j]`, start by assuming that `s[i]` is printed in one turn and recursively calculate the minimum turns for the rest of the string (`s[i+1:j]`).
   - If a character `s[k]` matches `s[i]` within the substring, split the problem into printing the segments `s[i:k-1]` and `s[k+1:j]` and update the DP table with the minimum value.

4. **Optimization**:
   - The answer is the minimum number of turns stored in `dp[0][n-1]`, where `n` is the length of the string `s`.

## Complexity

- **Time Complexity**: $O(n^3)$ 
  - The solution involves a triple nested loop: one for `i`, one for `j`, and one for `k` to check every possible split.
  
- **Space Complexity**: $O(n^2)$
  - The DP table requires `n`<sup>`2`</suo> space to store the results for all substrings of `s`.
