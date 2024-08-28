# Count Sub Islands

## Problem Description 

You are given two `m x n` binary matrices `grid1` and `grid2` containing only `0`'s (representing water) and `1`'s (representing land). An **island** is a group of `1`'s connected **4-directionally** (horizontal or vertical). Any cells outside of the grid are considered water cells.

An island in `grid2` is considered a **sub-island** if there is an island in `grid1` that contains **all** the cells that make up **this** island in grid2.

Return *the **number** of islands in* `grid2` *that are considered **sub-islands***.

## Solution Approach

The solution counts the number of sub-islands in `grid2` that are completely within islands in `grid1`. An island is a group of connected cells with value `1`.

**Approach:**
1. **Initialization:** 
   - `n` and `m` represent the number of rows and columns in the grids, respectively.
   - `ans` stores the count of valid sub-islands.

2. **Traversal:**
   - Iterate through each cell in `grid2`.
   - If a cell is part of an island (i.e., `grid2[i][j] == 1`), start a DFS to check if it forms a valid sub-island in `grid1`.

3. **DFS Function:**
   - The DFS function checks four directions (up, down, left, right) to ensure the entire island in `grid2` is within the bounds of an island in `grid1`.
   - If any part of the island in `grid2` does not overlap with an island in `grid1`, mark the result as `0` (indicating it's not a valid sub-island).
   - After checking, mark the cell in `grid2` as `0` to avoid re-visiting.

4. **Counting Sub-Islands:**
   - The result of each DFS is added to `ans`. If the result remains `1`, it means the entire island in `grid2` is a valid sub-island.

## Complexity

- **Time:** $O(n * m)$ — Each cell is visited once.
- **Space:** $O(n * m)$ — Due to the recursion stack in DFS.
