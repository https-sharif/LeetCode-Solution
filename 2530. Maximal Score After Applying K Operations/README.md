# Maximal Score After Applying K Operations

## Problem Description

You are given a **0-indexed** integer array nums and an integer k. You have a **starting score** of 0.

In one *operation**:

1. choose an index `i` such that `0 <= i < nums.length`,
2. increase your **score** by `nums[i]`, and
3. replace `nums[i]` with `ceil(nums[i] / 3)`.

Return *the maximum possible **score** you can attain after applying **exactly*** `k` *operations*.

The ceiling function `ceil(val)` is the least integer greater than or equal to `val`.

## Solution Approach

This problem is solved using a max-heap (priority queue) to always choose the largest element in the array. After adding the largest element to the score, it's replaced by its ceiling value after dividing by 3. This process repeats `k` times to maximize the score.

## Code Explanation

### `maxKelements` Function

- A max-heap (`priority_queue`) is used to keep track of the largest elements in the array.
- For each operation:
  - The largest element `x` is removed from the heap.
  - Add `x` to the score `ans`.
  - Push back the value of `ceil(x / 3)` into the heap.
- Repeat the process for `k` operations, returning the accumulated score as the final answer.

## Complexity

- **Time Complexity:** $O(k \log n)$, where `n` is the size of the array `nums` and `k` is the number of operations.
- **Space Complexity:** $O(n)$, as we store the elements of the array in a priority queue.
