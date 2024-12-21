# Maximum K-Divisible Components

## Problem Description

There is an undirected tree with `n` nodes labeled from `0` to `n - 1`. You are given the integer `n` and a 2D integer array `edges` of length `n - 1`, where `edges[i] = [a`<sub>`i`</sub>`, b`<sub>`i`</sub>`]` indicates that there is an edge between nodes `a`<sub>`i`</sub> and `b`<sub>`i`</sub> in the tree.  

You are also given a **0-indexed** integer array `values` of length `n`, where `values[i]` is the **value** associated with the `i`<sup>`th`</sup> node, and an integer `k`.  

A **valid split** of the tree is obtained by removing any set of edges, possibly empty, such that the resulting components all have values divisible by `k`, where the **value of a connected component** is the sum of the values of its nodes.  

Return *the **maximum number of components** in any valid split*.

## Solution Approach

The solution uses Depth First Search (DFS) to traverse the tree while calculating the sum of node values in each connected component. The approach ensures that when a component's sum is divisible by `k`, it is treated as a valid split.  

### Key Steps:
1. Build an adjacency list to represent the tree structure.
2. Use a DFS to explore all nodes while tracking visited nodes using a `bitset`.
3. For each connected component, calculate the sum of values recursively. If the sum is divisible by `k`, count it as a valid component and reset the sum for the parent node.

## Code Explanation

### `dfs` Function

- **Purpose**: Traverse the tree and calculate the sum of values for each connected component.
- **Parameters**:
  - `adj`: Adjacency list representing the tree.
  - `idx`: Current node being processed.
  - `k`: The divisor for determining valid components.
  - `visited`: A `bitset` to track visited nodes.
  - `values`: Array of values associated with each node.
  - `ans`: Counter for valid components.
- **Logic**:
  - Mark the current node as visited.
  - Sum up values of child nodes recursively.
  - If the cumulative sum modulo `k` equals `0`, increment the component count and return `0` for further calculations.

### `maxKDivisibleComponents` Function

- **Purpose**: Initialize the DFS and return the maximum number of valid components.
- **Steps**:
  - Build the adjacency list from the given edges.
  - Initialize the `visited` bitset and `ans` counter.
  - Perform a DFS starting from the root node (`0`).
  - Return the final count of valid components.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of nodes.
- **Space Complexity:** $O(n)$, for the adjacency list, recursive call stack, and visited `bitset`.
