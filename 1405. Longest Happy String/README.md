# Longest Happy String

## Problem Description

A string `s` is called **happy** if it satisfies the following conditions:
- `s` only contains the letters `'a'`, `'b'`, and `'c'`.
- `s` does not contain any of the substrings `"aaa"`, `"bbb"`, or `"ccc"`.
- `s` contains **at most** `a` occurrences of the letter `'a'`.
- `s` contains **at most** `b` occurrences of the letter `'b'`.
- `s` contains **at most** `c` occurrences of the letter `'c'`.

Given three integers `a`, `b`, and `c`, return *the **longest possible happy string***. If there are multiple longest happy strings, return *any of them*. If no such string exists, return *the empty string* `""`.

A **substring** is a contiguous sequence of characters within a string.

## Solution Approach

We use a greedy algorithm combined with a priority queue (max-heap). The heap stores the remaining occurrences of each character, always picking the character with the highest remaining count to extend the string. If adding that character would create three consecutive same letters, we choose the next highest character instead.

## Code Explanation

### `longestDiverseString` Function

1. **Priority Queue Initialization**:  
   The function starts by pushing pairs of `(count, character)` into a max-heap (priority queue) for characters `'a'`, `'b'`, and `'c'`, if their respective counts are greater than zero.

2. **Building the String**:  
   - The loop runs until the queue is empty. It always picks the character with the highest remaining count.
   - It checks if the last two characters of the current string are the same as the character being added. If they are, it selects the next highest character from the heap (if available) to avoid violating the happy string condition.
   - If the character can be added, it is appended to the result string, and its count is decremented.
   - The characters are pushed back into the heap if they still have remaining occurrences.

3. **Termination**:  
   The function returns the final string once no more valid characters can be added.

## Complexity

- **Time Complexity:** $O(n\ logn)$, the loop runs for at most `a + b + c` iterations.
- **Space Complexity:** $O(1)$, only a fixed amount of extra space is used, excluding the output string.
