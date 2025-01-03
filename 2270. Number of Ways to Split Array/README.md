# Number of Ways to Split Array

## Problem Description

You are given a **0-indexed** integer array `nums` of length `n`.

`nums` contains a **valid split** at index `i` if the following are true:

- The sum of the first `i + 1` elements is **greater than or equal to** the sum of the last `n - i - 1` elements.
- There is **at least one** element to the right of `i`. That is, `0 <= i < n - 1`.
  
Return *the number of **valid splits** in* `nums`.

## Solution Approach

The solution uses prefix and suffix sums to evaluate potential split indices efficiently. A suffix sum array is computed first, followed by iterating through the array to count valid splits.

## Code Explanation

### `waysToSplitArray` Function

1. **Suffix Array Calculation:**  
   - Compute the suffix sums starting from the last element of `nums` to efficiently get the sum of elements to the right of any index.
2. **Valid Split Count:**  
   - Use a prefix sum (`sum`) while iterating through the array.
   - For each index `i`, check if the prefix sum is greater than or equal to the corresponding suffix sum.

## Complexity

- **Time Complexity:** $O(n)$, as it takes linear time to compute the suffix sums and iterate through the array.  
- **Space Complexity:** $O(n)$, as an additional array of size `n` is used to store the suffix sums.  
