# Find K-th Smallest Pair Distance

## Problem Description

The **distance of a pair** of integers `a` and `b` is defined as the absolute difference between `a` and `b`.

Given an integer array `nums` and an integer `k`, return *the* `k`<sup>`th`</sup> *smallest distance among all the pairs* `nums[i]` *and* `nums[j]` *where* `0 <= i < j < nums.length`.

## Solution Approach

The solution uses a combination of sorting, binary search, and a helper function to count the number of pairs with a difference less than or equal to a given value (`mid`).

1. **Sorting**: 
   - First, the array `nums` is sorted. This allows us to efficiently compute pairwise differences in a structured way.

2. **Binary Search**:
   - We perform a binary search on the possible values of the distance (from `0` to the difference between the maximum and minimum elements in the array).
   - For each midpoint `mid`, the helper function `countK` counts how many pairs have a difference less than or equal to `mid`.

3. **Counting Pairs**:
   - The helper function `countK` iterates over the array with two pointers to count the number of valid pairs for a given `mid`.
   - If the count of such pairs is greater than or equal to `k`, we adjust our search range to find a smaller distance, otherwise, we search for a larger one.

4. **Final Result**:
   - The binary search terminates when `left` equals `right`, and this value represents the `k`-th smallest distance.

## Complexity

- **Time Complexity**: $O(n log n + n log D)$
  - Sorting takes $O(n log n)$. Binary search with pair counting runs in $O(n log D)$, where `D` is the range of possible differences.

- **Space Complexity**: $O(1)$ 
  - Uses constant extra space.
