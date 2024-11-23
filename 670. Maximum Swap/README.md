# Maximum Swap

## Problem Description

You are given an integer `num`. You can swap two digits at most once to get the maximum valued number.

Return *the maximum valued number you can get*.

## Solution Approach

The approach involves converting the integer to a string, identifying the best digit to swap with the current one, and performing the swap if it results in a larger number. The process ensures we get the maximum possible number in just one swap.

## Code Explanation

### `maximumSwap` Function

- The input integer is converted into a string for easier manipulation of digits.
- For each digit, the code looks for the largest possible digit to its right.
- If such a digit is found, a swap is performed, and the new number is returned.
- If no beneficial swap can be made, the original number is returned.

## Complexity

- **Time Complexity:** $O(n^2)$, where `n` is the number of digits in `num`. 
- **Space Complexity:** $O(n)$, for storing the string representation of the number.
