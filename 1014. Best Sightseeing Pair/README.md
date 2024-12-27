# Maximum Score of Sightseeing Spots

## Problem Description

You are given an integer array `values` where values[i] represents the value of the `i`<sup>`th`</sup> sightseeing spot. Two sightseeing spots `i` and `j` have a **distance** `j - i` between them.

The score of a pair (`i < j`) of sightseeing spots is `values[i] + values[j] + i - j`: the sum of the values of the sightseeing spots, minus the distance between them.

Return *the maximum score of a pair of sightseeing spots*.

## Solution Approach

The solution uses a two-pass approach:

1. **Suffix Maximum Precomputation**:
   - Calculate the maximum possible value for `values[j] - j` from right to left and store it in a suffix array.

2. **Iterate Through the Array**:
   - For each index `i`, compute the maximum score using the precomputed suffix values.

## Code Explanation

- The `suffix` array keeps track of the largest value of `values[j] - j` starting from each index `j` to the end of the array. This helps to quickly find the best possible score contribution for any given index `i`.
- Next, we loop through the array and calculate the score for each index `i` by combining `values[i] + i` with the precomputed maximum value from the `suffix` array.
- If the input array has fewer than two elements, it is not possible to calculate a valid score, so the output is set to a default value.

## Complexity

- **Time Complexity**: $O(n)$, due to the linear computation of the suffix maximum and the main loop.
- **Space Complexity**: $O(n)$, for the `suffix` array.
