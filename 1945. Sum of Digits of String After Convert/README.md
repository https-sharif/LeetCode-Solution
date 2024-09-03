# Sum of Digits of String After Convert

## Problem Description

You are given a string `s` consisting of lowercase English letters and an integer `k`.

First, **convert** `s` into an integer by replacing each letter with its position in the alphabet (i.e., replace `'a'` with `1`, `'b'` with `2`, ..., `'z'` with `26`). Then, **transform** the integer by replacing it with the **sum of its digits**. Repeat the **transform** operation `k` **times** in total.

For example, if `s = "zbax"` and `k = 2`, then the resulting integer would be `8` by the following operations:

- Convert: `"zbax" ➝ "(26)(2)(1)(24)" ➝ "262124" ➝ 262124`
- Transform #1: `262124 ➝ 2 + 6 + 2 + 1 + 2 + 4 ➝ 17`
- Transform #2: `17 ➝ 1 + 7 ➝ 8`

Return *the resulting integer after performing the operations described above*.

## Solution Approach

The solution involves two main steps. First, convert each character in the string `s` to its corresponding position in the alphabet and concatenate these values into a string `t`. Then, repeatedly transform `t` by summing its digits `k` times until the final result is obtained.

## Code Explanation

### `getLucky` Function

- **Conversion:** The function starts by converting each character in `s` to its corresponding alphabet position and forms the string `t`.
- **Transformation:** The function then performs `k` iterations where each digit in `t` is summed to form a new `t`.
- **Return:** Finally, the function returns the integer value of the transformed string `t`.

## Complexity

- **Time Complexity:** $O(n + k \times m)$, where `n` is the length of the string `s`, and `m` is the number of digits in `t`.
- **Space Complexity:** $O(m)$, where `m` is the maximum number of digits in the string `t`.
