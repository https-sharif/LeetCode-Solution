# Sort Array by Increasing Frequency

## Problem Description

Given an array of integers `nums`, sort the array in **increasing** order based on the frequency of the values. If multiple values have the same frequency, sort them in **decreasing** order.

Return *the sorted array*.

## Solution Approach

1. **Frequency Counting**:
   - Use a vector `count` of size 201 to count the occurrences of each integer. Offset values by +100 to handle negative numbers.

2. **Custom Sorting**:
   - Sort the `nums` array using a custom comparator:
     - If two numbers have the same frequency, sort them in decreasing order.
     - Otherwise, sort them by increasing frequency.

3. **Return Result**:
   - Return the sorted `nums` array.

## Complexity

- **Time Complexity**: $O(n log N)$, where `n` is the number of elements in `nums`.
- **Space Complexity**: $O(n)$ for the `count` vector and the space used by the sorting process.
