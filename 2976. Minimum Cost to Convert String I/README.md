# Minimum Cost to Convert String I

## Problem Description

You are given two **0-indexed** strings `source` and `target`, both of length `n` and consisting of **lowercase** English letters. You are also given two **0-indexed** character arrays `original` and `changed`, and an integer array `cost`, where `cost[i]` represents the cost of changing the character `original[i]` to the character `changed[i]`.

You start with the string `source`. In one operation, you can pick a character `x` from the string and change it to the character `y` at a cost of `z` if there exists **any** index `j` such that `cost[j] == z`, `original[j] == x`, and `changed[j] == y`.

Return *the minimum cost to convert the string* `source` *to the string* `target` *using **any** number of operations. If it is impossible to convert* `source` *to* `target`*, return* `-1`.

Note that there may exist indices `i`, `j` such that `original[j] == original[i]` and `changed[j] == changed[i]`.

## Solution Approach

1. **Initialize Distance Matrix**:
   - Use a 2D array `g` to store the minimum cost to convert one character to another. Initialize all costs to a large value (infinity) except the diagonal, where the cost is zero (a character to itself).

2. **Populate Direct Costs**:
   - Update the matrix with the given transformation costs from the `original` and `changed` arrays.

3. **Compute Minimum Costs Using Floyd-Warshall Algorithm**:
   - Apply the Floyd-Warshall algorithm to compute the shortest paths (minimum costs) between all pairs of characters. This helps in finding the minimum cost to convert any character to any other character through intermediate characters.

4. **Calculate Total Conversion Cost**:
   - Traverse through each character in `source` and `target`. For each character pair, check if conversion is possible using the computed minimum costs. Accumulate the total conversion cost.

5. **Handle Infeasibility**:
   - If any conversion is not possible (i.e., cost remains infinite), return -1.

6. **Return Result**:
   - Return the accumulated conversion cost.

## Complexity

- **Time Complexity**: $O(26^3 + n)$, where `26`<sup>`3`</sup> accounts for the Floyd-Warshall algorithm which processes a constant-sized matrix `(26x26)`. The additional `O(n)` accounts for processing each character in the `source` and `target` strings.
- **Space Complexity**: $O(26^2)$ for the distance matrix `g`.
