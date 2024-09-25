# Prefix Score Sum

## Problem Description

You are given an array `words` of size `n` consisting of **non-empty** strings.

We define the **score** of a string `term` as the **number** of strings `words[i]` such that `term` is a **prefix** of `words[i]`.

For example, if `words = ["a", "ab", "abc", "cab"]`, then the score of `"ab"` is `2`, since `"ab"` is a prefix of both `"ab"` and `"abc"`.

Return *an array* `answer` *of size* `n` *where* `answer[i]` *is the **sum** of scores of every **non-empty** prefix of* `words[i]`.

Note that a string is considered as a prefix of itself.



## Solution Approach

To efficiently compute the prefix scores for all strings, we use a **Trie** (prefix tree). We first insert all the words into the Trie while counting how many times each prefix is visited. Then, for each word, we compute the sum of the visit counts of its prefixes.

## Code Explanation

### Trie Structure

- The `Trie` class contains:
  - `child[26]`: An array representing the next characters ('a' to 'z').
  - `visited`: A counter to track how many words have passed through this node.

### `sumPrefixScores` Function

- **First Loop**: Insert all words into the Trie, incrementing the `visited` count for each node corresponding to a character in the word.
- **Second Loop**: For each word, traverse its characters in the Trie, summing the `visited` counts of the nodes corresponding to its prefixes.

## Complexity

- **Time Complexity:** $O(n \times m)$, where `n` is the number of words and `m` is the maximum length of a word.
- **Space Complexity:** $O(n \times m)$, as we need space for the Trie structure which stores all characters in the words.
