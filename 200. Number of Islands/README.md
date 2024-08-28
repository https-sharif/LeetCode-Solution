# Number of Islands

# Problem Description

Given an `m x n` 2D binary grid `grid` which represents a map of `'1'`s (land) and `'0'`s (water), return *the number of islands*.

An **island** is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

## Solution Approach

This solution uses the Union-Find algorithm to count the number of islands in a grid:

1. **Initialization**:
   - Initialize `parent` and `rank` arrays.
   - Count the number of land cells ('1's) as the initial number of islands.

2. **Union-Find Operations**:
   - For each land cell, perform union operations for adjacent land cells.
   - Decrease the island count when two sets are merged.

3. **Helper Functions**:
   - `formula(int x, int y, int m)`: Converts 2D coordinates to 1D index.
   - `find(int x, vector<int>& parent)`: Finds the root of the set containing `x`.
   - `unionSet(int x, int y, vector<int>& rank, vector<int>& parent)`: Merges the sets containing `x` and `y`.

## Complexity

- **Time Complexity**: $O(n * m⋅α(n * m))$, where `n` is the number of rows, `m` is the number of columns, and `α` is the inverse Ackermann function.
- **Space Complexity**: $O(n * m)$ for the `parent` and `rank` arrays.
