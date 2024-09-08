# Split Linked List into Parts

## Problem Description

Given the `head` of a singly linked list and an integer `k`, split the linked list into `k` consecutive linked list parts. 

The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null. 

The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later. 

Return *an array of the* `k` *parts*.

## Solution Approach

The code divides the linked list into `k` parts, ensuring each part is as equal in size as possible. It calculates the size of each part and distributes any extra nodes to the earlier parts. It then creates sublists by iterating through the linked list and adjusting pointers.

## Code Explanation

### `splitListToParts` Function

- **Calculate the length of the linked list:** Iterate through the list to determine the total number of nodes.
- **Determine size of each part:** Compute the base size of each part and how many parts need an extra node.
- **Split the list:** Iterate through the list again, creating each part based on the calculated sizes and disconnecting nodes where needed.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of nodes in the linked list.
- **Space Complexity:** $O(k)$, where `k` is the number of parts.
