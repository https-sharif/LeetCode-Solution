# Shortest Subarry to be Removed to Make Array Sorted

## Problem Description

Given an integer array `arr`, remove a subarray (can be empty) from `arr` such that the remaining elements in `arr` are **non-decreasing**.

Return *the length of the shortest subarray to remove*.

A **subarray** is a contiguous subsequence of the array.

## Solution Approach

- The solution first identifies the longest increasing subarray starting from the left (`l`) and the right (`r`).
- If the array is already sorted in non-decreasing order, it returns `0`.
- Then, the algorithm checks for the shortest subarray that can be removed by iterating over the left and right pointers (`l` and `r`) and updating the minimum subarray length.

## Code Explanation

### `findLengthOfShortestSubarray` Function

1. **Initial Setup**:
   - The `l` pointer finds the longest increasing subarray starting from the left.
   - The `r` pointer finds the longest increasing subarray starting from the right.

2. **Subarray Removal**:
   - If the entire array is sorted, return `0`.
   - The variable `ans` is initialized to the minimum of `r` and `n - l - 1` (the minimal potential length to remove).

3. **Two-pointer Traversal**:
   - A loop iterates over the array with two pointers: `i` (from the left) and `j` (from the right). 
   - If `arr[i] <= arr[j]`, update `ans` and move `i` forward.
   - Otherwise, move `j` forward to explore further potential subarrays.

4. **Return the Answer**:
   - The function returns the minimum length of the subarray that can be removed.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the array.
- **Space Complexity:** $O(1)$, since only a few variables are used for the pointers and answer.
