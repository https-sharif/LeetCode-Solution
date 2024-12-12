# Maximum Beauty of Array After Applying Operation

## Problem Description

You are given a **0-indexed** array `nums` and a **non-negative** integer `k`.

In one operation, you can do the following:

- Choose an index `i` that **hasn't been chosen before** from the range `[0, nums.length - 1]`.
- Replace `nums[i]` with any integer from the range `[nums[i] - k, nums[i] + k]`.
  
The **beauty** of the array is the length of the longest subsequence consisting of equal elements.

Return *the **maximum** possible beauty of the array* `nums` *after applying the operation any number of times.*

**Note** that you can apply the operation to each index **only once**.

A **subsequence** of an array is a new array generated from the original array by deleting some elements (possibly none) without changing the order of the remaining elements.

## Solution Approach

The solution uses a binary search on the size of the subarray (`mid`) and checks if there exists a valid subarray of that size where the difference between the maximum and minimum elements is within the allowed range. The array is sorted to facilitate this check efficiently.

## Code Explanation

### `maximumBeauty` Function

1. **Sort the Array:**  
   Sort the input array `nums` to easily identify subarrays where the maximum and minimum values can be found at the ends.

2. **Binary Search on Subarray Size (`mid`):**  
   The binary search explores the possible sizes of subarrays (from `1` to `n`). For each size `mid`, the program checks if there exists a subarray of that size with the condition `nums[i + mid] - nums[i] <= 2 * k`.

3. **Check Valid Subarrays:**  
   For each `mid`, the program iterates over the sorted array and checks if the difference between the elements at the `i`-th and `(i + mid)`-th positions is within the allowed range. If such a subarray is found, the size `mid` is considered valid, and we update the answer.

4. **Adjust Search Boundaries:**  
   If a valid subarray is found, the binary search continues with larger subarray sizes. Otherwise, it reduces the size.

5. **Return the Result:**  
   The final result is the largest valid subarray size found.

## Complexity

- **Time Complexity:** $O(n \log n)$, where `n` is the size of the input array.
- **Space Complexity:** $O(1)$, since the algorithm uses only a constant amount of extra space.
