# Find Champion II

## Problem Description

There are `n` teams numbered from `0` to `n - 1` in a tournament; each team is also a node in a **DAG**.

You are given the integer `n` and a **0-indexed** 2D integer array `edges` of length `m` representing the **DAG**, where `edges[i] = [u`<sub>`i`</sub>`, v`<sub>`i`</sub>`]` indicates that there is a directed edge from team u`<sub>`i`</sub>` to team u`<sub>`i`</sub>` in the graph.

A directed edge from `a` to `b` in the graph means that team `a` is **stronger** than team `b` and team `b` is **weaker** than team `a`.

Team `a` will be the **champion** of the tournament if there is no team `b` that is stronger than team `a`.

Return *the team that will be the **champion** of the tournament if there is a **unique** champion, otherwise, return* `-1`.

**Notes**

- A **cycle** is a series of nodes `a`<sub>`1`</sub>`, a`<sub>`2`</sub>`, ..., a`<sub>`n`</sub>`, a`<sub>`n + 1`</sub> such that node `a`<sub>`1`</sub> is the same node as node `a`<sub>`n+1`</sub>, the nodes `a`<sub>`1`</sub>`, a`<sub>`2`</sub>`, ..., a`<sub>`n`</sub> are distinct, and there is a directed edge from the node `a`<sub>`i`</sub> to node `a`<sub>`i+1`</sub> for every `i` in the range `[1, n]`.
- A **DAG** is a directed graph that does not have any **cycle**.


## Solution Approach

The solution uses a map to track the outgoing and incoming connections for each node. A set is used to store connected nodes, and a special marker (`-1`) is used to denote incoming connections. The champion node is determined by checking if there's exactly one node with no incoming connections.

## Code Explanation

### `findChampion` Function

1. **Initialization**:
   - A map `mp` is used where the key is the node and the value is a set of connected nodes or a marker for incoming connections.

2. **Edge Processing**:
   - For each edge `[a, b]`, add `b` to the outgoing set of `a`.
   - Mark an incoming connection for `b` by adding `-1` to its set.

3. **Finding the Champion**:
   - Iterate through the map. If a node has no `-1` in its set, it’s a candidate for the champion node.
   - Ensure only one node satisfies this condition. If multiple nodes or no nodes satisfy, return `-1`.

4. **Validation**:
   - Ensure all nodes are processed. If the count doesn't match `n`, return `-1`.

5. **Result**:
   - Return the champion node if all conditions are satisfied; otherwise, return `-1`.

## Complexity

- **Time Complexity:** $O(E + N)$, where `E` is the number of edges and `N` is the number of nodes.  

- **Space Complexity:** $O(N)$, for the map and the sets used to track connections.
