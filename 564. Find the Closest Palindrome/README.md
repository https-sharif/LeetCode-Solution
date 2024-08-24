# Find the Closest Palindrome

## Problem Description

Given a string `n` representing an integer, return *the closest integer (not including itself), which is a palindrome*. If there is a tie, return **the smaller one**.

The closest is defined as the absolute difference minimized between two integers.

## Solution Approach

1. **Palindrome Check (`isPalindrome` method)**:
   - This method checks if a given string `s` is a palindrome by using a two-pointer approach. The `left` pointer starts at the beginning and the `right` pointer at the end of the string. It compares the characters at these pointers and moves inward. If any mismatch is found, it returns `false`; otherwise, after the loop, it returns `true`.

2. **Finding the Nearest Palindromic Number (`nearestPalindromic` method)**:
   - **Initialization**: Convert the input string `n` to an integer and store it as `num`.
   - **Generating Candidates**: 
     - Insert two corner cases: `10^len + 1` and `10^(len-1) - 1` where `len` is the length of the input string.
     - Generate palindromic numbers by taking the prefix of `n` (first half), adjusting it by -1, 0, and +1, and forming the palindrome by mirroring this prefix.
   - **Selecting the Closest Palindrome**: Iterate through the set of candidates and choose the one closest to `num`. If there's a tie, the smaller number is selected.
  
## Complexity

- **Time Complexity**: $O(n)$ for generating and comparing candidates, where `n` is the length of the input string.
- **Space Complexity**: O(k) for storing candidate palindromes in the set, where `k` is the number of candidates.
