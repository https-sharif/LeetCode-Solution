# Different Ways to Add Parentheses

## Problem Description

Given a string `expression` of numbers and operators, return *all possible results from computing all the different possible ways to group numbers and operators*. You may return the answer in **any order**. The test cases are generated such that the output values fit in a 32-bit integer and the number of different results does not exceed `10⁴`.

## Solution Approach

The solution uses divide and conquer with recursion to compute all possible results. For each operator found in the expression, it divides the string into left and right sub-expressions and recursively computes the result for both. Then, it combines the results using the operator.

## Code Explanation

### `operation` Function

- Takes two integers `a`, `b` and a character `op` (operator).
- Depending on the operator, it returns the result of the operation `a + b`, `a - b`, or `a * b`.

### `diffWaysToCompute` Function

- Checks each character in the string to see if it is an operator.
- If an operator is found, it divides the expression into two parts: the left side and the right side.
- It recursively computes possible results for both parts.
- Combines the results using the current operator.
- If no operator is found (i.e., the expression is a single number), it directly converts it to an integer.

## Complexity

- **Time Complexity:** $O(2^n)$, where `n` is the length of the expression.
- **Space Complexity:** $O(2^n)$, due to the recursion and storage of intermediate results in each recursive call.
