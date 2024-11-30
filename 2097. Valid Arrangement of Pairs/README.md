# Valid Arrangement of Pairs

## Problem Description

You are given a **0-indexed** 2D integer array `pairs` where `pairs[i] = [start`<sub>`i`</sub>`, end`<sub>`i`</sub>`]`. An arrangement of `pairs` is **valid** if for every index `i` where `1 <= i < pairs.length`, we have `end`<sub>`i-1`</sub>` == start`<sub>`i`</sub>.

Return ***any** valid arrangement of* `pairs`.

**Note:** The inputs will be generated such that there exists a valid arrangement of `pairs`.

## Solution Approach

The problem is solved using Eulerian path principles. We build a directed graph from the pairs and use a depth-first traversal to construct the valid arrangement.

## Code Explanation

### `euler` Function

- **Purpose**: Performs a depth-first traversal to generate the Eulerian path in reverse order.
- **Key Steps**:
  - While there are edges originating from the current node, pick an edge and recursively visit the next node.
  - Add the current edge to the result after processing its destination node.

### `validArrangement` Function

- **Purpose**: Constructs the directed graph and determines the starting point for the Eulerian path.
- **Key Steps**:
  1. Populate the adjacency list (`adj`) and count in-degrees and out-degrees for each node.
  2. Identify the starting node:
     - A node with `out-degree > in-degree` is chosen as the start.
     - If no such node exists, start from any node in the pairs.
  3. Call the `euler` function to compute the path.
  4. Reverse the result to get the correct order.

## Complexity

- **Time Complexity:** $O(E)$, where `E` is the number of edges (or pairs).
- **Space Complexity:** $O(V + E)$, where `V` is the number of unique nodes.
