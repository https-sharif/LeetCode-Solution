# Special Array II

## Problem Description

An array is considered **special** if every pair of its adjacent elements contains two numbers with different parity.

You are given an array of integer `nums` and a 2D integer matrix `queries`, where for `queries[i] = [from`<sub>`i`</sub>`, to`<sub>`i`</sub>`]` your task is to check that 
subarray `nums[from`<sub>`i`</sub>`, to`<sub>`i`</sub>`]` is **special** or not.

Return an array of booleans `answer` such that `answer[i]` is `true` if `nums[from`<sub>`i`</sub>`, to`<sub>`i`</sub>`]` is special.

## Solution Approach

The solution uses a prefix sum array `pre` to preprocess the information about consecutive elements having the same parity. Each query is answered in constant time by checking the difference in the prefix sum at the query boundaries.

## Code Explanation

### `isArraySpecial` Function

1. **Prefix Sum Array Construction**:
   - `pre[i]` accumulates the number of adjacent pairs `(nums[i-1], nums[i])` with the same parity up to index `i`.
   - Iterate through the array to compute this efficiently.

2. **Query Processing**:
   - For each query `[l, r]`, check if the subarray `nums[l...r]` satisfies the condition by comparing `pre[l]` and `pre[r]`.
   - If they are equal, the subarray meets the condition, and `true` is added to the result. Otherwise, `false`.

3. **Return Result**:
   - The `ans` vector stores the results of all queries and is returned as the output.

## Complexity

- **Time Complexity:** $O(n + q)$, where $O(n)$ is for building the prefix sum array, and $O(q)$ is for processing the queries.  
- **Space Complexity:** $O(n)$ for storing the prefix sum array.
