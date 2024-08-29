# Most Stones Removed with Same Row or Column

## Problem Description

On a 2D plane, we place `n` stones at some integer coordinate points. Each coordinate point may have at most one stone.

A stone can be removed if it shares either **the same row or the same column** as another stone that has not been removed.

Given an array `stones` of length `n` where `stones[i] = [x`<sub>`i`</sub>`, y`<sub>`i`</sub>`]` represents the location of the `i`<sup>`th`</sup> stone, return the largest possible number of stones that can be removed.

## Solution Approach

The problem can be solved using Depth-First Search (DFS). Stones are treated as nodes in a graph, with edges connecting stones that share the same row or column. The solution involves counting connected components and calculating the number of removable stones.

1. **DFS Traversal:** Explore all connected stones starting from each unvisited stone.
2. **Removing Stones:** For each connected component, the number of removable stones is the size of the component minus one (one stone must remain).

## Code Explanation

### `dfs` Function

```cpp
int dfs(vector<vector<int>>& stones, vector<bool>& visited, int idx){
    visited[idx] = true;
    int result = 0;
    for(int i = 0; i < stones.size(); i++){
        if(!visited[i] && (stones[i][0] == stones[idx][0] || stones[i][1] == stones[idx][1])){
            result += dfs(stones, visited, i) + 1;
        }
    }
    return result;
}
```

- **Marks** the current stone as visited.
- **Counts** connected stones recursively by checking shared rows or columns.

### `removeStones` Function

```cpp
int removeStones(vector<vector<int>>& stones) {
    int n = stones.size();
    vector<bool> visited(n, false);
    int result = 0;
    for(int i = 0; i < n; i++){
        if(visited[i]) continue;
        result += dfs(stones, visited, i);
    }
    return result;
}
```

- **Initializes** the `visited` vector.
- **Performs** DFS from each unvisited stone and sums the removable stones.

## Complexity

- **Time Complexity:** $O(n^2)$, due to nested loops in DFS.
- **Space Complexity:** $O(n)$, for the `visited` vector and DFS call stack.
