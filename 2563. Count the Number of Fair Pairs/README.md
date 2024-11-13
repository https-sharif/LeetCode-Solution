# Count the Number of Fair Pairs

## Problem Description

Given a **0-indexed** integer array `nums` of size `n` and two integers `lower` and `upper`, return *the number of fair pairs*.

A pair `(i, j)` is **fair** if:

- `0 <= i < j < n`, and
- `lower <= nums[i] + nums[j] <= upper`

## Solution Approach

The algorithm sorts the array and then, for each element, finds pairs within the specified sum range using binary search. It searches for the smallest and largest indices that satisfy the range condition, counting the pairs that fall within the range.

## Code Explanation

### `countFairPairs` Function

1. **Sort Array**: Sort `nums` to enable binary searching.
2. **Loop Over Array**: For each `nums[i]`, initialize pointers `l` and `r` to find the valid pairs.
3. **Binary Search for Right Bound**:
   - The first `while` loop searches for the farthest index `f` where `nums[i] + nums[mid] <= upper`.
4. **Binary Search for Left Bound**:
   - The second `while` loop finds the smallest index `s` where `nums[i] + nums[mid] >= lower`.
5. **Count Valid Pairs**: If a valid range is found (`f` and `s` are set), add the count `f - s + 1` to `ans`.

## Complexity

- **Time Complexity**: $O(n \log n)$ for sorting and binary search within each loop iteration.
- **Space Complexity**: $O(1)$, in-place sorting and constant extra space.
