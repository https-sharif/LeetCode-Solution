# Max Chunks to Make Sorted

## Problem Description

You are given an integer array `arr` of length `n` that represents a permutation of the integers in the range `[0, n - 1]`.

We split `arr` into some number of **chunks** (i.e., partitions), and individually sort each chunk. After concatenating them, the result should equal the sorted array.

Return *the largest number of chunks we can make to sort the array*.

## Solution Approach

The solution uses a greedy algorithm to determine how many chunks can be made. We track the maximum value encountered so far (`right`) and check if the current index matches this value, indicating the end of a chunk.

## Code Explanation

### `maxChunksToSorted` Function

- **Line 1:** Initialize `right` to `-1` to track the maximum value encountered plus one.
- **Line 2:** Initialize `ans` to `0` to count the number of chunks.
- **Line 3-8:** Iterate through the array:
  - Update `right` to the maximum of `right` and the current element plus one (`arr[i] + 1`).
  - If the current index plus one (`i + 1`) matches `right`, increment the chunk count (`ans`).
- **Line 9:** Return the total number of chunks.

## Complexity

- **Time Complexity:** $O(n)$, where $n$ is the size of the array.
- **Space Complexity:** $O(1)$, as the algorithm uses constant extra space.
