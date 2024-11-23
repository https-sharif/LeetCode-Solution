# Maximum Number of Moves in a Grid

## Problem Description

You are given a **0-indexed** `m x n` matrix `grid` consisting of **positive** integers.

You can start at **any** cell in the first column of the matrix, and traverse the grid in the following way:

- From a cell `(row, col)`, you can move to any of the cells: `(row - 1, col + 1)`, `(row, col + 1)` and `(row + 1, col + 1)` such that the value of the cell you move to, should be **strictly** bigger than the value of the current cell.
  
Return *the **maximum** number of **moves** that you can perform*.

## Solution Approach

The solution uses a dynamic programming (DP) approach. We maintain a `dp` table to store the maximum moves that can be made starting from each cell in the grid. For each cell, we recursively check all possible paths to the right while ensuring that we only move to cells with a strictly higher value. The base case is when we reach the last column, from where no further moves are possible.

## Code Explanation

### `moveForward` Function

- **Purpose:** Recursively calculates the maximum moves that can be made starting from cell `(r, c)`.
- **Base Case:** If we reach the last column or if the current cell’s result is already calculated, return the stored result.
- **Recursive Checks:** For each cell `(r, c)`, check if we can move to `(r - 1, c + 1)`, `(r, c + 1)`, or `(r + 1, c + 1)` and ensure the next cell's value is strictly greater. Recursively compute the maximum moves for each valid move and update the result in `dp`.

### `maxMoves` Function

- **Purpose:** Calculates the maximum moves starting from any cell in the first column.
- **Initialization:** Creates a DP table with initial values set to `-1` (uncomputed).
- **Iterate:** For each row in the first column, initiate the recursive function `moveForward` and track the maximum result.

## Complexity

- **Time Complexity:** $O(n \times m)$, where `n` is the number of rows and `m` is the number of columns.
- **Space Complexity:** $O(n \times m)$, for storing the DP table of size `n x m`.
