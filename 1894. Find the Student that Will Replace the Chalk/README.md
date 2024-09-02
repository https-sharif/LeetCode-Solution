# Find the Student that Will Replace the Chalk

## Problem Description

There are `n` students in a class numbered from `0` to `n - 1`. The teacher will give each student a problem starting with the student number `0`, then the student number `1`, and so on until the teacher reaches the student number `n - 1`. After that, the teacher will restart the process, starting with the student number `0` again.

You are given a **0-indexed** integer array `chalk` and an integer `k`. There are initially `k` pieces of chalk. When the student number `i` is given a problem to solve, they will use `chalk[i]` pieces of chalk to solve that problem. However, if the current number of chalk pieces is **strictly less** than `chalk[i]`, then the student number `i` will be asked to **replace** the chalk.

Return *the **index** of the student that will **replace** the chalk pieces*.

## Solution Approach

The solution first calculates the prefix sum of the chalk usage array to determine when the total chalk used exceeds `k`. If `k` is greater than the total chalk used in one full round, the remainder of `k` modulo the total chalk is recalculated to optimize the search. A binary search is then used to find the exact student who will need to replace the chalk.

## Code Explanation

### `chalkReplacer` Function

- **Prefix Sum Calculation:** Accumulates the chalk usage to determine when the chalk count exceeds `k`. If it does during this accumulation, the function immediately returns the index of that student.
- **Modulo Operation:** If `k` is greater than the total chalk used in one full round, `k` is reduced to `k % chalk[n-1]` to limit the search to a smaller range.
- **Binary Search:** A binary search is performed on the prefix sums to quickly find the first student who needs to replace the chalk.

## Complexity

- **Time Complexity:** $O(\log n)$ for the binary search after the prefix sum computation, where `n` is the number of students. The prefix sum calculation is $O(n)$.
- **Space Complexity:** $O(1)$, as the algorithm uses a constant amount of extra space.
