# Minimum Diameter of a Tree After Merge

## Problem Description

There exist two **undirected** trees with `n` and `m` nodes, numbered from `0` to `n - 1` and from `0` to `m - 1`, respectively. You are given two 2D integer arrays `edges1` and `edges2` of lengths `n - 1` and `m - 1`, respectively, where `edges1[i] = [a`<sub>`i`</sub>`, b`<sub>`i`</sub>`]` indicates that there is an edge between nodes `a`<sub>`i`</sub> and `b`<sub>`i`</sub> in the first tree and `edges2[i] = [u`<sub>`i`</sub>`, v`<sub>`i`</sub>`]` indicates that there is an edge between nodes `u`<sub>`i`</sub> and `v`<sub>`i`</sub> in the second tree.

You must connect one node from the first tree with another node from the second tree with an edge.

Return the **minimum** possible **diameter** of the resulting tree.

The **diameter** of a tree is the length of the *longest* path between any two nodes in the tree.

## Solution Approach

The problem involves calculating the diameters of both trees and determining the minimum possible diameter after merging them with an additional edge. The `diameter` function computes the diameter of a single tree using a topological sort approach with BFS.

## Code Explanation

### `diameter` Function

- Calculates the diameter of a tree using the "peeling leaves" technique.  
- Removes nodes with degree 1 (leaves) iteratively until either 1 or 2 nodes are left.  
- The number of levels processed determines the diameter.

### `minimumDiameterAfterMerge` Function

- Computes the diameters of both trees (`d1` and `d2`).  
- Calculates the potential diameter after merging using the formula:  `max(d1, d2, (d1 + 1) / 2 + (d2 + 1) / 2 + 1)`

This accounts for the worst-case scenario where the longest path spans both trees.

## Complexity

- **Time Complexity:** $O(n + m)$, for traversing the edges of both trees.  
- **Space Complexity:** $O(n + m)$, for adjacency lists and degree arrays.
