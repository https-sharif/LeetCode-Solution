# Min Cost Climbing Stairs

## Problem Description

You are given an integer array `cost` where `cost[i]` is the cost of `i`<sup>`th`</sup> step on a staircase. Once you pay the cost, you can either climb one or two steps.

You can either start from the step with index `0`, or the step with index `1`.

Return *the minimum cost to reach the top of the floor*.

## Solution Approach

We use dynamic programming with memoization to calculate the minimum cost of reaching the top. The idea is to start from either step 0 or step 1, then recursively find the minimum cost for each step, taking the smaller of the two possible moves (one step ahead or two steps ahead).

## Code Explanation

### `dp` Function

- **Base Case:** If the index exceeds the size of the `cost` array, return 0 (you’ve reached the top).
- **Memoization Check:** If the value for `memo[idx]` is already computed, return it to avoid redundant calculations.
- **Recursive Step:** 
    - Calculate the cost if you step to the next or the one after next.
    - Take the minimum of these two options and add the current step cost.

### `minCostClimbingStairs` Function

- Initializes a memoization array and calculates the minimum cost to reach the top from either the 0th or the 1st step, returning the minimum of the two.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of steps.
- **Space Complexity:** $O(n)$, due to the memoization array used to store intermediate results.
