# Defuse the Bomb

## Problem Description

You have a bomb to defuse, and your time is running out! Your informer will provide you with a **circular** array `code` of length of `n` and a key `k`.

To decrypt the code, you must replace every number. All the numbers are replaced **simultaneously**.

- If `k > 0`, replace the `i`<sup>`th`</sup> number with the sum of the **next** `k` numbers.
- If `k < 0`, replace the `i`<sup>`th`</sup> number with the sum of the **previous** `k` numbers.
- If `k == 0`, replace the `i`<sup>`th`</sup> number with `0`.
  
As code is circular, the next element of `code[n-1]` is `code[0]`, and the previous element of `code[0]` is `code[n-1]`.

Given the **circular** array `code` and an integer key `k`, return *the decrypted code to defuse the bomb*!

## Solution Approach

The solution involves iterating over the array while maintaining a sliding sum of either the next or previous `k` elements. Depending on whether `k` is positive or negative, the logic adjusts to handle circular indexing using modulo operations.

## Code Explanation

### `decrypt` Function

- **Input:** `vector<int>& code`, `int k`
- **Output:** Transformed array based on the value of `k`.

1. **Initialization:**
   - `n`: Stores the size of the array.
   - `sum`: Holds the sliding sum of `k` elements.
   - `ans`: Result vector initialized to `0`.

2. **Case `k == 0`:**
   - Directly return the result vector filled with `0`.

3. **Case `k < 0`:**
   - Convert `k` to its positive value.
   - Calculate the initial sum for the last `k` elements using a reverse loop.
   - Fill the array `ans` while sliding the window backward, adjusting `sum` as needed.

4. **Case `k > 0`:**
   - Compute the initial sum for the first `k` elements.
   - Fill the array `ans` while sliding the window forward, adjusting `sum` as needed.

5. **Circular Indexing:**
   - Use `(i + n) % n` to handle indices that go out of bounds.

## Complexity

- **Time Complexity:** $O(n)$, sliding window ensures we process each element once.
- **Space Complexity:** $O(n)$, for the result vector `ans`.
