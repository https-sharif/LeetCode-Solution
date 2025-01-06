# Shifting Letters with Directional Shifts

## Problem Description

You are given a string `s` of lowercase English letters and a 2D integer array shifts where `shifts[i] = [start`<sub>`i`</sub>`, end`<sub>`i`</sub>`, direction`<sub>`i`</sub>`]`. For every `i`, **shift** the characters in `s` from the index `start`<sub>`i`</sub> to the index `end`<sub>`i`</sub> (**inclusive**) forward if `direction`<sub>`i`</sub>` = 1`, or shift the characters backward if `direction`<sub>`i`</sub>` = 0`.

Shifting a character **forward** means replacing it with the **next** letter in the alphabet (wrapping around so that `'z'` becomes `'a'`). Similarly, shifting a character **backward** means replacing it with the **previous** letter in the alphabet (wrapping around so that `'a'` becomes `'z'`).

Return *the final string after all such shifts to* `s` *are applied*.

## Solution Approach

The solution utilizes a difference array to efficiently manage overlapping range updates. After processing all shifts, prefix sums are calculated to determine the final shift at each index. The shifts are then applied to the string characters, ensuring alphabet wrapping.

## Code Explanation

### `shiftingLetters` Function

1. **Initialization:**
   - Create a difference array `apply` to track range updates.
   
2. **Processing Shifts:**
   - Iterate through each shift in `shifts`:
     - Increment `apply[start]` by `+1` for forward or `-1` for backward shifts.
     - Decrement `apply[end + 1]` to mark the end of the range.

3. **Prefix Sum:**
   - Compute the prefix sum of `apply` to determine the cumulative shift for each character.

4. **Apply Shifts:**
   - For each character in the string:
     - Calculate the new position using modular arithmetic to handle wrapping around the alphabet.
     - Update the character in the string.

5. **Return Result:**
   - Return the updated string.

## Complexity

- **Time Complexity:** $O(n + m)$, where `n` is the string length and `m` is the number of shifts, for processing shifts and applying them.  
- **Space Complexity:** $O(n)$, for the difference array of size `n + 1`.
