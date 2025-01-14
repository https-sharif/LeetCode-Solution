# Find the Prefix Common Array

## Problem Description

You are given two **0-indexed** integer permutations `A` and `B` of length `n`.

A **prefix common array** of `A` and `B` is an array `C` such that `C[i]` is equal to the count of numbers that are present at or before the index `i` in both `A` and `B`.

Return *the **prefix common array** of* `A` *and* `B`.

A sequence of `n` integers is called a **permutation** if it contains all integers from `1` to `n` exactly once.

## Solution Approach

The solution uses hash maps to keep track of the elements encountered so far in both arrays. It calculates the prefix common count dynamically by checking for matching elements at each step.

## Code Explanation

### Main Algorithm

1. **Initialization:**
   - Use two hash maps, `mp1` and `mp2`, to store elements encountered in arrays `A` and `B` respectively.
   - Maintain a variable `cnt` to keep track of the common elements found so far.

2. **Iterate Through Arrays:**
   - For each index `i`:
     - If `A[i] == B[i]`, increment `cnt` and append it to the result.
     - Check if the current element in `B` exists in `mp1`. If yes, increment `cnt`.
     - Similarly, check if the current element in `A` exists in `mp2`. If yes, increment `cnt`.
     - Update `mp1` and `mp2` with the current elements from `A` and `B`.

3. **Store Results:**
   - Append the value of `cnt` to the result vector after processing each index.

4. **Return Result:**
   - Return the prefix common array.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the arrays.
- **Space Complexity:** $O(n)$, for storing the hash maps.
