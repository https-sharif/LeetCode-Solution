# Zigzag Conversion

## Problem Description

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this:

```
P   A   H   N
A P L S I I G
Y   I   R
```

And then read line by line: `"PAHNAPLSIIGYIR"`.

Write the code that will take a string and make this conversion given a number of rows.

## Solution Approach

1. **Edge Case**:
   - If `numRows` is 1, return the original string since no zigzag conversion is needed.

2. **Initialize Data Structures**:
   - Create a list of strings to hold the characters for each row.

3. **Populate Rows**:
   - Iterate through each character in the string.
   - Determine the current row based on the direction of traversal (downwards or upwards).
   - Adjust the row index according to the direction, reversing when reaching the top or bottom row.

4. **Construct Result**:
   - Concatenate the rows to form the final string.

5. **Return Result**:
   - Return the concatenated string as the result. 

## Complexity

- **Time Complexity**: $O(n)$, where `n` is the length of the string.
- **Space Complexity**: $O(n)$, where `n` is the length of the string.
