# Minimum Obstacle Removal to Reach Corner

## Problem Description

You are given a **0-indexed** 2D integer array `grid` of size `m x n`. Each cell has one of two values:

- `0` represents an **empty** cell,
- `1` represents an **obstacle** that may be removed.
  
You can move up, down, left, or right from and to an empty cell.

Return *the **minimum** number of **obstacles** to **remove** so you can move from the upper left corner* `(0, 0)` *to the lower right corner* `(m - 1, n - 1)`.

## Solution Approach

The problem is solved using a modified Dijkstra's algorithm, where the goal is to minimize the "cost" of moving through the grid. Each cell's "cost" is represented by the number of obstacles encountered so far. The algorithm uses a priority queue to explore the least costly path first, ensuring that we always move towards the path with the least obstacles.

## Code Explanation

### `valid` Function
This function checks if a given cell `(i, j)` is within the bounds of the grid.

### `minimumObstacles` Function
1. **Initialization:** The grid size `n x m` is extracted, and a `cost` matrix is initialized to store the minimum obstacles encountered to reach each cell. The top-left cell starts with a cost of `0`, and the priority queue is initialized with this cell.
2. **Main Loop:** The priority queue processes each cell starting from the top-left. For each cell, we attempt to move in all four possible directions. If a move leads to a cell with a lower "cost" (fewer obstacles), the new cost is updated, and the new state is added to the queue.
3. **Final Output:** The algorithm continues until the bottom-right corner is reached, and the minimum number of obstacles to reach this point is returned.

## Complexity

- **Time Complexity:** $O(n \cdot m \cdot \log(n \cdot m))$, where `n` is the number of rows and `m` is the number of columns.
- **Space Complexity:** $O(n \cdot m)$, for storing the `cost` matrix and the priority queue.
