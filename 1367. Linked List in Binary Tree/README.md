# Linked List in Binary Tree

## Problem Description

Given a binary tree `root` and a linked list with `head` as the first node.

Return `True` if all the elements in the linked list, starting from the `head`, correspond to some *downward path* connected in the binary tree, otherwise return `False`.

In this context, a downward path means a path that starts at some node and goes downwards.

## Solution Approach

The solution uses a recursive approach to check if the linked list is a subpath of the binary tree. It starts by checking if the head node matches the root node and proceeds recursively to check either the left or right child of the binary tree. If no match is found, it checks other subtrees for a match.

## Code Explanation

### `find` Function

- Recursively checks if the linked list matches a path starting from the current tree node.
- Returns `true` if the entire linked list has been matched (`head == nullptr`).
- If the tree node is `null` before the linked list is exhausted, it returns `false`.
- Checks if the current linked list node matches the current tree node, and then checks either the left or right subtree.

### `isSubPath` Function

- If the root is `null`, returns `false`.
- Calls the `find` function to check if the linked list matches the path starting from the current root.
- If no match is found at the current root, recursively checks the left and right subtrees for a potential match.

## Complexity

- **Time Complexity:** $O(n \cdot m)$, where `n` is the number of nodes in the binary tree and `m` is the number of nodes in the linked list.
- **Space Complexity:** $O(h)$, where `h` is the height of the binary tree, due to the recursive call stack.
