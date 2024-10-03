# Make Sum Divisible by P

## Problem Description

Given an array of positive integers `nums`, remove the **smallest** subarray (possibly **empty**) such that the **sum** of the remaining elements is divisible by `p`. It is **not** allowed to remove the whole array.

Return *the length of the smallest subarray that you need to remove, or* `-1` *if it's impossible*.

A **subarray** is defined as a contiguous block of elements in the array.

## Solution Approach

The approach is based on computing the remainder of the sum of the entire array modulo `p` and attempting to find the smallest subarray that can be removed to make the sum divisible by `p`. A hash map is used to store previous remainders of subarray sums to help in quickly identifying the length of the subarray that needs to be removed.

## Code Explanation

### `minSubarray` Function

- First, the array is processed so that each element is reduced modulo `p`, and the cumulative sum of elements modulo `p` is computed.
- If the sum modulo `p` is 0, we return 0 as no subarray needs to be removed.
- A map is used to store the remainders of subarray sums and their indices, which helps in finding the smallest subarray whose removal will make the sum divisible by `p`.
- If such a subarray is found, its length is updated; otherwise, the function returns `-1`.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the size of the array.
- **Space Complexity:** $O(n)$, for storing the hash map containing subarray sums and their indices.
