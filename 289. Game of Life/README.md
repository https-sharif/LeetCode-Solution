# Game of Life

## Problem Description

According to [Wikipedia's article](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life): "The **Game of Life**, also known simply as **Life**, is a cellular automaton devised by the British mathematician John Horton Conway in 1970."

The board is made up of an `m x n` grid of cells, where each cell has an initial state: **live** (represented by a `1`) or **dead** (represented by a `0`). Each cell interacts with its [eight neighbors](https://en.wikipedia.org/wiki/Moore_neighborhood) (horizontal, vertical, diagonal) using the following four rules (taken from the above Wikipedia article):

1. Any live cell with fewer than two live neighbors dies as if caused by under-population.
2. Any live cell with two or three live neighbors lives on to the next generation.
3. Any live cell with more than three live neighbors dies, as if by over-population.
4. Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.
The next state is created by applying the above rules simultaneously to every cell in the current state, where births and deaths occur simultaneously. Given the current state of the `m x n` grid `board`, return *the next state*.

## Solution Approach

The code uses an intermediate state to track changes in the board without affecting the counting of live neighbors. Cells transitioning from dead to alive and vice versa are marked with unique intermediate values (`2` and `3`). Finally, the intermediate values are converted to the next state.

## Code Explanation

### `deadOrAlive` Function

- Updates a cell based on the current state (`val`) and the count of its live neighbors (`cnt`).
- Returns:
  - `3` if a live cell dies.
  - `2` if a dead cell becomes alive.
  - The original value if no change occurs.

### `findNextState` Function

- Converts intermediate states:
  - Returns `0` for cells marked with `0` or `3` (dead).
  - Returns `1` for cells marked with `1` or `2` (alive).

### `gameOfLife` Function

- Loops through each cell in the board and counts its live neighbors.
- Updates the cell with the result of the `deadOrAlive` function.
- Uses bitwise AND (`& 1`) to ensure only the least significant bit is checked for the current state.
- Loops again to update the cells to their final states using `findNextState`.

## Complexity

- **Time Complexity:** $O(n \times m)$, where `n` is the number of rows and `m` is the number of columns.
- **Space Complexity:** $O(1)$, as the board is modified in place without using additional data structures.
