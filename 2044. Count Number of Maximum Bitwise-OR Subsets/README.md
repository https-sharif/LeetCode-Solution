# Count Number of Maximum Bitwise-OR Subsets

## Problem Description

Given an integer array `nums`, find the **maximum** possible **bitwise OR** of a subset of `nums` and return *the **number of different non-empty subsets** with the maximum bitwise OR*.

An array `a` is a **subset** of an array `b` if `a` can be obtained from `b` by deleting some (possibly zero) elements of `b`. Two subsets are considered **different** if the indices of the elements chosen are different.

The bitwise OR of an array `a` is equal to `a[0] OR a[1] OR ... OR a[a.length - 1]` (**0-indexed**).

## Solution Approach

The approach involves first determining the maximum bitwise OR that can be obtained by any subset. Then, using a recursive function, we count how many subsets produce this maximum OR value.

## Code Explanation

### `findAns` Function

- The function recursively explores all subsets of the input array `nums`.
- It starts at index `idx` and applies bitwise OR to the current value `curr` with each subsequent number.
- If the bitwise OR matches the maximum value (`ans`), it increments the counter `cnt`.

### `countMaxOrSubsets` Function

- This function calculates the maximum possible OR (`ans`) by iterating over the entire array.
- It then calls the `findAns` function to count all subsets that achieve this maximum OR.
  
## Complexity

- **Time Complexity:** $O(2^n)$, where `n` is the size of the array `nums`.
- **Space Complexity:** $O(n)$, due to the recursive stack used to explore subsets.
