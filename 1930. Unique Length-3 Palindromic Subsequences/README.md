

# Count Unique Palindromic Subsequences

## Problem Description

Given a string `s`, return *the number of **unique palindromes of length three** that are a **subsequence** of* `s`.

Note that even if there are multiple ways to obtain the same subsequence, it is still only counted **once**.

A **palindrome** is a string that reads the same forwards and backwards.

A **subsequence** of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

- For example, `"ace"` is a subsequence of `"abcde"`.

## Solution Approach

The solution leverages hash maps and sets to efficiently track the first and last positions of each character in the string. It then identifies unique characters between these positions to form palindromic subsequences.

## Code Explanation

### `countPalindromicSubsequence` Function

1. **Initialize Tracking Data**:  
   A hash map (`M`) is used to store the first and last indices of each character in the string.

2. **First Pass**:  
   - Iterate through the string to populate the first and last positions of each character.  
   - If a character is seen for the first time, its position is stored as the first index; otherwise, update the last index.

3. **Second Pass**:  
   - For each character in the map, check the range between its first and last occurrences.  
   - If the range is greater than 1, collect all unique characters within the range using a set and add their count to the result.

4. **Return Result**:  
   The final count represents the number of unique palindromic subsequences.

## Complexity

- **Time Complexity:** $O(n)$, as we process the string twice.  
- **Space Complexity:** $O(1)$, limited to 26 lowercase English letters.
