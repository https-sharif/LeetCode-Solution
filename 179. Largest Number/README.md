# Largest Number

## Problem Description

Given a list of non-negative integers `nums`, arrange them such that they form the largest number and return it.

Since the result may be very large, you need to return a string instead of an integer.

## Solution Approach

The solution converts all integers into strings and sorts them in a custom order, where the concatenation of two strings `a` and `b` is compared by checking if `a + b` is less than `b + a`. This ensures that the numbers are arranged in the order that forms the largest possible concatenation. After sorting, the strings are concatenated into the final result, taking care of any leading zeros.

## Code Explanation

### `largestNumber` Function

- **Conversion:** The function starts by converting all integers in the `nums` vector to strings.
- **Custom Sorting:** The strings are sorted based on a custom comparator. The order is determined by comparing the concatenated result of `a + b` and `b + a`, ensuring that the larger combination comes first.
- **Concatenation:** The sorted strings are concatenated from largest to smallest.
- **Leading Zeros:** Any leading zeros are handled by trimming them from the final string unless the result is just "0".

## Complexity

- **Time Complexity:** $O(n \log n)$, where `n` is the number of integers in `nums`.
- **Space Complexity:** $O(n)$, as we store the string representations of the integers and the result string.
