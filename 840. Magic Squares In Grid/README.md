# Magic Squares Inside a Grid

## Problem Description

A `3 x 3` **magic square** is a `3 x 3` grid filled with distinct numbers **from** 1 **to** 9 such that each row, column, and both diagonals all have the same sum.

Given a `row x col` `grid` of integers, how many `3 x 3` contiguous magic square subgrids are there?

Note: while a magic square can only contain numbers from 1 to 9, `grid` may contain numbers up to 15.

## Solution Explanation

The solution involves iterating over all possible 3x3 sub-grids within the given grid. For each sub-grid, the program checks if it meets the criteria of a magic square, i.e., all numbers from 1 to 9 are used exactly once and all rows, columns, and diagonals sum to the same value. The `helper` function is used to validate each 3x3 sub-grid.

## Approach

1. **Initialize Variables**: Create a 3x3 matrix `mat` to represent each sub-grid and a counter `ans` to count the number of magic squares found.

2. **Iterate Over Sub-Grids**: Loop over all possible starting points `(i, j)` in the grid that can form a 3x3 sub-grid.

3. **Check Each Sub-Grid**: For each sub-grid:
   - Fill the `mat` with the current 3x3 section of the grid.
   - Use the `helper` function to verify if `mat` is a magic square by checking:
     - Each number is unique and between 1 and 9.
     - Sums of each row, column, and both diagonals are equal.

4. **Increment Counter**: If the sub-grid is a magic square, increment the counter `ans`.

5. **Return Result**: After iterating over all sub-grids, return the count `ans`.

## Complexity

- **Time Complexity**: $O(n * m)$, where `n` is the number of rows and `m` is the number of columns in the grid.
- **Space Complexity**: $O(1)$, as we only use a fixed amount of extra space for the 3x3 matrix `mat` and a few additional variables.
