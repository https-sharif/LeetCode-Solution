# Set Matrix Zeroes

## Problem Description

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s. 

You must do it in place.

## Solution Approach

The solution iterates over the matrix twice:
1. First, it identifies the rows and columns that need to be set to zero by storing them in two separate vectors.
2. Then, it updates the respective rows and columns to zero based on the stored indices.

## Code Explanation

### `setZeroes` Function

- **Outer loops (row and col identification):**  
  It iterates through the matrix and collects the indices of rows and columns where a `0` is found.
  
- **Row update:**  
  For each row stored in the `row` vector, all its columns are set to `0`.

- **Column update:**  
  For each column stored in the `col` vector, all its rows are set to `0`.

## Complexity

- **Time Complexity:** $O(m \times n)$, where `m` is the number of rows and `n` is the number of columns.
- **Space Complexity:** $O(m + n)$, where `m` and `n` are the row and column vectors storing indices of zero elements.
