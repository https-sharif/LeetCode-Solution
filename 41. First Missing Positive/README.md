# First Missing Positive

## Problem Description

Given an unsorted integer array `nums`, return the *smallest positive integer* that is *not present* in `nums`.

You must implement an algorithm that runs in `O(n)` time and uses `O(1)` auxiliary space.

## Solution Approach

The approach is to place each number at its correct position (i.e., `nums[i]` should be equal to `i + 1` for `i` from 0 to `n-1`) using swaps. After rearranging, the first index where the number is not `i + 1` is the smallest missing positive integer.

## Code Explanation

### `firstMissingPositive` Function

1. **Initial Loop:**  
   For each element, if it's within the range `[1, n]` and not at its correct position, we swap it with the element at its correct position.
   
2. **Final Check:**  
   After the rearrangement, we iterate over the array and return the first index where `nums[i] != i + 1`, which gives the smallest missing positive integer.

3. **Return `n+1`:**  
   If all elements are in their correct positions, the smallest missing positive integer is `n + 1`.

## Complexity

- **Time Complexity:** $O(n)$, since we have two linear passes over the array.
- **Space Complexity:** $O(1)$, as no extra space is used besides a few variables.
