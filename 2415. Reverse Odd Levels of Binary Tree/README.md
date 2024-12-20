# Reverse Odd Levels of a Binary Tree

## Problem Description

Given the `root` of a **perfect** binary tree, reverse the node values at each **odd** level of the tree.

- For example, suppose the node values at level 3 are `[2,1,3,4,7,11,29,18]`, then it should become `[18,29,11,7,4,3,1,2]`.
  
Return *the root of the reversed tree*.

A binary tree is **perfect** if all parent nodes have two children and all leaves are on the same level.

The **level** of a node is the number of edges along the path between it and the root node.

## Solution Approach

The solution uses a depth-first search (DFS) approach to traverse the tree recursively and swap the values of nodes at odd levels. The helper function `swapNode` is used to handle the swapping at each odd level.

## Code Explanation

### `swapNode` Function

- **Input**: Two nodes (`l` and `r`), and the current `level`.
- **Purpose**: Swaps the values of the nodes at odd levels.
- **Logic**:
  - Base case: If either node is `nullptr`, return.
  - If the current level is odd, swap the values of `l` and `r`.
  - Recursively call `swapNode` on:
    - Left child of `l` with the right child of `r`.
    - Right child of `l` with the left child of `r`.

### `reverseOddLevels` Function

- **Input**: Root of the tree.
- **Logic**:
  - Start the `swapNode` function from the root's left and right children at level 1.
  - Return the modified root.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of nodes in the tree.
- **Space Complexity:** $O(h)$, where `h` is the height of the tree.
