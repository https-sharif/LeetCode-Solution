# Height of Binary Tree After Subtree Removal Queries

## Problem Description

You are given the `root` of a **binary tree** with `n` nodes. Each node is assigned a unique value from `1` to `n`. You are also given an array `queries` of size `m`.

You have to perform `m` **independent** queries on the tree where in the `i`<sup>`th`</sup> query you do the following:

- **Remove** the subtree rooted at the node with the value `queries[i]` from the tree. It is **guaranteed** that `queries[i]` will **not** be equal to the value of the root.

Return *an array* `answer` *of size* `m` *where* `answer[i]` *is the height of the tree after performing the* `i`<sup>`th`</sup> *query*.

**Note:**

- The queries are independent, so the tree returns to its initial state after each query.
- The height of a tree is the **number of edges in the longest simple path** from the root to some node in the tree.

## Solution Approach

The approach involves determining the height of all nodes and tracking the two largest depths at each level of the tree. This allows efficiently finding the maximum depth for each query, excluding the subtree rooted at the queried node.

## Code Explanation

### `findHeight` Function

- **Parameters:** Takes a `TreeNode* node` (current node) and an integer `level`.
- **Purpose:** Recursively calculates the depth of each node and updates the two largest depths (`max1` and `max2`) at each level.
- **Logic:** 
  - Base case: If the node is `null`, return a depth of `0`.
  - Update the `levelArr` to store the level of the current node.
  - Compute the depth of the current node as `1 + max(left depth, right depth)`.
  - Update the maximum depths (`max1` and `max2`) at the current level based on the calculated depth.

### `treeQueries` Function

- **Purpose:** Processes the queries to find the maximum depth after removing each queried node's subtree.
- **Logic:** 
  - For each query node, determine the node's level and compare its depth with the two maximum depths at that level.
  - Replace the query node's value with the appropriate maximum depth plus the node's level minus `1`.

## Complexity

- **Time Complexity:** $O(N + Q)$, where `N` is the number of nodes in the tree and `Q` is the number of queries.
- **Space Complexity:** $O(N)$, due to the storage of arrays for depth, levels, and maximum depths per level.
