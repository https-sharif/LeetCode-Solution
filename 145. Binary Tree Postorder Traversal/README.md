# Binary Tree Postorder Traversal

## Problem Description 

Given the `root` of a binary tree, return *the postorder traversal of its nodes' values*.

## Solution Approach

- **Traversal Order:** Left subtree, right subtree, root node.
- **Helper Function (`postOrder`):** Recursively traverses left and right subtrees, then appends node values to `ans`.
- **Main Function (`postorderTraversal`):** Calls `postOrder` and returns the vector `ans`.

## Complexity

- **Time:** O(N) — Each node is visited once.
- **Space:** O(N) — Space for the result vector and recursion stack.
