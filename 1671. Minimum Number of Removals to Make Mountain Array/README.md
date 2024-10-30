# Minimum Number of Removals to Make Mountain Array

## Problem Description

You may recall that an array `arr` is a **mountain array** if and only if:

- `arr.length >= 3`
- There exists some index `i` **(0-indexed)** with `0 < i < arr.length - 1` such that:
  - `arr[0] < arr[1] < ... < arr[i - 1] < arr[i]`
  - `arr[i] > arr[i + 1] > ... > arr[arr.length - 1]`
    
Given an integer array `nums`​​​, return *the **minimum number** of elements to remove to make* `nums`​*​​ a **mountain array***.

## Solution Approach

The solution leverages the concept of finding the longest increasing subsequence (LIS) from the left and right of each element. By determining the length of these subsequences, we can identify valid peaks and compute the minimum removals needed to achieve a mountain array.

## Code Explanation

### `minimumMountainRemovals` Function

- **Purpose:** To find the minimum number of removals needed to make the input array `nums` a mountain array.
- **Logic Breakdown:**
  1. Create two vectors `a` and `b` of size `n` to store the length of the LIS from the left and right of each element.
  2. Iterate over the array `nums` from left to right to fill vector `a` using `lower_bound` to maintain an increasing subsequence.
  3. Iterate over the array `nums` from right to left to fill vector `b` similarly.
  4. Check for valid peak elements (where both `a[i]` and `b[i]` are non-zero) and calculate the minimum number of removals required to achieve a mountain array.

## Complexity

- **Time Complexity:** $O(n \log n)$, where `n` is the size of `nums`.
- **Space Complexity:** $O(n)$, due to the storage of the vectors `a`, `b`, and `v`.
