# Longest Common Prefix Between Arrays

## Problem Description

You are given two arrays with **positive integers** `arr1` and `arr2`.

A **prefix** of a positive integer is an integer formed by one or more of its digits, starting from its **leftmost** digit. For example, `123` is a prefix of the integer `12345`, while `234` is **not**.

A **common prefix** of two integers `a` and `b` is an integer `c`, such that `c` is a prefix of both `a` and `b`. For example, `5655359` and `56554` have a common prefix `565` while `1223` and `43456` **do not** have a common prefix.

You need to find the length of the **longest common prefix** between all pairs of integers `(x, y)` such that `x` belongs to `arr1` and `y` belongs to `arr2`.

Return *the length of the **longest** common prefix among all pairs. If no common prefix exists among them, return* `0`.

## Solution Approach

The solution converts all integers from both arrays into strings and sorts them lexicographically. It then compares the strings pairwise to find the longest common prefix between elements from `arr1` and `arr2`.

## Code Explanation

### `longestCommonPrefix` Function

- **Converting Integers to Strings**: The integers in `arr1` and `arr2` are converted to strings and stored in `a1` and `a2`.
- **Sorting**: Both arrays of strings are sorted to ensure efficient prefix comparisons.
- **Two-Pointer Comparison**: We use two pointers (`i` for `arr1` and `j` for `arr2`) to compare the strings. For each pair, the function computes the length of the common prefix.
- **Updating Maximum Prefix**: As we check each pair, we update the longest common prefix found so far.

## Complexity

- **Time Complexity:** $O(n \log n + m \log m + n + m)$, where `n` is the size of `arr1` and `m` is the size of `arr2`.
- **Space Complexity:** $O(n + m)$, required for storing the string representations of `arr1` and `arr2`.
