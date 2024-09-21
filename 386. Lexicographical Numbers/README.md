# Lexicographical Numbers

## Problem Description

Given an integer `n`, return all the numbers in the range `[1, n]` sorted in lexicographical order. 

You must write an algorithm that runs in `O(n)` time and uses `O(1)` extra space. 

## Solution Approach

This approach builds the lexicographical order by simulating the process manually. Starting from `1`, it multiplies the current number by `10` when possible, or increments and adjusts for trailing zeroes to navigate through the lexicographical sequence.

## Code Explanation

### `lexicalOrder` Function

- `ans` is a vector of size `n` to store the lexicographically ordered numbers.
- `curr` starts from 1 and is updated iteratively:
  - If multiplying `curr` by 10 is valid (i.e., `curr * 10 <= n`), it moves to the next lexicographical group.
  - Otherwise, it increments `curr`. If `curr` exceeds `n`, the loop moves back by dividing by 10.
  - Trailing zeros are removed by dividing `curr` by 10 until it is not divisible by 10.

## Complexity

- **Time Complexity:** $O(n)$, since each number is processed exactly once in the loop.
- **Space Complexity:** $O(1)$, as only constant extra space is used apart from the output vector.
