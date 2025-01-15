# Minimize XOR

## Problem Description

Given two positive integers `num1` and `num2`, find the positive integer `x` such that:

- `x` has the same number of set bits as `num2`, and
- The value `x XOR num1` is **minimal**.
  
Note that `XOR` is the bitwise XOR operation.

Return *the integer* `x`. The test cases are generated such that `x` is **uniquely determined**.

The number of **set bits** of an integer is the number of `1`'s in its binary representation.

## Solution Approach

The solution involves bit manipulation and aims to preserve as many set bits (`1`s) from `num1` as possible to minimize the XOR value. If additional `1`s are needed, they are added starting from the least significant bit.

## Code Explanation

### Main Steps

1. **Count Set Bits in `num2`:**
   - Calculate the number of `1` bits in `num2` using bitwise operations.

2. **Preserve Set Bits from `num1`:**
   - Start from the most significant bit (MSB) of `num1` and copy its `1` bits to the result `ans`, decrementing the required count of `1`s (`cnt`) for each bit set.

3. **Fill Remaining Bits:**
   - If additional `1`s are still required, set them starting from the least significant bit (LSB) of `ans`.

4. **Return the Result:**
   - The final `ans` has the same number of `1` bits as `num2` while minimizing the XOR value with `num1`.

## Complexity

- **Time Complexity:** $O(\log n)$, where `n` is the maximum value between `num1` and `num2`.
- **Space Complexity:** $O(1)$, as only a constant amount of extra space is used.
