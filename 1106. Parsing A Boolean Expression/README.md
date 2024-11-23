# Parsing a Boolean Expression

## Problem Description

A boolean expression is an expression that evaluates to either `true` or `false`. It can be in one of the following shapes:

- `'t'` that evaluates to `true`.
- `'f'` that evaluates to `false`.
- `'!(subExpr)'` that evaluates to **the logical NOT** of the inner expression `subExpr`.
- `'&(subExpr1, subExpr2, ..., subExprn)'` that evaluates to **the logical AND** of the inner expressions `subExpr1, subExpr2, ..., subExprn` where `n >= 1`.
- `'|(subExpr1, subExpr2, ..., subExprn)'` that evaluates to **the logical OR** of the inner expressions `subExpr1, subExpr2, ..., subExprn` where `n >= 1`.

Given a string `expression` that represents a **boolean expression**, return *the evaluation of that expression*.

It is **guaranteed** that the given expression is valid and follows the given rules.

## Solution Approach

The provided solution uses a stack to evaluate the boolean expression by parsing through each character. It processes the expression based on the logical operators (`!`, `&`, `|`) and their respective operands. The final result is determined by the logical evaluation of the parsed expressions.

## Code Explanation

### `parseBoolExpr` Function

- The function iterates through the `expression` string.
- When encountering a `)`, it evaluates the enclosed expression by popping elements from the stack until it finds the corresponding `(`.
- Depending on the logical operator (`!`, `&`, or `|`), it determines the resultant value (`true` or `false`) and pushes it back onto the stack.
- Finally, it checks the top of the stack to return the overall evaluation.

## Complexity

- **Time Complexity:** $O(n)$, where n is the length of the expression.
- **Space Complexity:** $O(n)$, for the stack used to store the characters during evaluation.
