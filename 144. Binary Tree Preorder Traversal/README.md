# Binary Tree Preorder Traversal

## Problem Description

Given the `root` of a binary tree, return *the preorder traversal of its nodes' values*.

## Solution Approach

- **Traversal Order:** Root node, left subtree, right subtree.
- **Helper Function (`preOrder`):** Processes the root, then recursively traverses left and right subtrees, appending values to `ans`.
- **Main Function (`preorderTraversal`):** Calls `preOrder` and returns `ans`.

## Complexity

- **Time:** O(N) — Each node is visited once.
- **Space:** O(N) — For the result vector and recursion stack.
