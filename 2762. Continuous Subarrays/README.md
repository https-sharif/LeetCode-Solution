# Continuous Subarrays

## Problem Description

You are given a **0-indexed** integer array `nums`. A subarray of `nums` is called **continuous** if:

- Let `i`, `i + 1`, ..., `j` be the indices in the subarray. Then, for each pair of indices `i <= i1, i2 <= j`, `0 <= |nums[i1] - nums[i2]| <= 2`.

Return *the total number of **continuous** subarrays*.

A subarray is a contiguous **non-empty** sequence of elements within an array.

## Solution Approach

Use a sliding window approach with two pointers, `start` and `end`, to track the current subarray. Maintain a multiset `window` to store elements of the current subarray to efficiently find the maximum and minimum values. If the difference between the maximum and minimum elements exceeds 2, slide the `start` pointer to shrink the window. The count of valid subarrays ending at `end` is calculated as `(end - start + 1)`.

## Code Explanation

- Initialize `start` to 0 and use a multiset `window` to track the current subarray.
- Iterate through each element of `nums` with `end`.
  - Insert `nums[end]` into the `window`.
  - If the difference between the maximum and minimum exceeds 2, remove elements from `start` until the condition is satisfied.
  - The number of valid subarrays ending at `end` is `end - start + 1`, contributing to the `ans`.
  - Accumulate the count into `ans`.

## Complexity

- **Time Complexity**: $O(n \log k)$, where `k` is the size of the window due to the use of multiset operations.
- **Space Complexity**: $O(k)$, where `k` is the window size due to storing elements in the multiset.
