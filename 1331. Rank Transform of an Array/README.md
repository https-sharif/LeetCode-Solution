# Rank Transform of an Array

## Problem Description

Given an array of integers `arr`, replace each element with its rank. 

The rank represents how large the element is. The rank has the following rules:

- Rank is an integer starting from 1.
- The larger the element, the larger the rank. If two elements are equal, their rank must be the same.
- Rank should be as small as possible.

## Solution Approach

This code creates a rank mapping for each unique element in the array, sorts the elements to determine their ranks, and replaces the original elements with their corresponding ranks.

## Code Explanation

### `arrayRankTransform` Function

1. **Initialization**: Create a hashmap `rank` to store the ranks and a copy of `arr` called `sorted` for sorting.
2. **Sorting**: Sort the `sorted` array.
3. **Rank Assignment**: Iterate through the `sorted` array, assigning ranks starting from 1. If an element already has a rank assigned, skip it.
4. **Rank Replacement**: Replace each element in the original `arr` with its rank using the `rank` hashmap.
5. **Return**: Return the modified `arr`.

## Complexity

- **Time Complexity:** $O(n \log n)$, where $n$ is the number of elements in the array due to the sorting step.
- **Space Complexity:** $O(n)$, for storing the ranks in the hashmap and the sorted array.
