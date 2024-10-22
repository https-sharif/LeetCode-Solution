# Kth Largest Sum in a Binary Tree

## Problem Description

You are given the `root` of a binary tree and a positive integer `k`.

The **level sum** in the tree is the sum of the values of the nodes that are on the **same** level.

Return *the* `k`<sup>`th`</sup> *largest level sum in the tree (not necessarily distinct)*. If there are fewer than `k` levels in the tree, return `-1`.

**Note** that two nodes are on the same level if they have the same distance from the root.

## Solution Approach

The solution involves performing a level-order traversal (BFS) of the binary tree. For each level, we calculate the sum of the node values. These sums are stored in a vector, and after completing the traversal, we sort the vector in descending order to get the `k`<sup>th</sup> largest sum.

## Code Explanation

### `kthLargestLevelSum` Function

- The function uses a queue to perform a breadth-first search (BFS) traversal of the binary tree.
- For each level, the sum of the node values is calculated.
- The sums of all levels are stored in a list.
- The list is sorted, and the `k`th largest sum is returned. If `k` is larger than the number of levels, `-1` is returned.

## Complexity

- **Time Complexity:** $O(n + m\log m)$, where `n` is the number of nodes and `m` is the number of levels.
- **Space Complexity:** $O(n)$, for storing the level sums and the queue.
