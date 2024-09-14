# Longest Subarray with Maximum Bitwise AND

## Problem Description

You are given an integer array `nums` of size `n`.

Consider a **non-empty** subarray from `nums` that has the **maximum** possible **bitwise AND**.

- In other words, let `k` be the maximum value of the bitwise AND of **any** subarray of `nums`. Then, only subarrays with a bitwise AND equal to `k` should be considered.

Return *the length of the **longest** such subarray*.

The bitwise AND of an array is the bitwise AND of all the numbers in it.

A **subarray** is a contiguous sequence of elements within an array.

## Solution Approach

The solution iterates through the array to first find the maximum element, as it will determine the maximum bitwise AND value. Then, it iterates through the array again to find the longest subarray where all elements are equal to this maximum value.

## Code Explanation

### `longestSubarray` Function

- The function starts by finding the maximum value in the array `nums`.
- It then iterates over `nums` to compute the length of the longest contiguous subarray that contains only the maximum value.
- `size` is used to track the current length of the subarray with the maximum value, and `mxsize` stores the maximum length found so far.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the size of the array.
- **Space Complexity:** $O(1)$, since only a few extra variables are used.
