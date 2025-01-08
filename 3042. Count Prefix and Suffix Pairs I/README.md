# Count Prefix-Suffix Pairs

## Problem Description

You are given a **0-indexed** string array `words`.

Let's define a **boolean** function `isPrefixAndSuffix` that takes two strings, `str1` and `str2`:

- `isPrefixAndSuffix(str1, str2)` returns `true` if `str1` is **both** a prefix and a suffix of `str2`, and `false` otherwise.

For example, `isPrefixAndSuffix("aba", "ababa")` is true because `"aba"` is a prefix of `"ababa"` and also a suffix, but `isPrefixAndSuffix("abc", "abcd")` is `false`.

Return *an integer denoting the **number** of index pairs* `(i, j)` *such that* `i < j`, *and* `isPrefixAndSuffix(words[i], words[j])` *is* `true`.

## Solution Approach

The solution uses a brute-force approach to compare all pairs of words and checks whether the conditions for prefix and suffix matches are satisfied. For each word pair `(i, j)` where `j > i`, the algorithm verifies:

1. If the first `len(words[i])` characters of `words[j]` match `words[i]` (prefix condition).
2. If the last `len(words[i])` characters of `words[j]` match `words[i]` (suffix condition).

## Code Explanation

### Outer and Inner Loops

- Iterate through each word `words[i]`.
- For each `words[i]`, compare it with all subsequent words `words[j]`.

### Prefix Check

- Compare the first `len(words[i])` characters of `words[j]` with `words[i]`.

### Suffix Check

- Compare the last `len(words[i])` characters of `words[j]` with `words[i]`.

### Increment Count

- If both conditions are satisfied, increment the count of valid pairs.

## Complexity

- **Time Complexity**: $O(n^2 \cdot l)$, where `n` is the number of words and `l` is the average length of the words.
- **Space Complexity**: $O(1)$, as the algorithm does not use extra space beyond variables.
