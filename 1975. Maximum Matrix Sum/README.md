# Maximum Matrix Sum

## Problem Description

You are given an `n x n` integer `matrix`. You can do the following operation **any** number of times:

- Choose any two **adjacent** elements of `matrix` and **multiply** each of them by `-1`.

Two elements are considered **adjacent** if and only if they share a **border**.

Your goal is to **maximize** the summation of the matrix's elements. Return *the **maximum** sum of the matrix's elements using the operation mentioned above*.

## Solution Approach

The approach involves calculating the sum of all absolute values in the matrix while counting the number of negative elements and finding the smallest absolute value. If the number of negatives is even, the maximum sum is the total sum of absolute values. If odd, the smallest absolute value is subtracted twice to maximize the sum after flipping.

## Code Explanation

### `maxMatrixSum` Function

1. **Initialization**:
   - `sum` holds the sum of absolute values of all elements.
   - `neg` counts the number of negative values in the matrix.
   - `mn` tracks the smallest absolute value in the matrix.

2. **Matrix Traversal**:
   - Iterate over each element:
     - If negative, increase `neg`, add the absolute value to `sum`, and update `mn`.
     - If positive, add the value to `sum` and update `mn`.

3. **Result Calculation**:
   - If the number of negative values (`neg`) is even, return `sum`.
   - Otherwise, subtract `2 * mn` from `sum` to adjust for one unflipped negative.

## Complexity

- **Time Complexity:** $O(n^2)$, where `n` is the size of the matrix.
- **Space Complexity:** $O(1)$, as only constant extra space is used.
