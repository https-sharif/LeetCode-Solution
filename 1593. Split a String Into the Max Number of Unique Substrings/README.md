# Split a String Into the Max Number of Unique Substrings

## Problem Description

Given a string `s`, return *the maximum number of unique substrings that the given string can be split into*.

You can split string `s` into any list of **non-empty substrings**, where the concatenation of the substrings forms the original string. However, you must split the substrings such that all of them are **unique**.

A **substring** is a contiguous sequence of characters within a string.

## Solution Approach

The solution utilizes backtracking to explore all possible splits of the string `s`. By iterating through the string and checking if a substring is already part of the set, it ensures that only unique substrings are considered. The recursive approach helps in finding the maximum number of unique splits.

## Code Explanation

### `btrack` Function

- **Parameters:**  
  - `s` (reference to string) — the original input string.
  - `st` (set of strings) — stores the unique substrings found.
  - `idx` (int) — current index in the string being processed.

- **Logic:**  
  This function recursively checks all possible substrings starting from `idx`. If the substring has not been encountered (i.e., not in the set), it is added to the set and further recursive calls are made. The function returns the maximum count of unique substrings possible.

### `maxUniqueSplit` Function

- **Logic:**  
  Initializes an empty set and calls the `btrack` function starting from index 0 to find the maximum number of unique substrings.

## Complexity

- **Time Complexity:** $O(2^n)$, where `n` is the length of the string.
- **Space Complexity:** $O(n)$, for storing the set of substrings and the recursion stack.
