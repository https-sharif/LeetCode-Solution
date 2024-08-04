# Range Sum of Sorted Subarray Sums

## Problem
You are given the array `nums` consisting of `n` positive integers. You computed the sum of all non-empty continuous subarrays from the array and then sorted them in non-decreasing order, creating a new array of `n * (n + 1) / 2` numbers.

*Return the sum of the numbers from index* `left` *to index* `right` **(indexed from 1)**, *inclusive, in the new array.* Since the answer can be a huge number return it modulo 10<sup>9</sup> + 7.

## Approach

1. **Calculate Subarray Sums**:
   - Traverse the array `nums` with a nested loop to calculate the sum of all possible subarrays.
   - Push the negative of each subarray sum into a max-heap priority queue to simulate a min-heap.

2. **Extract and Sum the Desired Range**:
   - Use the priority queue to access subarray sums in increasing order.
   - Sum the subarray sums from indices `[left, right]` in the sorted order.

3. **Return the Result**:
   - Return the sum modulo \(10^9 + 7\) to handle large numbers.
  
## Complexity

- **Time Complexity**: $O(n^2logn)$ due to the nested loop for generating subarray sums and the priority queue operations.
- **Space Complexity**: $O(n^2)$ in the worst case, since every subarray sum is stored in the priority queue.
