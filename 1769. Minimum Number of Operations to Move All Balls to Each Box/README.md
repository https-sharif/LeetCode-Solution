# Minimum Number of Operations to Move All Balls to Each Box

## Problem Description

You have `n` boxes. You are given a binary string `boxes` of length `n`, where `boxes[i]` is `'0'` if the `i`<sup>`th`</sup> box is **empty**, and `'1'` if it contains **one** ball.

In one operation, you can move **one** ball from a box to an adjacent box. Box `i` is adjacent to box `j` if `abs(i - j) == 1`. Note that after doing so, there may be more than one ball in some boxes.

Return an array `answer` of size `n`, where `answer[i]` is the **minimum** number of operations needed to move all the balls to the `i`<sup>`th`</sup> box.

Each `answer[i]` is calculated considering the **initial** state of the boxes.

## Solution Approach

The solution calculates the minimum operations to move all balls to each box by:
1. Using two passes:
   - Left-to-right to compute the cumulative operations needed to move balls to the current box considering only the left side.
   - Right-to-left to do the same for the right side.
2. Combining the results from the two passes for each box.

## Code Explanation

### `minOperations` Function

1. **Initialization**: 
   - `left` and `right` vectors track cumulative operations from left and right passes, respectively.
   - Variables `balls` (count of balls) and `cost` (operations so far) are used during traversal.

2. **Left-to-Right Pass**:
   - For each box, add `balls` (number of balls so far) to `cost`, storing the result in `left[i]`.
   - Update `balls` with the number of balls in the current box (`boxes[i] - '0'`).

3. **Right-to-Left Pass**:
   - Similarly, calculate cumulative operations for the right side and store them in `right[i]`.

4. **Combining Results**:
   - Add `left[i]` and `right[i]` for each box to get the total minimum operations for that box.

5. **Return the Result**: Return the `ans` vector containing the results.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the string. The algorithm processes the string twice (left-to-right and right-to-left), making the complexity linear.
- **Space Complexity:** $O(n)$, for storing the `left`, `right`, and `ans` arrays, each of size `n`.
