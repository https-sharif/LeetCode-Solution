# Combination Sum II

## Problem Description

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidates` may only be used once in the combination.

**Note:** The solution set must not contain duplicate combinations.

## Solution Approach

The solution uses a recursive backtracking approach to explore all possible combinations of numbers that sum up to the target. The key steps are as follows:

1. **Sort the Input:** 
   - Begin by sorting the `candidates` array. This allows us to efficiently skip duplicates and stop early when the sum exceeds the target.

2. **Recursive Backtracking:**
   - Use a recursive helper function `dp` to explore combinations. It takes the current index, the current sum, and the current combination as parameters.
   - If the current sum equals the target, add the current combination to the result list.
   - If the current sum exceeds the target or if we have considered all candidates, backtrack.
   - For each candidate, starting from the current index:
     - Skip duplicates by checking if the current candidate is the same as the previous one.
     - Add the candidate to the current combination and recursively explore further by incrementing the index.
     - After exploring, remove the candidate from the current combination to backtrack and try the next possibility.

3. **Skip Duplicates and Early Termination:**
   - To avoid duplicate combinations, skip candidates that are the same as the previous one at the same recursion depth.
   - If adding a candidate exceeds the target, stop further exploration since all subsequent candidates will also exceed the target due to sorting.

## Complexity

- **Time Complexity:** $O(2^n)$, we potentially explore all subsets of the `n` candidates. Duplicate pruning and early stopping improve practical performance.

- **Space Complexity:** $O(n)$, space is used for the recursion stack and storing combinations, with the maximum depth being `n`, the number of candidates.
