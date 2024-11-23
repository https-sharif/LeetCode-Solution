# Shortest Subarray with Sum at Least K

## Problem Description

Given an integer array `nums` and an integer `k`, return *the length of the shortest non-empty **subarray** of* `nums` *with a sum of at least* `k`. If there is no such **subarray**, return `-1`.

A **subarray** is a **contiguous** part of an array.

## Solution Approach

This solution uses the **Prefix Sum** technique combined with a **Deque** (double-ended queue) to efficiently find the shortest subarray with a sum greater than or equal to `k`. The prefix sum allows us to compute subarray sums in constant time, while the deque is used to maintain the indices of the prefix sums in an ordered manner to ensure that we can quickly find the shortest subarray.

### Code Explanation

1. **Prefix Sum Calculation**:
   - The prefix sum array is computed such that each element at index `i` represents the sum of the elements from the start of the array up to index `i-1`.

2. **Deque for Efficient Subarray Search**:
   - A deque stores the indices of the prefix sums. The idea is to keep track of the smallest index where the difference between the current prefix sum and a previously seen prefix sum is greater than or equal to `k`.
   
3. **Iterating Through Prefix Sum**:
   - For each index `i`, the function checks if the difference between the current prefix sum and a previously seen prefix sum at the front of the deque is greater than or equal to `k`. If so, it updates the minimum length of the subarray.
   - The deque is updated by removing indices from the back where the current prefix sum is less than or equal to the prefix sum at those indices, maintaining an increasing order of prefix sums.

4. **Returning the Result**:
   - If no valid subarray is found, the function returns `-1`. Otherwise, it returns the length of the shortest subarray.

## Code Explanation

### `shortestSubarray` Function

- **Prefix Sum Array**: Calculates the prefix sum of the input array `nums`.
- **Deque**: Maintains the indices of the `prefixSum` array to track potential subarrays efficiently.
- **Main Loop**: Iterates through the `prefixSum` array and updates the shortest subarray length using the deque.

## Complexity

- **Time Complexity**: $O(n)$, where `n` is the length of the input array.
- **Space Complexity**: $O(n)$, due to the storage required for the `prefixSum` array and the deque.
