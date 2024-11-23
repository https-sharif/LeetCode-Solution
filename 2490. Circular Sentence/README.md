# Circular Sentence

## Problem Description

A **sentence** is a list of words that are separated by a **single** space with no leading or trailing spaces.

- For example, `"Hello World"`, `"HELLO"`, `"hello world hello world"` are all sentences.
  
Words consist of **only** uppercase and lowercase English letters. Uppercase and lowercase English letters are considered different.

A sentence is **circular** if:

- The last character of a word is equal to the first character of the next word.
- The last character of the last word is equal to the first character of the first word.

For example, `"leetcode exercises sound delightful"`, `"eetcode"`, `"leetcode eats soul"` are all circular sentences. However, `"Leetcode is cool"`, `"happy Leetcode"`, `"Leetcode"` and `"I like Leetcode"` are **not** circular sentences.

Given a string `sentence`, return `true` *if it is circular*. Otherwise, return `false`.

## Solution Approach

The solution involves checking if the first and last characters of the sentence are the same, and iterating through the sentence to ensure that adjacent words' characters match as required.

## Code Explanation

### `isCircularSentence` Function

- **Line 1:** Define the function that takes a string `sentence`.
- **Line 2:** Get the size of the string.
- **Line 3:** Check if the first and last characters match; return false if they don't.
- **Line 4-8:** Loop through the string; for each space found, check if the adjacent characters match.
- **Line 9:** If all checks pass, return true.

## Complexity

- **Time Complexity:** $O(n)$, where $n$ is the length of the sentence.
- **Space Complexity:** $O(1)$, as we are using a constant amount of extra space.
