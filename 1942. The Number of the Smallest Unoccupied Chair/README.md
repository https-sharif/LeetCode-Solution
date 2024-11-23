# The Number of the Smallest Unoccupied Chair

## Problem Description

There is a party where `n` friends numbered from `0` to `n - 1` are attending. There is an **infinite** number of chairs in this party that are numbered from `0` to `infinity`. When a friend arrives at the party, they sit on the unoccupied chair with the **smallest number**.

- For example, if chairs `0`, `1`, and `5` are occupied when a friend comes, they will sit on chair number `2`.

When a friend leaves the party, their chair becomes unoccupied at the moment they leave. If another friend arrives at that same moment, they can sit in that chair.

You are given a **0-indexed** 2D integer array `times` where `times[i] = [arrival`<sub>`i`</sub>`, leaving`<sub>`i`</sub>`]`, indicating the arrival and leaving times of the `i`<sup>`th`</sup> friend respectively, and an integer `targetFriend`. All arrival times are **distinct**.

Return *the **chair number** that the friend numbered* `targetFriend` *will sit on*.

## Solution Approach

The approach involves managing the arrival and leaving times of the friends. We sort the friends by arrival time and maintain two priority queues:
- One to track the available chairs.
- One to track the friends leaving, so their chair can be reassigned when they leave.

The algorithm processes each friend in order of arrival. For each friend, the smallest available chair is assigned, and when a friend leaves, their chair becomes available for others.

## Code Explanation

### `smallestChair` Function

- **arrival**: Stores the arrival times and indices of each friend.
- **available**: Min-heap that tracks the smallest available chair.
- **leaving**: Min-heap that tracks the friends leaving the party and the chairs they vacate.
- For each arriving friend, the function assigns the smallest available chair and returns the chair for targetFriend.

## Complexity

- **Time Complexity:** $O(n \log n)$ due to sorting and priority queue operations.
- **Space Complexity:** $O(n)$ for storing the chair and leave times. 
