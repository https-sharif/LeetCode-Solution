# Find the Longest Substring Containing Vowels in Even Counts

## Problem Description

Given the string `s`, return the size of the longest substring containing each vowel an even number of times. That is, 'a', 'e', 'i', 'o', and 'u' must appear an even number of times.

## Solution Approach

This solution uses bit masking to track the counts of vowels in the substring. Each vowel is mapped to a unique bit in an integer mask. The goal is to find the longest substring where each vowel appears an even number of times by leveraging previously seen states of the bitmask.

## Code Explanation

### `remap` Function

- Maps each vowel to a unique bit:
  - 'a' -> 1 (binary `00001`)
  - 'e' -> 2 (binary `00010`)
  - 'i' -> 4 (binary `00100`)
  - 'o' -> 8 (binary `01000`)
  - 'u' -> 16 (binary `10000`)

### `findTheLongestSubstring` Function

- **Initialization:**
  - `map[32]` vector initialized to -2, to store the first occurrence of each bitmask.
  - `mask` to track the current state of vowel counts.
  - `map[0]` is set to -1, to handle the case where the whole substring from the start has even counts of all vowels.
  - `mx` to keep track of the maximum length of the valid substring found.

- **Iteration:**
  - For each character in the string:
    - Calculate its corresponding bit using `remap`.
    - Update `mask` by XORing it with the bit.
    - Check if this `mask` has been seen before:
      - If yes, update `mx` with the length of the substring between the first occurrence and the current position.
      - If no, store the current position as the first occurrence of this `mask`.

## Complexity

- **Time Complexity:** $O(n)$, where $n$ is the length of the string.
- **Space Complexity:** $O(1)$, as the space used by the `map` vector is constant (32 elements).
