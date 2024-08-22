# Number Complement

## Problem Description

The **complement** of an integer is the integer you get when you flip all the `0`'s to `1`'s and all the `1`'s to `0`'s in its binary representation.

For example, The integer `5` is `"101"` in binary and its **complement** is `"010"` which is the integer `2`.

Given an integer `num`, return *its complement*.

## Solution Approach

The problem requires finding the complement of a given integer `num`, where the complement is obtained by flipping the bits of its binary representation. 

The approach used in the solution:

1. **Initialize Variables**: 
   - `d` is initialized to 0 and is used to track the current bit position.
   - `ans` is initialized to 0 and will store the result.

2. **Iterate through the Bits of `num`**:
   - The loop runs while `num` is non-zero.
   - If the least significant bit of `num` (obtained using `num % 2`) is 0, it indicates that this bit should be flipped to 1 in the complement. The value `1 << d` (which shifts 1 to the left by `d` positions) is added to `ans`.
   - Increment `d` to move to the next bit position.
   - Right shift `num` by 1 (`num = num >> 1`) to process the next bit.

3. **Return the Result**: 
   - The final value of `ans` represents the complement of `num`.

## Complexity

- **Time Complexity**: $O(log n)$, where `n` is the value of `num`. The algorithm processes each bit of `num`, and the number of bits is proportional to the logarithm of `num`.
- **Space Complexity**: $O(1)$, as the algorithm uses a constant amount of extra space.
