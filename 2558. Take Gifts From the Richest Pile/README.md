# Take Gifts From the Richest Pile

## Problem Description

You are given an integer array `gifts` denoting the number of gifts in various piles. Every second, you do the following:

- Choose the pile with the maximum number of gifts.
- If there is more than one pile with the maximum number of gifts, choose any.
- Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
  
Return *the number of gifts remaining after* `k` *seconds*.

## Solution Approach

The solution uses a max-heap (priority queue) to efficiently get the gift with the maximum value at each step. After performing the operation on the maximum value gift, the new value (square root of the original gift) is pushed back into the heap. This process continues until `k` operations are performed, and then the sum of the remaining gifts is returned.

## Code Explanation

### `pickGifts` Function

1. **Initialize Max-Heap:**  
   We use a priority queue (max-heap) to keep track of the gifts in descending order, allowing us to quickly access and modify the gift with the highest value.

2. **Perform Operations on the Gifts:**  
   For each of the `k` operations, we extract the largest value from the heap, replace it with its square root, and push the new value back into the heap.

3. **Sum the Remaining Gifts:**  
   After performing the operations, we sum all the remaining values in the heap to get the final result.

4. **Return the Result:**  
   The total sum of the remaining gifts after the operations is returned as the result.

## Complexity

- **Time Complexity:** $O(k \log n + n \log n)$, where `n` is the size of the `gifts` array and `k` is the number of operations.
- **Space Complexity:** $O(n)$, where `n` is the size of the `gifts` array, due to the space used by the priority queue.
