# Take Characters

## Problem Description

You are given a string `s` consisting of the characters `'a'`, `'b'`, and `'c'` and a non-negative integer `k`. Each minute, you may take either the **leftmost** character of `s`, or the **rightmost** character of `s`.

Return *the minimum number of minutes needed for you to take **at least*** `k` *of each character, or return* `-1` *if it is not possible to take* `k` *of each character*.

## Solution Approach

The solution involves using a sliding window approach to maximize the number of characters that can be skipped (i.e., removed) while ensuring that the remaining characters satisfy the condition. 

1. Count the frequency of each character in `s`.
2. Check if the frequency of any character is less than `k`; if so, return `-1` as it's impossible to meet the requirement.
3. Use a sliding window to track the current counts of each character and adjust the window size to ensure the skipped characters don't violate the constraints.

## Code Explanation

### `takeCharacters` Function

1. **Initial Checks:** 
   - If `k` is `0`, no removal is needed, so return `0`.
   - Count the frequencies of `'a'`, `'b'`, and `'c'` using a vector.
   - If any character's count is less than `k`, return `-1`.

2. **Sliding Window:**
   - Use two pointers `left` and `right` to define the current window.
   - Expand the window by incrementing `right` and updating the `window` vector.
   - Shrink the window by incrementing `left` when the window contains more of any character than allowed.
   - Track the maximum window size (`max_skip`) that meets the constraints.

3. **Result:**
   - Return `n - max_skip`, the minimum number of characters to remove to satisfy the conditions.

## Complexity

- **Time Complexity:** $O(n)$, the sliding window traverses the string once, and the shrinking process is also linear.
- **Space Complexity:** $O(1)$, only a fixed-size frequency vector is used for tracking counts.
