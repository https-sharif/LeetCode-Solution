# Kth Lexicographical Number

## Problem Description

Given two integers `n` and `k`, return *the* `k`<sup>`th`</sup> *lexicographically smallest integer in the range* `[1, n]`.

## Solution Approach

The solution uses a greedy approach to count the number of elements in the lexicographical order under each prefix. By navigating through these prefixes, the algorithm can find the exact position of the `k`th number.

## Code Explanation

### `findKthNumber` Function

- The variable `curr` is initialized to 1 to represent the current number being explored.
- The `k--` step accounts for the fact that the first number is always 1.
- In the main loop, the algorithm computes how many numbers are between `curr` and `curr + 1` (in lexicographical order) using a nested loop.
  - The inner loop calculates how many numbers have the current prefix using powers of 10.
- If `k` is larger than the count of numbers under the current prefix, the algorithm moves to the next prefix (`curr++`) and reduces `k` by `count`.
- Otherwise, it dives deeper into the current prefix by multiplying `curr` by 10.
- The process continues until `k` becomes 0, and `curr` is the result.

## Complexity

- **Time Complexity:** $O(\log n \times \log n)$, where we traverse logarithmically through prefixes and calculate counts.
- **Space Complexity:** $O(1)$, as no extra space is used apart from a few variables.
