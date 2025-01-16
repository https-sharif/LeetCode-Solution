# XOR of All Numbers

## Problem Description

You are given two **0-indexed** arrays, `nums1` and `nums2`, consisting of non-negative integers. There exists another array, `nums3`, which contains the bitwise XOR of **all pairings** of integers between `nums1` and `nums2` (every integer in `nums1` is paired with every integer in `nums2` **exactly once**).

Return *the **bitwise XOR** of all integers in* `nums3`.

## Solution Approach

The solution calculates the XOR of all elements in `nums1` or `nums2` based on the parity (odd/even) of the sizes of the arrays. If the array size is odd, it XORs all the elements of the array; otherwise, it skips the XOR operation for that array. The final result is the XOR of the results from `nums1` and `nums2`.

## Code Explanation

### Main Algorithm

1. **Check Parity of Array Sizes:**
   - If the size of `nums2` is odd, XOR all elements of `nums1` into `xor1`.
   - If the size of `nums1` is odd, XOR all elements of `nums2` into `xor2`.

2. **Return Final Result:**
   - Return the XOR of `xor1` and `xor2`.

## Complexity

- **Time Complexity:** $O(n + m)$, where `n` is the length of `nums1` and `m` is the length of `nums2`.
- **Space Complexity:** $O(1)$, as only a constant amount of extra space is used.
