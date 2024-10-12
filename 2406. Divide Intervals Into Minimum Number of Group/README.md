# Divide Intervals Into Minumum Number of Group

## Problem Description

You are given a 2D integer array `intervals` where `intervals[i] = [left`<sub>`i`</sub>`, right`<sub>`i`</sub>`]` represents the **inclusive** interval `[left`<sub>`i`</sub>`, right`<sub>`i`</sub>`]`.

You have to divide the intervals into one or more **groups** such that each interval is in **exactly** one group, and no two intervals that are in the same group **intersect** each other.

Return *the **minimum** number of groups you need to make*.

Two intervals **intersect** if there is at least one common number between them. For example, the intervals `[1, 5]` and `[5, 8]` intersect.

## Solution Approach

The code uses a greedy algorithm combined with a multiset to track the end times of the intervals. It sorts the intervals and iterates through them, updating the groups accordingly to minimize the number of groups.

## Code Explanation

### `minGroups` Function

- **Sorts the intervals** based on the start time.
- Uses a **multiset** to maintain the end times of the intervals in the current groups.
- For each interval, checks if it can fit into an existing group by looking for the first end time that is not greater than the start time of the current interval.
- If it can fit, it removes that end time and adds the new end time.
- If not, it simply adds the new end time to the multiset, creating a new group.

## Complexity

- **Time Complexity:** $O(n \log n)$, where $n$ is the number of intervals, due to sorting and multiset operations.
- **Space Complexity:** $O(n)$, for storing the end times in the multiset.
