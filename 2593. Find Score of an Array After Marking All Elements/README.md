# Find Score from Array

## Problem Description

You are given an array `nums` consisting of positive integers.

Starting with `score = 0`, apply the following algorithm:

- Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index.
- Add the value of the chosen integer to `score`.
- Mark **the chosen element and its two adjacent elements if they exist**.
- Repeat until all the array elements are marked.
  
Return *the score you get after applying the above algorithm*.

## Solution Approach
The solution uses a min-heap (priority queue) to efficiently process elements in ascending order. For each element, if it is not already marked, it is added to the score, and it and its adjacent elements are marked as used.

## Code Explanation

### Data Structures
- **`priority_queue`**: Stores pairs of elements and their indices in ascending order based on the element value.
- **`vector<int> mp`**: Tracks whether an element and its neighbors have been used.

### Core Functions
1. **Initialization**: Push all elements along with their indices into the priority queue.
2. **Helper Lambda (`inside`)**: Checks if an index is within bounds.
3. **While Loop**: Repeatedly extracts the smallest element from the queue:
   - If the element is already marked, skip it.
   - Otherwise, add it to the score and mark its index and adjacent indices as used.

## Complexity

- **Time Complexity:** $O(n \log n)$, pushing and extracting `n` elements from the priority queue both take $O(n \log n)$ in total.
- **Space Complexity:** $O(n)$, the priority queue and the marker vector each require $O(n)$ space.
