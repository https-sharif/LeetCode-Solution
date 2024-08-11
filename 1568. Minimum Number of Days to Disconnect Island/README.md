# Minimum Number of Days to Disconnect Island

## Problem Description

You are given an `m x n` binary grid grid where `1` represents land and `0` represents water. An island is a maximal **4-directionally** (horizontal or vertical) connected group of `1`'s.

The grid is said to be **connected** if we have **exactly one island**, otherwise is said **disconnected**.

In one day, we are allowed to change **any** single land cell `(1)` into a water cell `(0)`.

Return *the minimum number of days to disconnect the grid*.

## Solution Explanation

The solution involves using Depth-First Search (DFS) to explore and count the number of islands in the grid. The algorithm follows these steps:

1. **Count Initial Islands:** Use DFS to count the number of initial islands in the grid.
2. **Determine Immediate Disconnection:**
   - If the initial island count is more than one or zero, the grid is already disconnected, and the answer is `0` days.
3. **Simulate Disconnection by Removing One Land Cell:**
   - Iterate over each cell in the grid. For every land cell (`1`), temporarily change it to water (`0`) and count the islands again using DFS.
   - If removing any single cell results in the grid being disconnected (more than one island or no islands), return `1` day as the minimum time required to disconnect the grid.
4. **Return Default Disconnection Time:**
   - If no single removal results in disconnection, return `2` days as at least two operations are needed to ensure disconnection.

## Approach

The approach uses the DFS algorithm to explore connected components in the grid. The main idea is to check the connectivity of the grid by counting islands under different scenarios:

- **Initial Check:** If there are more than one or zero islands initially, return `0` days as the grid is already disconnected.
- **Single Cell Removal:** By attempting to remove each land cell individually and checking the resulting grid's island count, we can determine if the grid can be disconnected in `1` day.
- **Default Case:** If neither of the above conditions applies, the disconnection will require at least `2` days.

## Complexity

- **Time Complexity:** $O(n * m * (n + m))$
  - The DFS traversal runs for each cell, potentially exploring up to `n * m` cells in the grid for each island counting operation.
  - Each single cell removal and island count operation also takes `O(n * m)` time.

- **Space Complexity:** $O(n * m)$
  - A `visited` matrix of the same size as the grid is used to track visited cells during DFS traversal.
