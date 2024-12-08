# Move Pieces to Obtain a String

## Problem Description

You are given two strings `start` and `target`, both of length `n`. Each string consists **only** of the characters `'L'`, `'R'`, and `'_'` where:

- The characters `'L'` and `'R'` represent pieces, where a piece `'L'` can move to the **left** only if there is a **blank** space directly to its left, and a piece `'R'` can move to the **right** only if there is a **blank** space directly to its right.
- The character `'_'` represents a blank space that can be occupied by **any** of the `'L'` or `'R'` pieces.
  
Return `true` *if it is possible to obtain the string* `target` *by moving the pieces of the string* `start` ***any** number of times*. Otherwise, return `false`.

## Solution Approach

The solution uses two pointers to traverse the `start` and `target` strings, skipping empty spaces and validating the positions and movement constraints of the `'L'` and `'R'` characters. If all conditions are satisfied, the transformation is possible.

## Code Explanation

### `canChange` Function

1. **Pointer Traversal**:  
   Two pointers (`i` and `j`) are initialized to traverse `start` and `target` strings. Empty spaces (`'_'`) are skipped using `while` loops.

2. **Mismatch Check**:  
   If the characters at the current positions in `start` and `target` do not match, return `false`.

3. **Movement Constraints**:
   - `'L'` must only move to the left (i.e., `i >= j`).
   - `'R'` must only move to the right (i.e., `i <= j`).
   If these conditions are violated, return `false`.

4. **Increment Pointers**:  
   Both pointers are incremented to process the next non-empty character.

5. **Final Return**:  
   If all conditions are satisfied, return `true`.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the strings, as both pointers traverse each string once.
- **Space Complexity:** $O(1)$, since only a constant amount of extra space is used for the pointers and variables.
