# Substring Matching in Array

## Problem Description

 Given an array of string `words`, return *all strings in* `words` *that is a **substring** of another word*. You can return the answer in **any order**.

A **substring** is a contiguous sequence of characters within a string

## Solution Approach

The solution involves sorting the words by length, then checking if each word is a substring of any longer word in the list. If found, the word is added to the result.

## Code Explanation

### `stringMatching` Function

1. **Sorting**: Words are sorted by length to ensure shorter words are checked against longer words.
2. **Outer Loop**: Iterates through each word.
3. **Inner Loop**: For every word, checks subsequent longer words for substring matches.
4. **Substring Check**: Uses `substr` to extract portions of the longer word and compares it with the current word.
5. **Result**: If a match is found, the word is added to the result.

## Complexity

- **Time Complexity:** $O(n^3)$, due to sorting and nested loops for substring checks.
- **Space Complexity:** $O(n)$, for storing the result vector.
