# Find Missing Observations

## Problem Description

You have observations of `n + m` **6-sided** dice rolls with each face numbered from `1` to `6`. `n` of the observations went missing, and you only have the observations of `m` rolls. Fortunately, you have also calculated the **average value** of the `n + m` rolls.

You are given an integer array `rolls` of length `m` where `rolls[i]` is the value of the `i`<sup>`th`</sup> observation. You are also given the two integers `mean` and `n`.

Return *an array of length* `n` *containing the missing observations such that the **average value** of the* `n + m` *rolls is exactly* `mean`. If there are multiple valid answers, return *any of them*. If no such array exists, return *an empty array*.

The **average value** of a set of `k` numbers is the sum of the numbers divided by `k`.

Note that `mean` is an integer, so the sum of the `n + m` rolls should be divisible by `n + m`.

## Solution Approach

The function calculates the total sum required for the `n + m` dice rolls to achieve the given mean. It then computes the sum of the known rolls and determines the sum needed for the missing rolls. Based on this, it constructs the array of missing rolls to match the required `mean`.

## Code Explanation

### `missingRolls` Function

- **Calculates total sum**: Computes the total sum required for all dice rolls to meet the average mean.
- **Computes current sum**: Sums up the known dice rolls.
- **Checks feasibility**: Validates if the sum of missing rolls is achievable given the constraints of dice values (1 to 6).
- **Distributes sum**: Distributes the sum among the missing rolls and adjusts to ensure all values are within the valid range (1 to 6).

## Complexity

- **Time Complexity:** $O(m + n)$, where `m` is the length of `rolls` and `n` is the number of missing rolls.
- **Space Complexity:** $O(n)$, for storing the result array of length `n`.
