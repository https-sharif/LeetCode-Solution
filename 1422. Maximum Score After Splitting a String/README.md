# Maximum Score After Splitting a String

## Problem Description

Given a string `s` of zeros and ones, *return the maximum score after splitting the string into two **non-empty** substrings* (i.e. **left** substring and **right** substring).

The score after splitting a string is the number of **zeros** in the **left** substring plus the number of **ones** in the **right** substring.

## Solution Approach

The solution involves preprocessing the input string to count the number of ones in the suffix of the string. Then, using a single traversal, calculate the score for each possible split and find the maximum.

## Code Explanation

### Preprocessing the `one` Array

- **Purpose:** To store the cumulative count of ones starting from the current position to the end of the string.
- **How:**  
  - Start from the last position, and for each position, calculate the sum of ones from the current position to the end.

### Main Logic

1. **Initialization:**
   - `cnt` keeps track of zeros in the left substring.
   - `ans` stores the maximum score encountered so far.

2. **Iterate through the string:**  
   - If the current character is '0', increment `cnt` as it belongs to the left substring.
   - Calculate the score as `cnt + one[i + 1]` for the current split and update `ans` if it's greater.

### `maxScore` Function

- **Input:** A binary string `s`.
- **Output:** An integer representing the maximum score after splitting.
- **Logic:** Combines preprocessing and iterative scoring to compute the result efficiently.

## Complexity

- **Time Complexity:** $O(n)$, for a single pass to compute the suffix array and another to calculate the maximum score.  
- **Space Complexity:** $O(n)$, for storing the suffix counts of ones in the `one` array.
