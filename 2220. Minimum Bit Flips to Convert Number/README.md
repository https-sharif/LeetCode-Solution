# Minimum Bit Flips to Convert Number

## Problem Description

A **bit flip** of a number `x` is choosing a bit in the binary representation of `x` and **flipping** it from either `0` to `1` or `1` to `0`.

For example, for `x = 7`, the binary representation is `111` and we may choose any bit (including any leading zeros not shown) and flip it. We can flip the first bit from the right to get `110`, flip the second bit from the right to get `101`, flip the fifth bit from the right (a leading zero) to get `10111`, etc.

Given two integers `start` and `goal`, return *the **minimum** number of **bit flips** to convert* `start` *to* `goal`.

## Solution Approach

The solution counts the number of positions where the binary representations of `start` and `goal` differ. It does this by comparing each bit of the two numbers using XOR and counting how many bits differ.

## Code Explanation

### `minBitFlips` Function

- Initializes `c` to count the bit flips.
- Uses a loop to compare each bit of `start` and `goal` by checking the least significant bit, flipping if necessary, and shifting both numbers to the right.
- Returns the total number of bit flips counted.

## Complexity

- **Time Complexity:** $O(\log n)$, where `n` is the maximum value between `start` and `goal`.
- **Space Complexity:** $O(1)$, as we only use a constant amount of extra space.
