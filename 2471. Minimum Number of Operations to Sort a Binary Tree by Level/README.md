# Minimum Operations to Sort Binary Tree Levels

## Problem Description

You are given the `root` of a binary tree with **unique values**.

In one operation, you can choose any two nodes at the **same level** and swap their values.

Returna *the minimum number of operations needed to make the values at each level sorted in a **strictly increasing order***.

The **level** of a node is the number of edges along the path between it and the root node.

## Solution Approach

The solution involves performing a **level-order traversal** to collect node values at each level, followed by calculating the minimum swaps required to sort the values of each level.

### Key Steps:
1. **Level-Order Traversal**:
   - Use a recursive function `bfs` to traverse the tree and collect node values for each level.
2. **Sorting via Minimum Swaps**:
   - For each level, determine the minimum number of swaps required to sort the values in increasing order. This involves:
     - Mapping the values to their sorted indices.
     - Using a cycle detection approach to compute the minimum swaps.

## Code Explanation

### `bfs` Function
- Collects the values of nodes at each level.
- If the current level does not exist in the `values` vector, create a new level.
- Recursively traverse left and right subtrees, incrementing the level.

### `minimumOperations` Function
1. Perform a level-order traversal to populate the `values` vector.
2. For each level:
   - Create an index array and sort it based on the node values.
   - Count the number of swaps required to sort the level using cycle detection.

## Complexity

- **Time Complexity:** $O(n \log n)$, as sorting node values at each level dominates the overall complexity.  
- **Space Complexity:** $O(n)$, for storing node values and indices during sorting.
