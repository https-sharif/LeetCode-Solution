# Longest Subarray of 1's After Deleting One Element

## Problem Description

Given a binary array `nums`, the task is to delete one element from it.

Return the size of the longest non-empty subarray containing only `1's` in the resulting array. If no such subarray exists, return `0`.

## Solution Approach

The solution employs a sliding window approach to find the longest subarray of `1's` by deleting at most one element. It keeps track of the index of the last encountered `0`, and when another `0` is found, it updates the maximum length of `1's` by considering the subarray between the last zero and the current zero. This method ensures that we efficiently find the longest subarray possible after one deletion.

## Code Explanation

### `longestSubarray` Function

- **Initial Variables**:
  - `zeroIndex`: Tracks the index of the last encountered 0.
  - `l`: Left pointer of the sliding window.
  - `mx`: Stores the maximum length of the subarray found.

- **Looping through the array**:
  - For each element, if it’s a 0:
    - If it's the first `0` encountered, store its index.
    - If it's not the first `0`, calculate the subarray length between `l` and the current index minus one, then update `l` to be one position after the last zero, and set `zeroIndex` to the current index.

- **Final Calculation**:
  - If no `0` was encountered in the array, return `nums.size() - 1` since we must delete one element.
  - Otherwise, update `mx` with the maximum possible subarray length considering the last segment of the array.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of elements in `nums`. The sliding window moves forward, processing each element once.
- **Space Complexity:** $O(1)$, as the solution only requires a fixed amount of extra space regardless of the input size.
