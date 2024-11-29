# Minimum Time to Visit a Cell In a Grid

## Problem Description

You are given a `m x n` matrix `grid` consisting of **non-negative** integers where `grid[row][col]` represents the **minimum** time required to be able to visit the cell `(row, col)`, which means you can visit the cell `(row, col)` only when the time you visit it is greater than or equal to `grid[row][col]`.

You are standing in the **top-left** cell of the matrix in the `0`<sup>`th`</sup> second, and you must move to **any** adjacent cell in the four directions: up, down, left, and right. Each move you make takes 1 second.

Return *the **minimum** time required in which you can visit the bottom-right cell of the matrix*. If you cannot visit the bottom-right cell, then return `-1`.

## Solution Approach

The solution uses a shortest-path algorithm (Dijkstra's algorithm) to calculate the minimum time required to reach each cell. A priority queue is employed to efficiently retrieve the next cell to process based on the smallest accumulated time. The grid values and the time constraint for each move are considered to calculate the time taken to move from one cell to another.

## Code Explanation

### `valid` Function
This function checks whether the given coordinates (i, j) are within the bounds of the grid.

### `minimumTime` Function
- Initializes the grid size, direction vectors, and a distance matrix (`dist`) to store the minimum time for each cell.
- The priority queue stores pairs of time and coordinates, sorted by the minimum time.
- It processes each cell by updating the time taken to reach adjacent cells based on the current time and grid values.
- The final result is the minimum time to reach the destination cell or `-1` if it's not possible.

## Complexity

- **Time Complexity:** $O(n \times m \log(n \times m))$, where `n` is the number of rows and `m` is the number of columns in the grid.
- **Space Complexity:** $O(n \times m)$, which accounts for the distance matrix and the priority queue storing the state of each cell.
