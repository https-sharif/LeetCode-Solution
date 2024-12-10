# Find Longest Special Substring That Occurs Thrice I

## Problem Description

You are given a string `s` that consists of lowercase English letters.

A string is called **special** if it is made up of only a single character. For example, the string `"abc"` is not special, whereas the strings `"ddd"`, `"zz"`, and `"f"` are special.

Return *the length of the **longest special substring of*** `s` *which occurs **at least thrice**, or* `-1` *if no special substring occurs at least thrice.*

A **substring** is a contiguous **non-empty** sequence of characters within a string.

## Solution Approach

This solution employs a binary search to determine the maximum length of a valid substring, combined with a sliding window approach to evaluate substrings. A map is used to store and count valid substrings of a given length.

## Code Explanation

### `maximumLength` Function

1. **Binary Search Setup**: 
   - `l` starts at 1, representing the minimum possible substring length.
   - `r` is initialized to the size of the input string, representing the maximum possible substring length.
   - `ans` stores the maximum valid substring length.

2. **Substring Evaluation**:
   - For a given substring length `m`, iterate over the string to extract all substrings of length `m`.
   - Check if all characters in a substring are identical.

3. **Count Valid Substrings**:
   - Use a map to count substrings that satisfy the condition of having identical characters.

4. **Update Binary Search**:
   - If any substring repeats more than twice, update `ans` and search for longer substrings.
   - Otherwise, search for shorter substrings.

5. **Return Result**:
   - `ans` contains the maximum length of a valid substring.

## Complexity

- **Time Complexity:** $O(n \cdot \log n)$, where `n` is the string length, due to binary search and substring evaluation.  
- **Space Complexity:** $O(n)$ for storing substrings in a map.
