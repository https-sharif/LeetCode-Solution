# Cousins in Binary Tree II

## Problem Description

Given the `root` of a binary tree, replace the value of each node in the tree with the **sum of all its cousins' values**.

Two nodes of a binary tree are **cousins** if they have the same depth with different parents.

Return *the* `root` *of the modified tree*.

**Note** that the depth of a node is the number of edges in the path from the root node to it.

## Solution Approach

The solution uses breadth-first search (BFS) to calculate the sum of the values of cousins at each depth level and then updates the nodes accordingly using a helper function.

## Code Explanation

### `replaceValueInTree` Function

- Initializes a queue to perform BFS and a vector to store the sum of values at each depth.
- Iterates through each level of the tree, calculating the sum of cousin values.
- Updates the node values with the calculated sums.
  
### `update` Function

- Recursively traverses the tree to set each node's value to the sum of its cousins' values.
- Uses the depth level to retrieve the pre-calculated cousin sums.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of nodes in the tree, as we traverse each node twice.
- **Space Complexity:** $O(h)$, where `h` is the height of the tree, due to the recursion stack in the `update` function and the queue used in BFS.
