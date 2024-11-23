# Rotating the Box

## Problem Description

You are given an `m x n` matrix of characters `box` representing a side-view of a box. Each cell of the box is one of the following:

- A stone `'#'`
- A stationary obstacle `'*'`
- Empty `'.'`
  
The box is rotated **90 degrees clockwise**, causing some of the stones to fall due to gravity. Each stone falls down until it lands on an obstacle, another stone, or the bottom of the box. Gravity **does not** affect the obstacles' positions, and the inertia from the box's rotation **does not** affect the stones' horizontal positions.

It is **guaranteed* that each stone in `box` rests on an obstacle, another stone, or the bottom of the box.

Return **an** `n x m` *matrix representing the box after the rotation described above*.

## Solution Approach

The solution iteratively processes each row of the box:
1. Moves stones (`#`) to the lowest available position in the same row while respecting obstacles (`*`).
2. Constructs the rotated box matrix by transposing and reversing rows.

## Code Explanation

### `findNext` Function

- **Purpose**: Finds the next available empty position (`.`) in a row, starting from the given index.
- **Logic**: Iterates backward in the row until an empty cell or the beginning of the row is reached.

### `rotateTheBox` Function

1. **Gravity Simulation**:
   - Processes each row in the box to move stones (`#`) to the lowest available position (`.`).
   - Stops and resets the available position when encountering an obstacle (`*`).

2. **Matrix Rotation**:
   - Constructs a new matrix by rotating the adjusted box clockwise.
   - This is done by transposing the matrix and reversing each row.

## Complexity

- **Time Complexity**: $O(n \times m)$, where `n` is the number of rows and `m` is the number of columns.
- **Space Complexity**: $O(n \times m)$, for the output matrix.
