# Maximum Count of Non-Banned Numbers

## Problem Description



## Solution Approach

The solution iterates through the numbers from `1` to `n`, skipping the banned ones and ensuring the sum remains within the limit. It uses a set for efficient lookup of banned numbers.

## Code Explanation

### `maxCount` Function

1. **Initialize the set**: Convert the `banned` vector into a set for efficient lookup.
2. **Iterate from 1 to n**:
   - Skip numbers that are in the banned set.
   - Add the number to the running sum if it doesn't exceed `maxSum`.
   - Increment the count of valid numbers.
3. **Break the loop**: Stop if adding the next number would exceed `maxSum`.
4. **Return the count**: Output the total count of numbers included.

## Complexity

- **Time Complexity:** $O(n + m)$, where `n` is the range of numbers and `m` is the size of the banned list.  
- **Space Complexity:** $O(m)$, for storing the banned numbers in a set.
