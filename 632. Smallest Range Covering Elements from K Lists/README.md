# Smallesst Range Covering Elements from K Lists

## Problem Description

You have `k` lists of sorted integers in **non-decreasing order**. Find the **smallest** range that includes at least one number from each of the `k` lists.

We define the range `[a, b]` is smaller than range `[c, d]` if `b - a < d - c` or `a < c` if `b - a == d - c`.

## Solution Approach

The code uses a min-heap (priority queue) to keep track of the smallest elements from each list. It continuously checks the current maximum and the smallest element from the heap to find the smallest range that includes at least one number from each list.

## Code Explanation

### `smallestRange` Function

- **Initialization:** A priority queue is created to store the smallest elements from each list along with their indices. The current maximum is initialized to the smallest possible integer.
- **Heap Population:** Each list's first element is pushed into the heap while updating the current maximum.
- **Finding the Range:** While the heap is not empty, the smallest element is popped. The range is updated if the current range is smaller than the previously found range. If there are more elements in the same list, the next element is pushed into the heap, updating the current maximum accordingly.

## Complexity

- **Time Complexity:** $O(n \log k)$, where `n` is the total number of elements across all lists and `k` is the number of lists.
- **Space Complexity:** $O(k)$, for storing the heap containing one element from each of the `k` lists.
