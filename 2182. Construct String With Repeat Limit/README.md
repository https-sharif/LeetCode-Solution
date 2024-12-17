# Construct String With Repeat Limit

## Problem Description

You are given a string `s` and an integer `repeatLimit`. Construct a new string `repeatLimitedString` using the characters of `s` such that no letter appears **more than** `repeatLimit` times **in a row**. You do **not** have to use all characters from `s`.

Return *the **lexicographically** largest* `repeatLimitedString` *possible*.

A string `a` is **lexicographically larger** than a string `b` if in the first position where `a` and `b` differ, string `a` has a letter that appears later in the alphabet than the corresponding letter in `b`. If the first `min(a.length, b.length)` characters do not differ, then the longer string is the lexicographically larger one.

## Solution Approach

The solution involves counting the frequency of each character in `s` and using a **max-heap** to repeatedly select the lexicographically largest character that satisfies the `repeatLimit` constraint. Characters are added to the result string while dynamically handling constraints by swapping characters when the limit is reached.

## Code Explanation

### `repeatLimitedString` Function

- **Input Parsing:**  
  A `map` counts the frequency of each character, which is then transferred into a `priority_queue` (max-heap) to efficiently access the largest character.

- **Processing with Constraints:**
  - For each character in the heap, add it to the result string until the `repeatLimit` is reached.
  - If the limit is reached, temporarily use the next largest character from the heap to break the sequence, then re-insert it if it still has remaining frequency.

- **Edge Cases:**  
  Handles cases where no other characters are available to break the sequence.

## Complexity

- **Time Complexity:** $O(n \log n)$, where $n$ is the length of the string. 
- **Space Complexity:** $O(n)$, due to the map and priority queue storing character frequencies.
