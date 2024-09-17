# Uncommon Words from Two Sentences

## Problem Description

A **sentence** is a string of single-space separated words where each word consists only of lowercase letters.

A word is **uncommon** if it appears exactly once in one of the sentences, and **does not appear** in the other sentence.

Given two **sentences** `s1` and `s2`, return a list of all the **uncommon words**. You may return the answer in **any order**.

## Solution Approach

The solution uses a `map` (hashmap) to count occurrences of words in both sentences. Words that appear exactly once across both sentences are considered uncommon.

## Code Explanation

### `uncommonFromSentences` Function

- We iterate through both sentences to extract words and count their occurrences using a `map`.
- For each word in the sentences, we increment its count in the map.
- After processing both sentences, we iterate over the map and add words with a count of `1` to the result vector.

## Complexity

- **Time Complexity:** $O(n + m)$, where `n` and `m` are the lengths of the two sentences.
- **Space Complexity:** $O(n + m)$, as we store each word and its count in a `map`.
