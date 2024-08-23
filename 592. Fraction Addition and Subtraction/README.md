# Fraction Addition

## Problem Description

Given a string `expression` representing an expression of fraction addition and subtraction, return the calculation result in string format.

The final result should be an irreducible fraction. If your final result is an integer, change it to the format of a fraction that has a denominator `1`. So in this case, `2` should be converted to `2/1`.

## Solution Approach

This solution solves the problem of adding fractions given in a string format and returns the result as a simplified fraction.

### Steps:
1. **GCD and LCM Calculation**:
   - The `gcd` function calculates the greatest common divisor using the Euclidean algorithm.
   - The `lcm` function computes the least common multiple using the formula `LCM(a, b) = (a * b) / GCD(a, b)`.

2. **Parsing the Input String**:
   - Iterate through the input string to extract numerators and denominators, handling signs (`+` and `-`) appropriately.
   - Store numerators and denominators in separate vectors.

3. **Common Denominator Calculation**:
   - Compute the least common multiple (LCM) of all denominators to get a common denominator for the fractions.

4. **Summing the Fractions**:
   - Convert each fraction to the common denominator and sum the numerators.
   - Simplify the resulting fraction by dividing both the numerator and denominator by their greatest common divisor (GCD).

5. **Edge Case**:
   - If the result is zero, return `"0/1"` as the simplified fraction.

## Complexity Analysis

- **Time Complexity**:  $O(n)$ , where `n` is the length of the input string, covering parsing and LCM/GCD calculations.

- **Space Complexity**: $O(n)$, for storing numerators and denominators.
