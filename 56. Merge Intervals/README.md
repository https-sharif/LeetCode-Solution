# Merge Intervals

## Problem Description

Given an array of `intervals` where `intervals[i] = [start`<sub>`i`</sub>`, end`<sub>`i`</sub>`]`, merge all overlapping intervals, and return *an array of the non-overlapping intervals that cover all the intervals in the input*.

## Solution Approach

The intervals are first sorted by their starting times. Then, a single pass through the intervals merges overlapping intervals by comparing the current interval's start time with the end of the previous merged interval.

## Code Explanation

### Sorting Intervals

- The intervals are sorted based on their start times to ensure proper order for merging.

### Iterating Through Intervals

- If the current interval overlaps with the previous one (`start <= curr`), the end of the current merged interval is updated.
- If no overlap exists, the completed interval is added to the result, and a new merging process begins.

### Final Step

- The last interval is added to the result after the loop.

## Complexity

- **Time Complexity:** $O(n \log n)$, where `n` is the size of the `intervals` vector.
- **Space Complexity:** $O(n)$, the merged intervals are stored in an additional vector.
