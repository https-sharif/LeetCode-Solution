# Adding Spaces to a String

## Problem Description

You are given a **0-indexed** string `s` and a **0-indexed** integer array `spaces` that describes the indices in the original string where spaces will be added. Each space should be inserted **before** the character at the given index.

For example, given `s = "EnjoyYourCoffee"` and `spaces = [5, 9]`, we place spaces before `'Y'` and `'C'`, which are at indices `5` and `9` respectively. Thus, we obtain `"Enjoy Your Coffee"`.

Return *the modified string **after** the spaces have been added*.

## Solution Approach

The code iterates through the string `s` and, for each character, checks if the current index matches any value in the `spaces` vector. If so, a space is inserted at that position in the result string.

## Code Explanation

### `addSpaces` Function

- **Loop through the string**: The function iterates over each character of `s` and checks if the current index matches the one in the `spaces` vector.
- **Insert space when needed**: If the current index is found in `spaces`, it appends a space to the result string before adding the current character.
- **Result string construction**: As we loop, we keep constructing the result string with spaces inserted at the specified positions.

## Complexity

- **Time Complexity:** $O(n + m)$, where `n` is the length of the string `s`, and `m` is the size of the `spaces` vector.
- **Space Complexity:** $O(n)$, as we are constructing a new string to store the result.
