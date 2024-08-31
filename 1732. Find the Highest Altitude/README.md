# Find the Highest Altitude

## Problem Description

There is a biker going on a road trip. The road trip consists of `n + 1` points at different altitudes. The biker starts his trip on point `0` with altitude equal `0`.

You are given an integer array `gain` of length `n` where `gain[i]` is the **net gain in altitude** between points `i`​​​​​​ and `i + 1` for all `(0 <= i < n)`. Return *the **highest altitude** of a point*.

## Solution Approach

The solution iterates through the `gain` array while maintaining a cumulative sum of the altitude. At each step, it calculates the new altitude and updates the maximum altitude encountered so far. This approach ensures that we can efficiently determine the highest point reached during the trip.

## Code Explanation

### `largestAltitude` Function

- **Initial Variables**:
  - `ans`: Stores the highest altitude encountered so far, initialized to 0.
  - `x`: Tracks the current altitude as the biker progresses through the trip.

- **Looping through `gain`**:
  - For each element `g` in `gain`, calculate the new altitude by adding `g` to `x`.
  - Update `ans` with the maximum value between the current altitude and `ans`.
  - Update `x` with the new altitude.

- **Final Result**:
  - The function returns `ans`, which holds the highest altitude reached during the entire trip.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of elements in `gain`. The loop iterates through the array once.
- **Space Complexity:** $O(1)$, as the solution only uses a fixed amount of extra space regardless of the input size.
