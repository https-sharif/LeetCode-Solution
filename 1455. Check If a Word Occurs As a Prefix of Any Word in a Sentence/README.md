# Check If a Word Occurs As a Prefix of Any Word in a Sentence

## Problem Description

Given a `sentence` that consists of some words separated by a **single space**, and a `searchWord`, check if `searchWord` is a prefix of any word in `sentence`.

Return *the index of the word in* `sentence` ***(1-indexed)** where* `searchWord` *is a prefix of this word*. If `searchWord` is a prefix of more than one word, return the index of the first word (**minimum index**). If there is no such word return `-1`.

A **prefix** of a string `s` is any leading contiguous substring of `s`.

## Solution Approach

The solution iterates through the characters of the sentence while tracking the current word's position. It compares each word's prefix to `searchWord` and returns the index of the first match.

## Code Explanation

### `isPrefixOfWord` Function

- **Input:** A `sentence` string and a `searchWord` string.
- **Logic:**
  - Traverse the `sentence` while tracking the current word index.
  - For each character:
    - If it's a space, move to the next word and reset comparison.
    - If the character matches `searchWord[j]`, increment `j`. If `j` reaches the length of `searchWord`, return the current word index.
    - If there's a mismatch, reset `j` and stop comparing the current word.
  - Return `-1` if no word matches the prefix.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the sentence.
- **Space Complexity:** $O(1)$, no additional space is used apart from variables. 
