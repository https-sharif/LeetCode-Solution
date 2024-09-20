# Shortest Palindrome

## Problem Description

You are given a string `s`. You can convert `s` to a palindrome by adding characters in front of it.

Return *the shortest palindrome you can find by performing this transformation*.

## Solution Approach

The approach involves using the KMP (Knuth-Morris-Pratt) string matching algorithm to determine the longest palindromic prefix in the given string. We append the reverse of the string to itself with a delimiter in between and compute the LPS (Longest Prefix Suffix) array. This helps in identifying how much of the string is already a palindrome from the start, minimizing the characters that need to be added.

## Code Explanation

### `shortestPalindrome` Function

- **Step 1:** Concatenate the string `s` with its reverse, separated by a special character `'-'`.
- **Step 2:** Compute the LPS (Longest Prefix Suffix) array for the new string.
  - The LPS array helps in finding the longest palindromic prefix of the original string.
- **Step 3:** The length of the longest palindromic prefix is used to determine the characters that need to be added in front.
- **Step 4:** Return the reverse of the necessary part of `s` concatenated with the original string `s`.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the string.
- **Space Complexity:** $O(n)$, as we store the LPS array and a reversed copy of the string.
