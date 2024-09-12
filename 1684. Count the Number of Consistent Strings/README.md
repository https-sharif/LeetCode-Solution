# Count the Number of Consistent Strings

## Problem Description

You are given a string `allowed` consisting of **distinct** characters and an array of strings `words`. A string is **consistent** if all characters in the string appear in the string `allowed`.

Return *the number of consistent strings in the array* `words`.

## Solution Approach

The solution creates a frequency array to mark the allowed characters. It then iterates through each word in the `words` array, checking whether all characters in the word are part of the allowed set. If a word contains only allowed characters, it is counted as consistent.

## Code Explanation

### `countConsistentStrings` Function

- A frequency vector `freq` of size 26 is initialized to keep track of allowed characters.
- For each character in the `allowed` string, the corresponding index in `freq` is set to 1.
- The function then iterates over each word in the `words` array:
  - For each word, it checks if all characters are in the `allowed` set by referencing the `freq` array.
  - If a word contains a character not in the allowed set, it is skipped by breaking out of the loop early.
- Finally, the count of consistent words is returned.

## Complexity

- **Time Complexity:** $O(m + n)$, where `m` is the length of the `allowed` string and `n` is the total number of characters across all words in the `words` array.
- **Space Complexity:** $O(1)$, as the space used by the `freq` array is constant (size 26).
