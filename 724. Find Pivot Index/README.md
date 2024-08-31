# Find Pivot Index

## Problem Description

Given an array of integers `nums`, calculate the **pivot index** of this array.

The **pivot index** is the index where the sum of all the numbers **strictly** to the left of the index is equal to the sum of all the numbers **strictly** to the index's right.

If the index is on the left edge of the array, then the left sum is `0` because there are no elements to the left. This also applies to the right edge of the array.

Return *the **leftmost pivot index***. If no such index exists, return `-1`.

## Solution Approach

The solution uses a prefix sum array to calculate the sum of elements on either side of each index in the array. By precomputing the prefix sums, the solution efficiently determines the pivot index by comparing the left sum with the right sum for each index.

## Code Explanation

### `pivotIndex` Function

- **Initial Variables**:
  - `n`: Stores the size of the `nums` array.
  - `prefix`: A vector that stores the prefix sum of the array, where `prefix[i]` contains the sum of elements from the start of the array up to index `i`.

- **Prefix Sum Calculation**:
  - The first element of the `prefix` array is initialized to the first element of `nums`.
  - For each subsequent element, the prefix sum is calculated by adding the current element of `nums` to the previous prefix sum.

- **Finding the Pivot Index**:
  - Loop through each index `i` in the array:
    - If `i == 0`, check if the sum of elements after the first index equals `0`.
    - For other indices, check if the sum of elements before `i` is equal to the sum of elements after `i`.
  - If a valid pivot index is found, return it.

- **Final Result**:
  - If no pivot index is found, return `-1`.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of elements in `nums`. The prefix sum is computed in one pass, and the pivot index is found in another pass.
- **Space Complexity:** $O(n)$, due to the additional space required to store the prefix sum array.
