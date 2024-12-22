# Leftmost Building Queries

## Problem Description

You are given a **0-indexed** array `heights` of positive integers, where `heights[i]` represents the height of the `i`<sup>`th`</sup> building.  

If a person is in building `i`, they can move to any other building `j` if and only if `i < j` and `heights[i] < heights[j]`.  

You are also given another array `queries` where `queries[i] = [a`<sub>`i`</sub>`, b`<sub>`i`</sub>`]`. On the `i`<sup>`th`</sup> query, Alice is in building `a`<sub>`i`</sub>, and Bob is in building `b`<sub>`i`</sub>.  

Return *an array* `ans` *where* `ans[i]` *is **the index of the leftmost building** where Alice and Bob can meet on the* `i`<sup>`th`</sup> *query. If Alice and Bob cannot move to a common building, set* `ans[i]` *to* `-1`.

## Solution Approach

The solution uses a combination of deferred queries and a priority queue to determine the leftmost building where Alice and Bob can meet.  

### Key Steps:
1. **Deferred Queries**:
   - If Alice and Bob's starting buildings have a direct relationship (e.g., Alice can already move to Bob's building), process those queries directly.
   - Otherwise, defer the query until the `b-th` building for processing.
2. **Priority Queue**:
   - Use a priority queue to efficiently process deferred queries based on the height of the buildings.

## Code Explanation

### `leftmostBuildingQueries` Function

- **Initialization**:
  - `n`: Number of buildings.
  - `q`: Number of queries.
  - `result`: Initialize the result array with `-1`.
  - `deferred`: Stores queries that cannot be resolved immediately, indexed by the building `b`.

- **Processing Queries**:
  - For each query `[a, b]`:
    - Ensure `a <= b` by swapping if needed.
    - If Alice can directly reach Bob’s building, set `result[i] = b`.
    - Otherwise, defer the query to be processed at building `b`.

- **Deferred Query Resolution**:
  - Traverse each building `i`:
    - Push deferred queries for building `i` into the priority queue.
    - While the height of the building satisfies the conditions of the top query in the queue, resolve the query and set the result.

## Complexity

- **Time Complexity:** $O(n + q \log q)$, iterating over buildings and queries takes $O(n)$ and $O(q)$ respectively.
- **Space Complexity:** $O(n + q)$, or the deferred queries and the priority queue.
