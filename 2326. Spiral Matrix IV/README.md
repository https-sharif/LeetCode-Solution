# Spiral Matrix IV

## Problem Description

You are given two integers `m` and `n`, which represent the dimensions of a matrix.

You are also given the `head` of a linked list of integers.

Generate an `m x n` matrix that contains the integers in the linked list presented in **spiral** order **(clockwise)**, starting from the **top-left** of the matrix. If there are remaining empty spaces, fill them with `-1`.

Return *the generated matrix*.

## Solution Approach

The algorithm initializes a matrix of size `m x n` with all values set to `-1`. It then traverses the matrix in a spiral order while filling the matrix with the values from the linked list, updating the boundaries as it progresses. If the linked list ends before the matrix is filled, the remaining positions are left as `-1`.

## Code Explanation

### `spiralMatrix` Function

- The function starts by creating an empty `m x n` matrix filled with `-1`.
- It defines boundary variables (`up`, `down`, `left`, `right`) to keep track of the current layer of the matrix being filled.
- The matrix is filled in spiral order using four loops: 
  - Left to right (top row).
  - Top to bottom (right column).
  - Right to left (bottom row).
  - Bottom to top (left column).
- The function continues filling the matrix until either the matrix is complete or the linked list runs out of elements.

## Complexity

- **Time Complexity:** $O(m \times n)$, because each element of the matrix is visited once.
- **Space Complexity:** $O(m \times n)$, due to the storage required for the matrix.
