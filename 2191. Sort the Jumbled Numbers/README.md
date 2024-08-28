# Sort the Jumbled Numbers

## Problem Description

You are given a **0-indexed** integer array `mapping` which represents the mapping rule of a shuffled decimal system. `mapping[i] = j` means digit `i` should be mapped to digit `j` in this system.

The **mapped value** of an integer is the new integer obtained by replacing each occurrence of digit `i` in the integer with `mapping[i]` for all `0 <= i <= 9`.

You are also given another integer array `nums`. Return *the array* `nums` *sorted in **non-decreasing** order based on the **mapped values** of its elements*.

**Notes:**
- Elements with the same mapped values should appear in the same relative order as in the input.
- The elements of `nums` should only be sorted based on their mapped values and not be replaced by them.

### Solution Approach

1. **Transform Numbers**:
   - For each number in `nums`, transform it by replacing each digit according to `mapping`.
   - Convert each digit of the number to its corresponding digit in `mapping` and build the new number.

2. **Sort Based on Transformed Values**:
   - Use a vector of pairs where each pair contains the transformed number and its original index.
   - Sort this vector based on the transformed numbers while preserving the original order for equal mapped values.

3. **Construct Result**:
   - Extract the original numbers from the sorted vector based on their original indices.

4. **Return Result**:
   - Return the sorted numbers in their original form.

### Complexity

- **Time Complexity**: $O(n log n)$, where `n` is the number of elements in `nums`.
- **Space Complexity**: $O(n)$ for storing the transformed numbers and their indices.
