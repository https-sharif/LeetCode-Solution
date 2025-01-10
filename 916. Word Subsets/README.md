# Word Subsets

## Problem Description

You are given two string arrays `words1` and `words2`.

A string `b` is a **subset** of string `a` if every letter in `b` occurs in `a` including multiplicity.

- For example, `"wrr"` is a subset of `"warrior"` but is not a subset of `"world"`.
  
A string `a` from `words1` is **universal** if for every string `b` in `words2`, `b` is a subset of `a`.

Return an array of all the **universal** strings in `words1`. You may return the answer in **any order**.

## Solution Approach

The solution involves creating a frequency map for characters in all words of `words2` and ensuring that each word in `words1` meets or exceeds these frequency requirements. The universal words are then collected and returned as the result.

## Code Explanation

### Frequency Storage

- **`store[0]`:** Stores the maximum frequency of each character across all words in `words2`.
- **`store[1]`:** Temporary frequency array used while iterating through each word in `words2`.

### Main Steps

1. **Building the Maximum Frequency Map:**
   - For each word in `words2`, count the frequency of its characters.
   - Update `store[0]` to ensure it holds the maximum frequency of each character.

2. **Validating Words in `words1`:**
   - For each word in `words1`, count the frequency of its characters.
   - Check if the frequency of each character satisfies the conditions in `store[0]`.
   - If valid, add the word to the result.

### Key Loops

- The first loop calculates the maximum character frequencies from `words2`.
- The second loop validates each word in `words1` against these frequencies.

## Complexity

- **Time Complexity:** $O(n \times l + m \times k)$, where `n` is the size of `words1`, `m` is the size of `words2`, `l` is the average length of words in `words1`, and `k` is the average length of words in `words2`.
  
- **Space Complexity:** $O(1)$, as we use fixed storage for character frequencies.
