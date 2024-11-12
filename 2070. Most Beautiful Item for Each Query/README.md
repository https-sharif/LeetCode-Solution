# Most Beautiful Item for Each Query

## Problem Description

You are given a 2D integer array `items` where `items[i] = [price`<sub>`i`</sub>`, beauty`<sub>`i`</sub>`]` denotes the **price** and **beauty** of an item respectively.

You are also given a **0-indexed** integer array `queries`. For each `queries[j]`, you want to determine the **maximum beauty** of an item whose **price** is **less than or equal** to `queries[j]`. If no such item exists, then the answer to this query is `0`.

Return *an array* `answer` *of the same length as* `queries` *where* `answer[j]` *is the answer to the* `j`<sup>`th`</sup> *query*.

## Solution Approach

The solution sorts the `items` list by price. We then use a prefix maximum array, `beauty`, to track the maximum beauty value up to each item in the sorted list. For each query, we use binary search to find the upper bound position where the query price can fit, then return the maximum beauty up to that position.

## Code Explanation

### `maximumBeauty` Function

1. **Sort `items`**: Sorts `items` by price in ascending order.
2. **Initialize `beauty`**: Fills `beauty` array where each element is the maximum beauty seen up to that item's index.
3. **Binary Search for Each Query**:
   - For each query price, finds the upper bound in `items`.
   - If the index is valid, retrieves the maximum beauty for that range, otherwise returns `0`.

## Complexity

- **Time Complexity**: $O((n + q) \log n)$, where `n` is the number of items, and `q` is the number of queries.
- **Space Complexity**: $O(n + q)$, for storing the `beauty` and `ans` arrays.
