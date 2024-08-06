# Minimum Pushes

## Overview

This project contains a C++ solution to the problem of calculating the minimum number of pushes required to type a given word on a keyboard with specific constraints. The keyboard has only 8 keys, and each key can only be pressed a certain number of times before moving to the next row.

## Problem Statement

You are given a string `word` containing lowercase English letters.

Telephone keypads have keys mapped with **distinct** collections of lowercase English letters, which can be used to form words by pushing them. For example, the key `2` is mapped with `["a","b","c"]`, we need to push the key one time to type `"a"`, two times to type `"b"`, and three times to type `"c"`.

It is allowed to remap the keys numbered `2` to `9` to **distinct** collections of letters. The keys can be remapped to any amount of letters, but each letter **must** be mapped to **exactly** one key. You need to find the *minimum* number of times the keys will be pushed to type the string `word`.

Return *the **minimum** number of pushes needed to type* `word` *after remapping the keys*.

## Solution Explanation

The `minimumPushes` function calculates the minimum number of pushes needed using the following steps:

1. **Frequency Count:** Count the occurrences of each character in the input string.
2. **Sorting Frequencies:** Sort these frequencies in descending order to prioritize keys with the highest frequency.
3. **Calculate Pushes:**
   - Start from the most frequent character and assign it to the first row.
   - If a row is filled (8 keys), move to the next row.
   - For each row, multiply the frequency by the row number to compute the total pushes required for that row.
4. **Return Result:** The sum of all computed pushes across all rows gives the minimum number of pushes required.

## Complexity

- **Time Complexity**: $O(n)$, Counting letter frequencies, where `n` is the length of the input string.
- **Space Complexity**: $O(1)$, Constant space for the frequency vector and additional variables.


