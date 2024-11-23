# Flip Columns For Maximum Number of Equal Rows

## Problem Description

You are given an `m x n` binary matrix `matrix`.

You can choose any number of columns in the matrix and flip every cell in that column (i.e., Change the value of the cell from `0` to `1` or vice versa).

Return *the maximum number of rows that have all values equal after some number of flips*.

## Solution Approach

The solution leverages bit manipulation by using `bitset` to efficiently store the state of each row. For each row, a pattern is generated that represents the row after flipping the first element of the row. A `map` is used to store the frequency of each pattern, and the maximum frequency is returned as the result.

## Code Explanation

### `maxEqualRowsAfterFlips` Function

- We loop through each row of the matrix.
- For each row, we calculate a pattern based on the XOR operation between each element and the first element of the row. This helps in identifying the transformed state of the row when flipped.
- The `map` stores the frequency of each unique pattern, and the highest frequency gives the maximum number of identical rows.

### `comp` Lambda

- A custom comparator is used to lexicographically compare `bitset<300>` objects based on their string representation, ensuring that `map` can store them in sorted order.

## Complexity

- **Time Complexity:** $O(n \times m)$, where `n` is the number of rows and `m` is the number of columns.
- **Space Complexity:** $O(n \times m)$, where `n` is the number of rows and `m` is the number of columns.
