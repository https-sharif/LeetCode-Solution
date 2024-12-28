# Maximum Sum of 3 Non-Overlapping Subarrays

## Problem Description

Given an integer array `nums` and an integer `k`, find three non-overlapping subarrays of length `k` with maximum sum and return them.

Return the result as a list of indices representing the starting position of each interval (**0-indexed**). If there are multiple answers, return the lexicographically smallest one.

## Solution Approach

The solution uses dynamic programming (DP) and depth-first search (DFS) to identify the three subarrays with the highest sum. 

### Key Steps:

1. **Precompute Subarray Sums**:
   - Calculate the sum of every subarray of length `k` and store it in an array `sum`.

2. **Dynamic Programming for Optimal Sum**:
   - Use a DP function to find the maximum sum of three non-overlapping subarrays.
   - At each index, decide whether to include the current subarray or skip it, storing results in a memoization table for efficiency.

3. **Backtracking for Indices**:
   - Use DFS to reconstruct the starting indices of the three subarrays based on the DP table and computed sums.

### Implementation Details:

- **Subarray Sum Calculation**:
  - Use a sliding window to calculate the sum of each subarray of size `k` in `O(n)` time.

- **DP Function**:
  - Recursively calculate the maximum sum by either:
    - Including the current subarray and jumping `k` indices ahead.
    - Skipping the current subarray and moving to the next index.
  - Store results in a memoization table to avoid redundant calculations.

- **DFS for Indices**:
  - Traverse the array again using the DP table to select indices that lead to the maximum sum.

## Complexity

- **Time Complexity:** $O(n)$, for precomputing sums and solving with DP and DFS.  
- **Space Complexity:** $O(n)$, for storing subarray sums and memoization table.  
