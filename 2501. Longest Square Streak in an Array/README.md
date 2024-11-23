# Longest Square Streak in an Array

## Problem Description

You are given an integer array `nums`. A subsequence of `nums` is called a **square streak** if:

- The length of the subsequence is at least `2`, and
- **after** sorting the subsequence, each element (except the first element) is the **square** of the previous number.
  
Return *the length of the **longest square streak** in* `nums`*, or return* `-1` *if there is no **square streak***.

A **subsequence** is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.

## Solution Approach

The approach utilizes a map to count the occurrences of each element. For each element, it tries to extend a sequence by squaring the current number repeatedly until it no longer forms a valid streak or exceeds a limit. The maximum streak length is tracked and returned.

## Code Explanation

### `longestSquareStreak` Function

- A `map` `mp` is used to count the occurrences of each element in the array `nums`.
- We iterate through the sorted `nums` to find possible starting points of square streaks.
- For each element `num`, we initialize `len` to 0 and check if we can square it repeatedly without exceeding the limit of 100,000.
- During each iteration, we mark the current squared value as visited by setting `mp[temp]` to 0, effectively removing it from consideration in future streaks.
- If a valid square streak is found, the maximum length is updated.
- Finally, if no valid streak is found (`mx` remains 0), return `-1`. Otherwise, return the length of the longest streak plus one (to include the starting element).

## Complexity

- **Time Complexity:** $O(N \log N)$, where $N$ is the number of elements in `nums`. 
- **Space Complexity:** $O(N)$, for the map used to store the frequency of each element.
