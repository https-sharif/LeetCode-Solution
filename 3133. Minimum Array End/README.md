# Minimum Array End

## Problem Description

You are given two integers `n` and `x`. You have to construct an array of **positive** integers `nums` of size `n` where for every `0 <= i < n - 1`, `nums[i + 1]` is **greater than** `nums[i]`, and the result of the bitwise `AND` operation between all elements of `nums` is `x`.

Return the **minimum** possible value of `nums[n - 1]`.

## Solution Approach

The solution iteratively checks each bit of `n` and sets corresponding bits in `x` where necessary. Starting from the least significant bit, the code applies bitwise operations to determine and set bits until all bits of `n` have been used. 

## Code Explanation

### `minEnd` Function

1. **Initialization**: `bit` is set to 1 to represent the initial bit position, and `pos` is set to 0 for tracking the position in `x`.
2. **Loop through `n`**:
   - For each bit in `n`, if the corresponding bit in `x` is not set (`x & bit == 0`), the function sets this bit in `x` using `x |= (((n & 1) << pos))`.
   - The function then right-shifts `n` to move to the next bit and increases the position marker `pos`.
3. **Return**: The modified `x` is returned, which is now the minimal possible value satisfying the given conditions.

## Complexity

- **Time Complexity:** $O(\log n)$, as each bit of `n` is processed once.
- **Space Complexity:** $O(1)$, as only a constant amount of extra space is used.
