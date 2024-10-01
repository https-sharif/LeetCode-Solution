# Check If Array Pairs Are Divisible by k

## Problem Description

Given an array of integers `arr` of even length `n` and an integer `k`.

We want to divide the array into exactly `n / 2` pairs such that the sum of each pair is divisible by `k`.

Return `true` *If you can find a way to do that or* `false` *otherwise*.

## Solution Approach

The approach involves using modulo arithmetic to check if each element in the array can be paired with another element such that their sum is divisible by `k`. We utilize a hash map to track the frequencies of remainders when elements are divided by `k`.

## Code Explanation

### `canArrange` Function

1. **Modulo Calculation**: Each element `a` in the array is replaced by its modulo `k` value. This ensures the remainder is always non-negative.
2. **Pairing Logic**:
    - If `a % k == 0`, check if there is another element already paired with a remainder of 0.
    - Otherwise, check if there exists an element with a remainder of `k - (a % k)` that can form a pair.
    - If not, store the current remainder for future pairing.
3. **Final Check**: After processing, ensure all remainders have been completely paired. If any remain unpaired, return `false`.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of elements in the array.
- **Space Complexity:** $O(k)$, where `k` is the divisor, as we are storing remainders and their frequencies in a map.
