# Path with Maximum Probability

## Problem Description

You are given an undirected weighted graph of `n` nodes (0-indexed), represented by an edge list where `edges[i] = [a, b]` is an undirected edge connecting the nodes `a` and `b` with a probability of success of traversing that edge `succProb[i]`.

Given two nodes `start` and `end`, find the path with the maximum probability of success to go from `start` to `end` and return its success probability.

If there is no path from `start` to `end`, **return 0**. Your answer will be accepted if it differs from the correct answer by at most **1e-5**.

## Solution Approach

The solution uses a modified version of Dijkstra's algorithm to find the maximum probability path from the `start_node` to the `end_node` in a graph. 

1. **Graph Representation**: 
   - The graph is represented using an adjacency list where each node points to its neighboring nodes along with the corresponding success probabilities.
   
2. **Priority Queue**:
   - A max-heap (priority queue) is used to always expand the most probable path first.

3. **Traversal**:
   - The algorithm traverses the graph starting from the `start_node`. It updates the maximum probability of reaching each node and pushes the updated probabilities to the priority queue.
   
4. **Early Stopping**:
   - The algorithm stops once the `end_node` is processed and returns the maximum probability to reach it.

## Complexity

- **Time Complexity**: $(O(E\  \log V)$, where $(E)$ is the number of edges and $(V)$ is the number of vertices.
- **Space Complexity**: $O(V + E)$, where $(V)$ is for storing the adjacency list and $(E)$ for the priority queue.
