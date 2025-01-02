# Count Vowel Strings in Ranges

## Problem Description

You are given a **0-indexed** array of strings `words` and a 2D array of integers `queries`.

Each query `queries[i] = [l`<sub>`i`</sub>`, `<sub>`r`</sub>`i]` asks us to find the number of strings present in the range `l`<sub>`i`</sub> to `r`<sub>`i`</sub> (both inclusive) of words that start and end with a vowel.

Return *an array* `ans` *of size* `queries.length`, *where* `ans[i]` *is the answer to the* `i`<sup>th</sup> *query*.

**Note** that the vowel letters are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`.

## Solution Approach

The solution uses prefix sums to efficiently compute the number of strings that start and end with vowels in the specified range for each query. For every word, it checks whether the first and last characters are vowels and maintains a cumulative count. Using this prefix sum, the answer to any query can be obtained in constant time.

## Code Explanation

### `isVowel` Lambda Function

- **Purpose:** Checks whether a given character is a vowel.
- **Logic:** Returns `true` if the character matches any of `'a'`, `'e'`, `'i'`, `'o'`, `'u'`; otherwise, returns `false`.

### Prefix Sum Construction

- **Logic:**  
  - Iterate over each word in the `words` array.  
  - If the first and last characters of a word are vowels, increment the prefix sum for that position.  
  - Otherwise, carry forward the value from the previous position.  
- **Outcome:** A `store` array where `store[i]` contains the count of vowel-start-and-end strings from the beginning up to index `i-1`.

### Query Processing

- For each query `[li, ri]`:
  - Compute the number of valid strings in the range using the formula:  `store[ri + 1] - store[li]`.

## Complexity

- **Time Complexity:** $O(n + q)$, where `n` is the number of words and `q` is the number of queries.
- **Space Complexity:** $O(n)$, for storing the prefix sum array.
