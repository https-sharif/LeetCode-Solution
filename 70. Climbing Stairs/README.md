#Climbing Stairs

You are climbing a staircase. It takes `n` steps to reach the top.

Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?

## Solution Approach
This solution uses a dynamic programming (DP) approach with memoization to solve the "Climbing Stairs" problem, which is a variation of the Fibonacci sequence.

1. **Memoization**: The `memo` vector stores results of subproblems to avoid redundant calculations.
2. **Recursive DP Function**: The `dp(int n)` function computes the number of ways to climb `n` stairs by recursively adding the results for `n-1` and `n-2` stairs.
3. **Base Case**: If `n` is 0 or 1, there's only one way to climb the stairs.
4. **Initialization**: The `climbStairs` function initializes the `memo` vector with `-1` and resizes it to handle up to 45 stairs, given the problem's constraints.

## Complexity
- **Time Complexity**: `O(n)` – Each subproblem is solved once, leading to linear time complexity.
- **Space Complexity**: `O(n)` – The space complexity is also linear due to the memoization array used to store results for each subproblem.
