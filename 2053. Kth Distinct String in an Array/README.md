# Kth Distinct String in an Array

## Problem Description

A **distinct string** is a string that is present only **once** in an array.

Given an array of strings `arr`, and an integer `k`, return the `k`<sup>`th`</sup> ***distinct string** present in* `arr`. If there are **fewer** than `k` distinct strings, return an **empty string** `""`.

Note that the strings are considered in the **order in which they appear** in the array.

## Approach

1. **Count Occurrences**: Use an unordered map to count the occurrences of each string in the array.
2. **Find Distinct Strings**: Iterate through the array to identify strings that appear exactly once.
3. **Return K-th Distinct**: Keep track of the order of distinct strings and return the K-th one. If there are fewer than `k` distinct strings, return an empty string.

## Complexity
  - Time Complexity: $O(n)$, where n is the number of strings in the array, due to traversal of array to count occurrences and to find the K-th distinct string.
  - Space Complexity: $O(m)$, where m is the number of unique strings in the array, due to the space used by the unordered map.
