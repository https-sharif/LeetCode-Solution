# Stone Game II

Alice and Bob continue their games with piles of stones.  There are a number of piles **arranged in a row**, and each pile has a positive integer number of stones `piles[i]`.  The objective of the game is to end with the most stones. 

Alice and Bob take turns, with Alice starting first.  Initially, `M = 1`.

On each player's turn, that player can take **all the stones** in the **first** `X` remaining piles, where `1 <= X <= 2M`.  Then, we set `M = max(M, X)`.

The game continues until all the stones have been taken.

Assuming Alice and Bob play optimally, return the maximum number of stones Alice can get.


## Solution Approach

1. **Suffix Sum Calculation**:
   - Compute the `suffix` array where `suffix[i]` represents the total number of stones from index `i` to the end of the piles array.

2. **Dynamic Programming (DP) Table**:
   - Use a 2D DP table `memo[i][j]` to represent the maximum number of stones that can be collected starting from index `i` with the maximum number of stones that can be taken being `j`.

3. **DP Transition**:
   - Update the DP table by iterating over all possible moves and computing the optimal number of stones the current player can collect.

4. **Result**:
   - The result is found in `memo[0][1]`, representing the maximum number of stones that can be collected starting from index `0`.

## Complexity

- **Time Complexity**: $O(n^3)$, where `n` is the number of piles, due to the three nested loops.
- **Space Complexity**: $O(n^2)$, for storing the `memo` and `suffix` arrays.
