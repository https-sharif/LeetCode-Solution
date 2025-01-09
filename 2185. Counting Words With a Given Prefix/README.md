# Prefix Count

## Problem Description

You are given an array of strings `words` and a string `pref`.

Return *the number of strings in* `words` *that contain* `pref` *as a **prefix***.

A **prefix** of a string `s` is any leading contiguous substring of `s`.

## Solution Approach

The solution iterates through the list of words and checks if each word starts with the given prefix. If it does, the count is incremented.

## Code Explanation

### `prefixCount` Function

- **Input:** A vector of strings `words` and a string `pref`.
- **Logic:**
  - Iterate through each word in `words`.
  - Skip words shorter than the prefix length.
  - Compare characters of the prefix with the corresponding characters in the word.
  - If all characters match, increment the counter.
- **Output:** The total count of words starting with the prefix.

## Complexity

- **Time Complexity:** $O(m \cdot n)$, where `m` is the number of words and $n$ is the length of the prefix.
- **Space Complexity:** $O(1)$, as no additional data structures are used.
