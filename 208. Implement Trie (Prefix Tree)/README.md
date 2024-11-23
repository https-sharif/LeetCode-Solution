# Implement Trie (Prefix Tree)

## Problem Description

A **trie** (pronounced as "try") or **prefix tree** is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

Implement the Trie class:

- `Trie()`: Initializes the trie object.
- `void insert(String word)`: Inserts the string `word` into the trie.
- `boolean search(String word)`: Returns `true` if the string `word` is in the trie (i.e., was inserted before), and `false` otherwise.
- `boolean startsWith(String prefix)`: Returns `true` if there is a previously inserted string `word` that has the prefix `prefix`, and `false` otherwise.

## Solution Approach

We used a class `Trie` with an array of pointers representing the children nodes. Each node can have up to 26 children (one for each lowercase English letter). We insert words character by character, creating new nodes when necessary, and mark the end of each word.

## Code Explanation

### `insert` Function
- Iterates through the characters of `word`, calculates their index in the `children` array (`idx`), and inserts a new node if necessary. Marks the last node as the end of the word.

### `search` Function
- Iterates through `word` characters, checks if each character is present in the `children` array. If all characters are found and the last node is an end of a word, returns `true`; otherwise, returns `false`.

### `startsWith` Function
- Similar to `search`, but only checks for the presence of the characters without verifying the end of a word.

## Complexity

- **Time Complexity:** 
  - `insert` and `search` operations: $O(L)$, where $L$ is the length of the word being processed.
  - `startsWith` operation: $O(L)$, similar to `search`.
  
- **Space Complexity:** $O(N \times 26)$, where $N$ is the total number of inserted nodes.
