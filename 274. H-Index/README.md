# H-Index

## Problem Description

Given an array of integers `citations` where `citations[i]` is the number of citations a researcher received for their `i`<sup>`th`</sup> paper, return *the researcher's h-index*.

According to the [definition of h-index on Wikipedia](https://en.wikipedia.org/wiki/H-index): The h-index is defined as the maximum value of `h` such that the given researcher has published at least `h` papers that have each been cited at least `h` times.

## Solution Approach

The approach involves sorting the citation counts in descending order and then iterating through the sorted list to determine the maximum value of `h`, which satisfies the h-index condition.

## Code Explanation

### `hIndex` Function

- The citations are sorted in descending order using `sort` with `greater<int>()`.
- We iterate over the sorted list and count how many papers have at least `i+1` citations where `i` is the current index.
- The count `cnt` will represent the maximum value of `h` where at least `h` papers have been cited at least `h` times.

## Complexity

- **Time Complexity:** $O(n \log n)$, where `n` is the number of papers.
- **Space Complexity:** $O(1)$, as no additional space proportional to input size is required.
