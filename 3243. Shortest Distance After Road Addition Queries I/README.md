# Shortest Distance After Queries

## Problem Description

You are given an integer `n` and a 2D integer array `queries`.

There are `n` cities numbered from `0` to `n - 1`. Initially, there is a **unidirectional** road from city `i` to city `i + 1` for all `0 <= i < n - 1`.

`queries[i] = [u`<sub>`i`</sub>`, v`<sub>`i`</sub>`]` represents the addition of a new **unidirectional** road from city `u`<sub>`i`</sub> to city `v`<sub>`i`</sub>. After each query, you need to find the **length** of the **shortest path** from city `0` to city `n - 1`.

Return an array `answer` where for each `i` in the range `[0, queries.length - 1]`, `answer[i]` is the *length of the shortest path* from city `0` to city `n - 1` after processing the **first** `i + 1` queries.



Return the shortest distances as a list.

## Solution Approach

The problem is solved using a combination of BFS (Breadth-First Search) and incremental graph updates. The approach ensures that distances from the source node (`0`) to the target node (`n-1`) are updated dynamically as edges are added.

## Code Explanation

### `shortestDistanceAfterQueries` Function

1. **Initialization**:
   - `matrix` represents the adjacency list of the graph.
   - `distance` keeps track of the shortest distance from node `0` to each other node.

2. **Graph Setup**:
   - A linear graph (0 → 1 → 2 → ... → n-1) is initialized with default distances.

3. **Processing Queries**:
   - For each query, add an edge from `src` to `des`.
   - If the new edge reduces the shortest distance to `des`, update it and propagate the update to connected nodes using BFS.

4. **Updating Distance**:
   - A queue is used for BFS to propagate distance updates efficiently.
   - Push the updated distance for node `n-1` to the result list after each query.

5. **Return Result**:
   - The final result contains the shortest distances after each query.

## Complexity
- **Time Complexity**: $O(n + q \cdot m)$, where `q` is the number of queries, and `m` is the average number of edges.  
- **Space Complexity**: $O(n + m)$ for graph and BFS queue.
