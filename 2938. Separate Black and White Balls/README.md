# Separate Black and White Balls

## Problem Description

There are `n` balls on a table, each ball has a color black or white.

You are given a **0-indexed** binary string `s` of length `n`, where `1` and `0` represent black and white balls, respectively.

In each step, you can choose two adjacent balls and swap them.

Return *the **minimum** number of steps to group all the black balls to the right and all the white balls to the left*.

## Solution Approach

The code calculates the minimum number of swaps required to group all the black balls `1` on the right side and all the white balls `0` on the left side. It does this by counting the number of white balls encountered before each black ball, which represents the number of swaps required.

## Code Explanation

### `minimumSteps` Function

- `one`: Keeps track of the number of black balls `1` encountered so far.
- `ans`: Stores the total number of swaps required.
- The loop iterates through the string `s`. If the current character is `1`, it increments the count of black balls (`one`). If the character is `0`, it adds the count of `one` to `ans`, representing the number of swaps needed to move all previous black balls past this white ball.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the length of the string.
- **Space Complexity:** $O(1)$, as we only use a few variables to store intermediate results.
