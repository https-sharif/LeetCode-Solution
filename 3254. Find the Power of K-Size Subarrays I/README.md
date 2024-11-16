# Find the Power of K-Size Subarrays I

## Problem Description

You are given an array of integers `nums` of length `n` and a *positive* integer `k`.

The **power** of an array is defined as:

- Its **maximum** element if *all* of its elements are **consecutive** and **sorted** in **ascending** order.
- -1 otherwise.
  
You need to find the **power** of all subarrays of `nums` of size `k`.

Return an integer array `results` of size `n - k + 1`, where `results[i]` is the *power* of `nums[i..(i + k - 1)]`.

## Solution Approach

The solution uses a helper array `a` to track the lengths of consecutive sequences ending at each index in `nums`. Based on the values in `a`, it determines the appropriate values to add to the result array `ans`.

## Code Explanation

### `resultsArray` Function

- **Initialization:**  
  - `a`: A helper array initialized with `1` at every position to represent a minimum sequence length of `1`.
  - `ans`: The final result array.

- **First Loop:**  
  - Iterates over `nums` starting from index `1`.
  - If `nums[i]` is consecutive to `nums[i-1]`, increments `a[i]` based on the previous value.

- **Second Loop:**  
  - Starts from index `k-1` to check if a sequence of length `k` or more exists at `i`.
  - Appends `nums[i]` to `ans` if `a[i] >= k`, otherwise appends `-1`.

## Complexity

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of elements in `nums`.
- **Space Complexity:** $O(n)$, as the solution uses two arrays (`a` and `ans`) of size `n`.
