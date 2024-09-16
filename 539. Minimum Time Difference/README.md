# Minimum Time Difference

## Problem Description

Given a list of 24-hour clock time points in **"HH:MM"** format, return *the minimum minutes difference between any two time-points in the list*.

## Solution Approach

The solution sorts the time points and calculates the minimum time difference between consecutive time points as well as the time difference between the first and last time points, considering the circular nature of the clock.

## Code Explanation

### `findMinDifference` Function

- **Sorting**: Sorts the time points to facilitate the comparison of consecutive time points.
- **Difference Calculation**: Computes the difference between consecutive time points and the circular difference between the last and first time points.

### Key Steps
- **Parsing Time**: Extract hours and minutes from the time points and convert them into integer values.
- **Compute Differences**: For each pair of consecutive time points, compute the difference in minutes and update the minimum difference.
- **Circular Difference**: Calculate the time difference considering the circular nature of the 24-hour clock.

## Complexity

- **Time Complexity:** $O(n \log n)$, where $n$ is the number of time points.
- **Space Complexity:** $O(1)$, as the solution uses a constant amount of extra space.
