# Max Points in a Matrix

## Description

You are given an `m x n` integer matrix `points` (0-indexed). Starting with 0 points, you want to maximize the number of points you can get from the matrix.

To gain points, you must pick one cell in each row. Picking the cell at coordinates `(r, c)` will add `points[r][c]` to your score.

However, you will lose points if you pick a cell too far from the cell that you picked in the previous row. For every two adjacent rows `r` and `r + 1` (where `0 <= r < m - 1`), picking cells at coordinates `(r, c1)` and `(r + 1, c2)` will subtract `abs(c1 - c2)` from your score.

Return the maximum number of points you can achieve.

## Solution Explanation

The problem requires a dynamic programming approach to calculate the maximum points possible. The key idea is to maintain a `dp` array where `dp[i][j]` represents the maximum points that can be achieved if we pick the cell `(i, j)` in the `i-th` row.

### Steps:
1. **Initialization**: Start by initializing the first row of the `dp` array with the corresponding values from the first row of `points`.

2. **Transition**:
    - For each subsequent row `i`, use two auxiliary arrays `left` and `right`.
    - `left[k]` stores the maximum value reachable from the left side up to column `k`, while `right[k]` stores the maximum value reachable from the right side.
    - These arrays help calculate the maximum points for each cell `(i, j)` considering the penalty from the previous row.

3. **Final Calculation**: After processing all rows, the answer is the maximum value in the last row of the `dp` array.

### Pseudocode:
- Fill the first row in `dp`.
- For each row from `1` to `n-1`:
  - Fill the `left` array.
  - Fill the `right` array.
  - Calculate the `dp` value for each cell using the maximum of `left[j]` and `right[j]`.
- Return the maximum value in the last row of `dp`.

This approach ensures that we consider the penalties when choosing distant cells in adjacent rows efficiently.

## Complexity

- **Time Complexity**: $O(m * n)$, where `m` is the number of rows and `n` is the number of columns in the matrix. This is because we iterate through the matrix multiple times, with each operation being linear with respect to the number of columns.
  
- **Space Complexity**: $O(m * n)$ for storing the `dp` array, and `O(n)` for the auxiliary arrays `left` and `right`.
