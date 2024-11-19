# Maximum Sum of Distinct Subarrays With Length K

## Problem Description

You are given an integer array `nums` and an integer `k`. Find the maximum subarray sum of all the subarrays of `nums` that meet the following conditions:

- The length of the subarray is `k`, and
- All the elements of the subarray are **distinct**.
  
Return *the maximum subarray sum of all the subarrays that meet the conditions*. If no subarray meets the conditions, return `0`.

*A **subarray** is a contiguous non-empty sequence of elements within an array*.

## Solution Approach

The solution uses a **sliding window** technique to maintain a subarray of size `k` with distinct elements. It keeps track of the sum of the current window and updates the maximum sum if the window is valid.

## Code Explanation

### Main Logic

1. **Sliding Window**:
   - Traverse the array while maintaining a window of size `k`.
   - Use a `map` to track the frequency of elements within the window.

2. **Window Adjustment**:
   - If the window size exceeds `k`, remove the leftmost element and adjust the sum and frequency count.

3. **Validation**:
   - Check if the current window has exactly `k` distinct elements using the map.
   - Update the maximum sum (`mx`) if the condition is satisfied.

## Complexity

- **Time Complexity:** $O(n)$, each element is added/removed from the map once, ensuring linear time.
- **Space Complexity:** $O(k)$, the map stores frequencies of at most \(k\) elements.
