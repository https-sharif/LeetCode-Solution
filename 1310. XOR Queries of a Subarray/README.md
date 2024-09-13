# XOR Queries of a Subarray

## Problem Description


You are given an array `arr` of positive integers. You are also given the array `queries` where `queries[i] = [left`<sub>`i`</sub>`, right`<sub>`i`</sub>`]`.

For each query `i` compute the **XOR** of elements from `left`<sub>`i`</sub> to `right`<sub>`i`</sub> (that is, `arr[left`<sub>`i`</sub>`] XOR arr[left`<sub>`i`</sub>` + 1] XOR ... XOR arr[right`<sub>`i`</sub>`]` ).

Return an array `answer` where `answer[i]` is the answer to the `i`<sup>`th`</sup> query.


## Solution Approach

The solution optimizes XOR queries by using prefix XORs. By transforming the `arr` such that each element stores the XOR of all preceding elements, the XOR of any subarray can be derived in constant time.

## Code Explanation

### `xorQueries` Function

1. **Prefix XOR Construction**:
   - The array `arr` is transformed into a prefix XOR array where each element stores the XOR of all elements before it.
   - `arr[i] ^= arr[i-1]`: This modifies `arr[i]` to be the XOR of all previous elements.

2. **Answer Queries**:
   - For each query `[x, y]`, if `x == 0`, the result is `arr[y]` because the XOR from the beginning is already stored.
   - Otherwise, the result is `arr[y] ^ arr[x-1]`, which gives the XOR from index `x` to `y`.

## Complexity

- **Time Complexity:** $O(n + m)$, where `n` is the size of the array and `m` is the number of queries.
  
- **Space Complexity:** $O(1)$ as the solution modifies the array in place without using extra space.
