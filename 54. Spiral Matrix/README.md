# Spiral Matrix

## Problem Description

Given an `m * n` `matrix`, return *all elements of the* `matrix` *in spiral order*.

## Solution Approach

1. **Initialize Boundaries and Direction**:
   - Define boundaries for the traversal: `xleft`, `xright`, `yup`, and `ydown`.
   - Use a variable `dir` to keep track of the current direction of traversal (right, down, left, up).

2. **Traverse the Matrix in Spiral Order**:
   - While there are elements left to process (`numOfElement`):
     - **Right**: Traverse from `xleft` to `xright` along the top row (`yup`), then move the `yup` boundary down.
     - **Down**: Traverse from `yup` to `ydown` along the right column (`xright`), then move the `xright` boundary left.
     - **Left**: Traverse from `xright` to `xleft` along the bottom row (`ydown`), then move the `ydown` boundary up.
     - **Up**: Traverse from `ydown` to `yup` along the left column (`xleft`), then move the `xleft` boundary right.
   - Update the direction cyclically using `(dir + 1) % 4`.

3. **Return Result**:
   - Return the vector `ans` containing the elements in spiral order.

## Complexity

- **Time Complexity**: $O(m * n)$, where `m` is the number of rows and `n` is the number of columns.
- **Space Complexity**: $O(m * n)$ for storing the result in the vector `ans`.
