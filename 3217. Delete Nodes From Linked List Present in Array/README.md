# Delete Nodes From Liked List Present in Array

## Problem Description

You are given an array of integers `nums` and the head of a linked list. Return the `head` of the modified linked list after **removing** all nodes from the linked list that have a value that exists in `nums`.

## Solution Approach

The approach uses an unordered map to track the elements in `nums`, then iterates through the linked list, skipping over nodes whose values exist in the map.

## Code Explanation

### `modifiedList` Function

- `unordered_map<int,bool> mp`: Maps each value in `nums` to `true` for quick lookup.
- The first `while` loop adjusts the head pointer if the initial nodes have values in `nums`.
- The second `while` loop iterates through the list:
  - If a node's value exists in the map (`mp`), it is skipped by updating the previous node's `next` pointer.
  - If not, move to the next node.
  
## Complexity

- **Time Complexity:** $O(N + M)$, where `N` is the length of the linked list and `M` is the size of `nums`. The unordered map allows $O(1)$ average-time lookups.
- **Space Complexity:** $O(M)$, where `M` is the size of `nums`, used for storing values in the unordered map.
