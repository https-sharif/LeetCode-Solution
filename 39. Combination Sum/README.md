# Combination Sum

## Problem Description

Given an array of **distinct** integers `candidates` and a target integer `target`, return *a list of all **unique combinations** of `candidates` where the chosen numbers sum to* `target`. You may return the combinations in **any order**.

The **same** number may be chosen from `candidates` an **unlimited number of times**. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than `150` combinations for the given input.

## Solution Approach

The solution uses a recursive backtracking approach to explore all possible combinations that sum to the target:

1. **Sorting the Candidates:**
   - First, sort the `candidates` array. Sorting helps to stop early if the sum exceeds the target and allows easier management of combination construction.

2. **Recursive Backtracking:**
   - Implement a recursive function `backtrack` to explore combinations. It takes the current index, the remaining target, and the current combination as parameters.
   - If the remaining target is zero, add the current combination to the result list, as it forms a valid combination.
   - If the current index exceeds the length of the candidate list or the target becomes negative, return to backtrack.
   - For each candidate starting from the current index:
     - Add the candidate to the current combination and recursively explore further with the same index, allowing repeated use of the candidate.
     - Remove the candidate from the current combination to backtrack and try other possibilities.

3. **Handling Duplicates:**
   - Since the candidates are distinct, the main concern is avoiding duplicates in the result. This is managed by starting the recursion from the current index rather than the next, allowing repetition in combinations.

## Complexity

- **Time Complexity:** $O(2^n)$, each candidate can be included multiple times, leading to exploration of all combinations.

- **Space Complexity:** $O(n)$, space is used for the recursion stack and the current combination, with maximum depth `n`.
