# Largest Values in Each Tree Row

## Problem Description

Given the `root` of a binary tree, return *an array of the largest value in each row* of the tree **(0-indexed)**.

## Solution Approach

The problem can be solved using level order traversal (BFS). During traversal, we track the maximum value at each level and update the result array accordingly.

## Code Explanation

### `largestValues` Function

- We use a queue to perform level-order traversal of the tree.  
- For each node, we check its level. If the current level size is less than the size of `ans`, we update the maximum value for that level. If not, we replace the current maximum if the node’s value is greater.  
- We add the left and right children of the current node to the queue with an incremented level.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of nodes in the tree, since we visit each node once.  
- **Space Complexity:** $O(n)$, due to the queue storing nodes at each level.
