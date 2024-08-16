# Maximum Distance in Arrays

## Problem Description

You are given `m` `arrays`, where each array is sorted in **ascending order**.

You can pick up two integers from two different arrays (each array picks one) and calculate the distance. We define the distance between two integers `a` and `b` to be their absolute difference `|a - b|`.

Return *the maximum distance*.

## Solution Approach

The solution involves iterating over the arrays and keeping track of the minimum and maximum elements encountered so far:

1. **Initial Setup:** Initialize the minimum (`mn`) and maximum (`mx`) values using the first array.
2. **Iterate Through Arrays:**
    - For each subsequent array, calculate the potential maximum distance using the first element of the current array with the previously tracked maximum (`mx`) and the last element of the current array with the previously tracked minimum (`mn`).
    - Update the maximum distance (`d`) found so far.
    - Update the minimum and maximum values (`mn` and `mx`) to include the current array's first and last elements.
3. **Return the Result:** After iterating through all arrays, return the maximum distance found.

## Complexity

- **Time Complexity:** `O(n)`, where `n` is the number of arrays. The solution iterates through the list of arrays once.
- **Space Complexity:** `O(1)`, as only a fixed amount of extra space is used regardless of the input size.
