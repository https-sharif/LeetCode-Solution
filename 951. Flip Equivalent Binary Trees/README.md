# Flip Equivalent Binary Trees

## Problem Description

For a binary tree **T**, we can define a **flip operation** as follows: choose any node, and swap the left and right child subtrees.

A binary tree **X** is *flip equivalent* to a binary tree **Y** if and only if we can make **X** equal to **Y** after some number of flip operations.

Given the roots of two binary trees `root1` and `root2`, return `true` if the two trees are flip equivalent or `false` otherwise.

## Solution Approach

The solution checks if two binary trees are flip equivalent by recursively comparing their nodes. It verifies the values of the nodes and explores both the direct and flipped child relationships to determine equivalence.

## Code Explanation

### `flipEquiv` Function

- Initiates the equivalence check by calling the `check` function with the two tree roots.

### `check` Function

- **Base Case:** If both nodes are `nullptr`, return `true`.
- If either node is `nullptr` or their values are not equal, return `false`.
- Recursively check both direct child nodes and the flipped child nodes.

## Complexity

- **Time Complexity:** $O(n)$, where $n$ is the number of nodes in the trees.
- **Space Complexity:** $O(h)$, where $h$ is the height of the tree.
