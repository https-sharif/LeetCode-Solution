# Make Two Arrays Equal by Reversing Subarrays

## Problem 
You are given two integer arrays of equal length `target` and `arr`. In one step, you can select any **non-empty subarray** of `arr` and reverse it. You are allowed to make any number of steps.

Return `true` *if you can make* `arr` *equal to* `target` *or* `false` *otherwise.*

## Solution Explanation

Two arrays can be made identical by reversing subarrays if they have the same elements. Sorting both arrays and comparing them will determine if they can be made equal.

## Approach

1. **Sort Both Arrays**: Sort the `target` and `arr` arrays.
2. **Compare Sorted Arrays**: Check if the sorted arrays are identical.
3. **Return Result**:
   - If the sorted arrays are equal, return `true`.
   - Otherwise, return `false`.

## Complexity

- **Time Complexity**: O(n log n), where n is the number of elements in the arrays, due to sorting.
- **Space Complexity**: O(1), ignoring the space used by the sorting algorithm.
