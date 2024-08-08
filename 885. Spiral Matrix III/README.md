# Spiral Matrix III

## Description

You start at the cell `(rStart, cStart)` of an `rows x cols` grid facing east. The northwest corner is at the first row and column in the grid, and the southeast corner is at the last row and column.

You will walk in a clockwise spiral shape to visit every position in this grid. Whenever you move outside the grid's boundary, we continue our walk outside the grid (but may return to the grid boundary later). Eventually, we reach all `rows * cols` spaces of the grid.

Return *an array of coordinates representing the positions of the grid in the order you visited them*.

## Solution Explanation

The solution involves starting from a given point `(r, c)` in the grid and moving in a spiral pattern to visit all cells.<br>
The movement is controlled using a direction vector that specifies the order of movement: right, down, left, and up.<br>
We use two loops per direction to move and increase the distance after completing two directional moves to expand the spiral outward.<br>

## Approach

1. **Direction Vector**: Define a vector `dir` containing pairs representing movement directions in the order: right, down, left, and up.

2. **Initialize Variables**:
   - `dist`: The initial distance for movement, starting at 1.
   - `dind`: The current direction index in the `dir` vector.
   - `ans`: A vector to store the result of visited cell coordinates.
   - `visited`: Total number of cells to visit, initialized as `rows * cols`.

3. **Main Loop**: Continue the loop until all cells are visited.
   - **Move in Current Direction**: For the current distance, move in the specified direction, checking if each new position is within grid boundaries. If so, add it to `ans`.
   - **Change Direction**: Update `dind` to switch to the next direction in the `dir` vector.
   - **Repeat**: Perform the same process for the second direction.
   - **Expand Spiral**: After completing two directional moves, increase the `dist` to expand the spiral outward.

4. **Return Result**: Once all cells are visited, return the `ans` vector containing the coordinates in the spiral order.

## Complexity

- **Time Complexity**: $O(rows * cols)$, the solution visits each cell exactly once in the grid.
- **Space Complexity**: $O(rows * cols)$, the space required for storing the result `ans`.

---
