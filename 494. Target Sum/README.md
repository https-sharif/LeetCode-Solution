# Target Sum

## Problem Description

You are given an integer array `nums` and an integer `target`.

You want to build an **expression** out of nums by adding one of the symbols `'+'` and `'-'` before each integer in nums and then concatenate all the integers.

- For example, if `nums = [2, 1]`, you can add a `'+'` before `2` and a `'-'` before `1` and concatenate them to build the expression `"+2-1"`.
  
Return the number of different **expressions** that you can build, which evaluates to `target`.

## Solution Approach

The problem reduces to a variant of the **0/1 knapsack problem** where:
1. We want to achieve a sum of `target` using subsets of the given numbers.
2. Instead of achieving exactly the target, we focus on a **subset sum problem** where we look to get `target / 2` (as it simplifies calculations).

### Steps:
1. Calculate the total sum of the elements in `nums`.
2. If `(sum - target)` is not divisible by 2 or `sum < target`, return 0 since it's impossible to achieve the target.
3. Convert the problem to a subset sum problem where we look for the sum `diff = (sum - target) / 2`.
4. Use dynamic programming to count the number of ways to achieve the `diff` using the elements of `nums`.

## Code Explanation

### `findTargetSumWays` Function

- **Base Check**: If `(sum - target) % 2 != 0` or `sum < target`, return 0 as it's impossible to achieve the target.
- **Subset Sum Transformation**: Convert the problem to finding the number of subsets that sum up to `diff = (sum - target) / 2`.
- **DP Array**: Use dynamic programming where `dp[j]` keeps track of the number of ways to get sum `j` using previous numbers.
- **DP Update**: For each number, update the DP array backward to avoid using the same number multiple times.

## Complexity

- **Time Complexity**: $O(n \times \text{diff})$, where `n` is the size of `nums`, since we iterate through all numbers and perform a DP update.
- **Space Complexity**: $O(\text{diff})$, due to the DP array that stores results for possible sums up to `diff`
