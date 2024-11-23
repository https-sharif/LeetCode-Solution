# Count Squares Submatrices with All Ones

## Problem Description

Given a `m * n` matrix of ones and zeros, return how many **square** submatrices have all ones.

## Solution Approach

This solution uses dynamic programming to count the number of squares that can be formed with the bottom-right corner at each cell of the matrix. It maintains a `sq` matrix to store the size of the largest square that can end at each cell.

## Code Explanation

### `countSquares` Function

1. **Initialization**: Get the dimensions of the input matrix and initialize a `sq` matrix to store the size of the largest squares. Initialize `ans` to keep track of the total count of squares.
2. **Nested Loop**: Iterate through each cell in the matrix:
   - If the cell contains a `1`:
     - If it's in the first row or column, it can only form a square of size `1`.
     - Otherwise, determine the size of the largest square using the minimum size of squares ending at the neighboring cells (up, left, and top-left diagonal) plus one.
3. **Count Squares**: Add the size of the square found at each cell to `ans`.
4. **Return Result**: Return the total count of squares.

## Complexity

- **Time Complexity:** $O(n \times m)$, where `n` is the number of rows and `m` is the number of columns in the matrix.
- **Space Complexity:** $O(n \times m)$, for the 2D vector `sq`.
