# Maximum Width Ramp

## Problem Description

A **ramp** in an integer array `nums` is a pair `(i, j)` for which `i < j` and `nums[i] <= nums[j]`. The **width** of such a ramp is `j - i`.

Given an integer array `nums`, return *the maximum width of a **ramp** in* `nums`. If there is no **ramp** in `nums`, return `0`.

## Solution Approach

We use a stack to keep track of indices where values are decreasing. Then, we traverse the array from the end to find the largest possible ramp by comparing values with the top of the stack and updating the maximum width.

## Code Explanation

The `maxWidthRamp` function finds the maximum width ramp in the array.

1. **Building the Stack**: 
   - We iterate through the array and use a stack to keep track of indices where the values are in decreasing order. This allows us to have quick access to the smallest values later for ramp comparisons.

2. **Finding the Maximum Ramp Width**:
   - We then traverse the array from the end to the beginning. For each element, we check if it can form a valid ramp with the indices stored in the stack. 
   - If the current element is greater than or equal to the value at the index from the top of the stack, we calculate the width of the ramp (`current index - index from stack`). We update the maximum width if this width is larger than the previously recorded maximum.
   - If a valid ramp is found, we pop the index from the stack to continue checking for wider ramps.

## Complexity

- **Time Complexity:** $O(n)$, since we process each element twice.
- **Space Complexity:** $O(n)$, for storing indices in the stack.
