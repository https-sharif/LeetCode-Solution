# Count Unguarded Cells in the Grid

## Problem Description

You are given two integers `m` and `n` representing a **0-indexed** `m x n` grid. You are also given two 2D integer arrays `guards` and `walls` where `guards[i] = [row`<sub>`i`</sub>`, col`<sub>`i`</sub>`]` and `walls[j] = [row`<sub>`j`</sub>`, col`<sub>`j`</sub>`]` represent the positions of the `i`<sup>`th`</sup> guard and `j`<sup>`th`</sup> wall respectively.

A guard can see **every** cell in the four cardinal directions (north, east, south, or west) starting from their position unless **obstructed** by a wall or another guard. A cell is **guarded** if there is **at least** one guard that can see it.

Return *the number of unoccupied cells that are **not guarded***.

## Solution Approach

The solution involves marking walls, guards, and the cells guarded by guards on a 2D grid. For each guard, the cells it can guard in all four cardinal directions are traversed until a wall or another guard is encountered. Finally, unguarded cells are counted.

## Code Explanation

### `countUnguarded` Function

1. **Grid Initialization**:
   - `1`: Represents unguarded cells.
   - `-1`: Represents walls.
   - `-2`: Represents guards.

2. **Marking Walls and Guards**:
   - Iterate through the input to mark walls and guards directly on the grid.

3. **Marking Guarded Cells**:
   - Use a directional vector to traverse the grid in four directions (up, down, left, right) for each guard until a wall or guard is encountered.
   - Mark guarded cells as `0`.

4. **Counting Unguarded Cells**:
   - Traverse the grid and count cells that remain `1`.

## Complexity

- **Time Complexity**: $O(m \cdot n + g \cdot \max(m, n))$, where `g` is the number of guards.
- **Space Complexity**: $O(m \cdot n)$, for the grid.
