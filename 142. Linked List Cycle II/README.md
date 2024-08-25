# Linked List Cycle

Given the `head` of a linked list, return *the node where the cycle begins. If there is no cycle, return* `null`.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer. Internally, `pos` is used to denote the index of the node that tail's `next` pointer is connected to (**0-indexed**). It is `-1` if there is no cycle.

**Note that `pos` is not passed as a parameter**.

## Solution Approach

- **Cycle Detection:** Uses a hash map to track visited nodes.
- **Algorithm:**
  - Traverse the list with a `slow` pointer.
  - If a node is revisited (found in the map), it indicates the start of the cycle.
  - If the end of the list is reached (`slow` becomes `nullptr`), there is no cycle.

## Complexity

- **Time:** O(N) — Each node is visited once.
- **Space:** O(N) — For the hash map storing node references.
