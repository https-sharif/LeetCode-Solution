# Find if Array Can Be Sorted

## Problem Description

You are given a **0-indexed** array of **positive** integers `nums`.

In one **operation**, you can swap any two **adjacent** elements if they have the **same** number of set bits. You are allowed to do this operation **any** number of times (**including zero**).

Return `true` *if you can sort the array, else return* `false`.

## Solution Approach

The solution iterates through the array, grouping elements with the same count of 1-bits in their binary representation. For each new group of elements (with a different bit count), it checks if the minimum element in the current group is greater than the maximum element of the previous group. This ensures that each group can be sorted independently without violating the overall sorting order.

## Code Explanation

### `canSortArray` Function

- **Initialization**:
  `mx` and `mn` are set to the first element in `nums`, tracking the maximum and minimum values in the current group of elements that share the same bit count. `prev` starts as `INT_MIN` to store the maximum value of the previous group. `cnt` is initialized to the bit count of the first element, marking the current group's bit count.

- **Loop Through Array**:
  For each element in `nums`:
  
  - Calculate its bit count, `currCnt`.
  - If `currCnt` differs from `cnt` (indicating a new group of elements):
    - Check if the minimum value `mn` of the current group is less than `prev` (the max of the previous group). If it is, return `false` since this order violates the sorting condition.
    - Otherwise, update `prev` to `mx` (the max of the current group), reset `mn` and `mx` to start tracking the new group’s min and max values, and set `cnt` to `currCnt`.
  
  - If `currCnt` matches `cnt`, the element belongs to the current group. Update `mn` and `mx` accordingly.

- **Final Check**:
  After the loop, return `true` if the minimum value `mn` of the last group is greater than `prev`. This ensures that all groups can be sorted independently to achieve the overall sorted order.
  
## Complexity

- **Time Complexity**: $O(n)$, where `n` is the length of `nums`.
- **Space Complexity**: $O(1)$, as only a constant amount of extra space is used for variables.
