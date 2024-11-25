# Maximum Matrix Sum

## Problem Description

You are given an `n x n` integer matrix. You can do the following operation **any** number of times:

- Choose any two **adjacent** elements of matrix and **multiply** each of them by `-1`.
  
Two elements are considered **adjacent** if and only if they share a **border**.

Your goal is to **maximize** the summation of the matrix's elements. Return *the **maximum** sum of the matrix's elements using the operation mentioned above*.

## Solution Approach

The goal is to maximize the sum of the matrix. The solution involves calculating the total sum of absolute values of all elements and ensuring the final sum is maximized by minimizing the impact of negative elements.

### Key Observations:

1. If the count of negative numbers (`neg`) in the matrix is even, all numbers can be made non-negative for the maximum sum.
2. If the count of negative numbers is odd, one element must remain negative. To minimize the reduction in sum, the element with the smallest absolute value is left negative.

### Steps:

1. Traverse the matrix to compute:
   - The sum of the absolute values of all elements.
   - Count of negative numbers (`neg`).
   - The smallest absolute value (`mn`) in the matrix.
2. If `neg` is even, return the total sum of absolute values.
3. If `neg` is odd, subtract twice the smallest absolute value from the sum to account for the mandatory negative element.

## Code Explanation

### `maxMatrixSum` Function

1. **Initialization**:
   - `sum`: Accumulates the total absolute sum.
   - `neg`: Counts negative elements.
   - `mn`: Tracks the smallest absolute value in the matrix.

2. **Matrix Traversal**:
   - For each element:
     - Update `neg` if the element is negative.
     - Add the absolute value to `sum`.
     - Update `mn` to track the smallest absolute value.

3. **Result Calculation**:
   - If `neg % 2 == 0`, return `sum` (all elements can be made non-negative).
   - Otherwise, subtract `2 * mn` from `sum` to account for the smallest value that remains negative.

## Complexity

- **Time Complexity:** $O(n^2)$, where `n` is the size of the matrix.
- **Space Complexity:** $O(1)$, as no extra space proportional to input size is used.
