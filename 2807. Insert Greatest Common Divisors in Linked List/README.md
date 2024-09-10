# Insert Greatest Common Divisors in Linked List

## Problem Description

Given the `head` of a linked list head, in which each node contains an integer value.

Between every pair of adjacent nodes, insert a new node with a value equal to the **greatest common divisor** of them.

Return *the linked list after insertion*.

The **greatest common divisor** of two numbers is the largest positive integer that evenly divides both numbers.

## Solution Approach

We traverse the linked list, and for each pair of adjacent nodes, we calculate the greatest common divisor (GCD) using a helper function. A new node with this GCD value is inserted between them.

## Code Explanation

### `gcd` Function

- Recursively calculates the greatest common divisor of two numbers using the Euclidean algorithm.

### `insertGreatestCommonDivisors` Function

- Iterates through the linked list, calculates the GCD between adjacent nodes, and inserts a new node with this GCD value.
- Updates the `next` pointers to include the new nodes in the list.

## Complexity

- **Time Complexity:** $O(n)$, where $n$ is the number of nodes in the linked list. Each node is visited once, and the GCD calculation is constant time.
- **Space Complexity:** $O(1)$, aside from the extra space for new nodes, as no additional data structures are used.
