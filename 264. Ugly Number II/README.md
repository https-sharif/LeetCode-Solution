# Ugly Number II

## Problem Description

An **ugly number** is a positive integer whose prime factors are limited to `2`, `3`, and `5`.

Given an integer `n`, return *the `nth` **ugly number***.

## Solution Approach

The problem is to find the `n`th ugly number. Ugly numbers are numbers whose only prime factors are 2, 3, or 5. The approach uses dynamic programming to generate the sequence of ugly numbers efficiently.

1. **Initialization**:
   - Use three pointers `l2`, `l3`, and `l5` to track the multiples of 2, 3, and 5 respectively.
   - Create a vector `k` of size `n` to store the first `n` ugly numbers.
   - Start with `k[0] = 1` since 1 is considered an ugly number.

2. **Iterative Calculation**:
   - For each index from 1 to `n-1`, calculate the next ugly number by taking the minimum of `k[l2] * 2`, `k[l3] * 3`, and `k[l5] * 5`.
   - Increment the respective pointer(s) `l2`, `l3`, or `l5` whose product was used to determine the minimum.

3. **Return**:
   - The `n`th ugly number is stored in `k[n-1]`.

## Complexity

- **Time**: $O(n)$ – iterates through `n` numbers with constant time operations per iteration.
- **Space**: $O(n)$ – stores the first `n` ugly numbers in a vector.
