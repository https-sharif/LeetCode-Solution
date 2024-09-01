# Construct 2D Array

## Problem Description

You are given a **0-indexed** 1-dimensional (1D) integer array `original`, and two integers, `m` and `n`. You are tasked with creating a 2-dimensional (2D) array with `m` rows and `n` columns using **all** the elements from `original`.

The elements from indices `0` to `n - 1` **(inclusive)** of `original` should form the first row of the constructed 2D array, the elements from indices `n` to `2 * n - 1` **(inclusive)** should form the second row of the constructed 2D array, and so on.

Return *an* `m x n` *2D array constructed according to the above procedure, or an empty 2D array if it is impossible*.

## Solution Approach

The solution verifies if the size of `original` matches `m * n`. If it does, it iterates through the `original` array and fills the 2D array `result` row by row. If the size does not match, it returns an empty 2D array.

## Code Explanation

### `construct2DArray` Function

- **Input Check:** The function starts by checking if the size of `original` is equal to `m * n`. If not, it returns an empty 2D array.
  
- **Initialization:** A 2D vector `result` of size `m x n` is initialized to store the resulting 2D array.
  
- **Element Assignment:** A nested loop is used to populate the 2D array. The outer loop iterates over the rows, and the inner loop iterates over the columns, assigning values from `original` to `result` sequentially.

## Complexity

- **Time Complexity:** $O(m \times n)$, where `m` is the number of rows and `n` is the number of columns. This is because each element of the `original` array is visited exactly once to fill the 2D array.
- **Space Complexity:** $O(m \times n)$, which is the space required to store the 2D array.
