# 2 Keys Keyboard

There is only one character `'A'` on the screen of a notepad. You can perform one of two operations on this notepad for each step:

- Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
- Paste: You can paste the characters which are copied last time.
  
Given an integer `n`, return *the minimum number of operations to get the character* `'A'` *exactly* `n` *times on the screen*.

## Solution Approach

The solution aims to calculate the minimum number of steps to reduce `n` to 1 by factoring the number.

1. **Factorization Process**:
   - Start by dividing `n` by 2 as long as it's divisible, accumulating the factors.
   - Then, iterate through odd divisors starting from 3, adding each factor to the result until `n` is reduced to 1.
  
2. **Efficiency**:
   - The `findAns` function performs trial division, which is efficient for small to moderately large numbers.

## Complexity

- **Time Complexity**: $O(√n)$: The algorithm checks all possible divisors up to `√n` in the worst case.
  
- **Space Complexity**: $O(1)$: Only a few integer variables are used, leading to constant space usage.
