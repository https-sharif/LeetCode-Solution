# Minimized Maximum of Products Distributed to Any Store

## Problem Description

You are given an integer `n` indicating there are `n` specialty retail stores. There are `m` product types of varying amounts, which are given as a **0-indexed** integer array `quantities`, where `quantities[i]` represents the number of products of the `i`<sup>`th`</sup> product type.

You need to distribute **all products** to the retail stores following these rules:

- A store can only be given **at most one product type** but can be given **any** amount of it.
- After distribution, each store will have been given some number of products (possibly `0`). Let `x` represent the maximum number of products given to any store. You want `x` to be as small as possible, i.e., you want to **minimize** the **maximum** number of products that are given to any store.

Return *the minimum possible* `x`.

## Solution Approach

The solution uses binary search to minimize the maximum number of products any store receives. A helper lambda `check` verifies if a given number of products per store can accommodate all products across the available stores. By adjusting the binary search bounds based on `check` results, we pinpoint the smallest feasible maximum.

## Code Explanation

### `check` Lambda Function

- Iterates over each product quantity `x` in `quantities`.
- For each `x`, calculates the required number of stores as `stores += x / mid`.
- If there’s a remainder (`x % mid != 0`), an additional store is required for the leftover items.
- If `stores` exceeds `n` at any point, returns `false` because the current `mid` value is too small to fit within the store limit.
- Returns `true` if all products can be distributed without exceeding `n` stores.

### `minimizedMaximum` Function (Binary Search)

- Initializes `l` to `1` and `r` to `100000` as bounds for binary search, and sets `ans = -1`.
- Runs binary search:
  - Calculates `mid` as the midpoint of `l` and `r`.
  - Calls `check(mid)`:
    - If `true`, sets `ans = mid` (a potential solution) and narrows the search range by setting `r = mid - 1` to find a smaller possible `mid`.
    - If `false`, increases the lower bound with `l = mid + 1` to try larger values.
- Returns `ans`, which holds the smallest possible maximum

## Complexity

- **Time Complexity**: $O(m \log{q})$, where `m` is the length of `quantities` and `q` is the maximum value in `quantities`.
- **Space Complexity**: $O(1)$, as only a constant amount of extra space is used.
