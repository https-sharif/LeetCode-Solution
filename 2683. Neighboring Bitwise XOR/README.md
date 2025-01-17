# Neighboring Bitwise XOR

## Problem Description

A **0-indexed** array `derived` with length `n` is derived by computing the **bitwise XOR** (⊕) of adjacent values in a **binary array** `original` of length `n`.

Specifically, for each index `i` in the range `[0, n - 1]`:

- If `i = n - 1`, then `derived[i] = original[i] ⊕ original[0]`.
- Otherwise, `derived[i] = original[i] ⊕ original[i + 1]`.
  
Given an array `derived`, your task is to determine whether there exists a **valid binary array** `original` that could have formed `derived`.

Return ***true** if such an array exists or **false** otherwise*.

A binary array is an array containing only **0's** and **1's**

## Solution Approach

The solution leverages the property that the XOR of the entire `derived` array determines the feasibility of constructing a valid `original` array:
- If the sum of the elements in `derived` is even, a valid `original` array exists.
- Otherwise, no such array exists.

## Code Explanation

### Main Steps

1. **Calculate Sum of `derived`:**
   - Use a loop to calculate the total number of `1`s in `derived`.

2. **Check Feasibility:**
   - If the total number of `1`s is even, return `true`.
   - Otherwise, return `false`.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of `derived`.
- **Space Complexity:** $O(1)$, as no additional space is used.
