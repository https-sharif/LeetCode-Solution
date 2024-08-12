# Kth Largest Element in a Stream

## Problem Description

Design a class to find the `kth` largest element in a stream. Note that it is the `kth` largest element in the sorted order, not the `kth` distinct element.

Implement `KthLargest` class:

- `KthLargest(int k, int[] nums)` Initializes the object with the integer `k` and the stream of integers `nums`.
- `int add(int val)` Appends the integer `val` to the stream and returns the element representing the `kth` largest element in the stream.

## Solution Explanation

The `KthLargest` class uses a min-heap (implemented using a max-heap with negative values) to efficiently track the `k` largest elements in the stream. Here's a breakdown of how it works:

1. **Initialization**: 
   - The constructor initializes the class with `k` and the list of numbers `nums`.
   - It iterates over the elements in `nums`, adding each to the priority queue `pq` as negative values to simulate a min-heap.
   - If the size of `pq` exceeds `k`, the smallest element (the largest negative value) is removed to maintain a size of `k`.

2. **Adding New Elements**:
   - The `add` method adds a new value `val` to the heap, again as a negative value.
   - If the size of `pq` exceeds `k`, the smallest element is removed to ensure only the `k` largest elements remain in the heap.
   - The `k`th largest element is always at the top of the heap and is returned as `-pq.top()`.

## Complexity
## Complexity

- **Time Complexity**: Constructor takes `O(n log k)`; `add` takes `O(log k)`.
- **Space Complexity**: `O(k)` for the heap.

