# Find the City With the Smallest Number of Neighbors at a Threshold Distance

## Problem Description

There are `n` cities numbered from `0` to `n-1`. Given an array `edges` where `edges[i] = [from`<sub>`i`</sub>`, to`<sub>`i`</sub>`, weight`<sub>`i`</sub>`]` represents a bidirectional and weighted edge between cities `from`<sub>`i`</sub> and `to`<sub>`i`</sub>, and an integer `distanceThreshold`.

Return the city with the smallest number of cities that are reachable through some path and whose distance is **at most** `distanceThreshold`, If there are multiple such cities, return the city with the greatest number.

Notice that the distance of a path connecting cities ***i*** and ***j*** is equal to the sum of the edges' weights along that path.

### Solution Approach

1. **Graph Representation**:
   - Build an adjacency list `adj` to represent the graph, where each node points to its neighbors and the weight of the edge connecting them.

2. **Distance Calculation**:
   - For each city, use a modified Dijkstra's algorithm to find all reachable cities within the `distanceThreshold`. Use a priority queue to efficiently get the shortest paths.

3. **Select Optimal City**:
   - Track the city with the smallest number of reachable cities. In case of a tie, choose the city with the greatest number.

4. **Return Result**:
   - Return the city with the smallest number of reachable cities, breaking ties by choosing the greatest-numbered city.

### Complexity

- **Time Complexity**: $O(n^2 log n + E log n)$, where `n` is the number of cities and `E` is the number of edges. Each city is processed with a priority queue, and edge relaxations are logarithmic in nature.
- **Space Complexity**: $O(n + E)$ for storing the adjacency list and priority queue.
