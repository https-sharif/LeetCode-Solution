# Filling Bookcase Shelves

## Problem Description

You are given an array `books` where `books[i] = [thickness`<sub>i</sub>`, height`<sub>i</sub>`]` indicates the thickness and height of the `i`<sup>`th`</sup> book. You are also given an integer `shelfWidth`.

We want to place these books in order onto bookcase shelves that have a total width `shelfWidth`.

We choose some of the books to place on this shelf such that the sum of their thickness is less than or equal to `shelfWidth`, then build another level of the shelf of the bookcase so that the total height of the bookcase has increased by the maximum height of the books we just put down. We repeat this process until there are no more books to place.

Note that at each step of the above process, the order of the books we place is the same order as the given sequence of books.

Return *the minimum possible height that the total bookshelf can be after placing shelves in this manner*.

### Solution Approach

1. **Dynamic Programming (DP) Setup**:
   - Define `dp[i]` as the minimum height of the bookshelf required to place the first `i` books.
   - Initialize `dp[0]` to 0 (base case).

2. **DP Calculation**:
   - Iterate through each book and calculate the minimum height needed for each shelf configuration.
   - For each book `i`, consider adding it to the current shelf and update `dp[i+1]` as follows:
     - Maintain a running sum of book thicknesses and track the maximum height of the books on the current shelf.
     - If the total thickness exceeds the `shelfWidth`, break the loop.
     - Otherwise, update `dp[i+1]` with the minimum height by comparing it to the height achieved by placing the books up to the previous shelf.

3. **Return Result**:
   - Return `dp[n]`, which represents the minimum height required to place all books.

### Complexity

- **Time Complexity**: $O(n^2)$, where `n` is the number of books. Each book is processed in relation to all previous books.
- **Space Complexity**: $O(n)$ for the `dp` array.
