# Prime Subtraction Operation

## Problem Description

You are given a **0-indexed** integer array `nums` of length `n`.

You can perform the following operation as many times as you want:

- Pick an index `i` that you haven’t picked before, and pick a prime `p` **strictly less than** `nums[i]`, then subtract `p` from `nums[i]`.
- 
Return *true if you can make* `nums` *a strictly increasing array using the above operation and false otherwise*.

A **strictly increasing array** is an array whose each element is strictly greater than its preceding element.

## Solution Approach

The code checks if it’s possible to make `nums` strictly increasing by reducing values with primes. It iterates from the end of the array to the beginning, trying to ensure each element is less than the next one by reducing it with the smallest prime needed.

## Code Explanation

### `isPrime` Function

- Checks if a number `x` is prime:
  - Numbers ≤ 1 are non-prime.
  - Numbers ≤ 3 are prime.
  - Divisibility checks use 6k ± 1 optimization to reduce operations.

### `nextPrime` Function

- Finds the next prime greater than or equal to `x`:
  - Increments `x` until a prime number is found.

### `primeSubOperation` Function

- Iterates backward through `nums` to enforce a strictly increasing order:
  - For each element `nums[i]`, if it is not smaller than the element to its right, calculates a required prime subtraction `diff`.
  - Ensures `nums[i] - diff` maintains increasing order and updates the lower limit (`lm`).
- Returns `true` if the final `lm` > 0, meaning the transformation is successful.

## Complexity

- **Time Complexity:** $O(n \sqrt{m})$, where `n` is the length of `nums` and `m` is the maximum value in `nums`.
- **Space Complexity:** $O(1)$, as only a few variables are used for calculations without additional data structures.
