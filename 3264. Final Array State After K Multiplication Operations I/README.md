# Final Array State After K Multiplication Operations I

## Problem Description

You are given an integer array `nums`, an integer `k`, and an integer `multiplier`.

You need to perform `k` operations on `nums`. In each operation:

- Find the **minimum** value `x` in `nums`. If there are multiple occurrences of the minimum value, select the one that appears **first**.
- Replace the selected minimum value `x` with `x * multiplier`.
  
Return an integer array denoting the *final state* of `nums` after performing all `k` operations.

## Solution Approach

Use a min-heap (priority queue) to efficiently access the smallest elements. Iterate `k` times, always processing the smallest element, multiplying it by the `multiplier`, and updating the array. Push the updated value back into the priority queue to maintain the heap property.

## Code Explanation
- Create a min-heap (`pq`) to store pairs of `(value, index)` from `nums`.
- For each iteration:
  - Pop the smallest element from the heap.
  - Multiply the value by the `multiplier` and update the corresponding index in `nums`.
  - Push the updated value back into the heap.
- Continue this process `k` times.

## Complexity
- **Time Complexity**: $O(k \log n)$ due to the operations on the priority queue.
- **Space Complexity**: $O(n)$ due to storing elements in the priority queue.
