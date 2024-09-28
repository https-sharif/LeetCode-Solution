# Design Circular Deque

## Problem Description

Design your implementation of the circular double-ended queue (deque).

Implement the `MyCircularDeque` class:

- `MyCircularDeque(int k)` Initializes the deque with a maximum size of `k`.
- `boolean insertFront()` Adds an item at the front of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean insertLast()` Adds an item at the rear of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean deleteFront()` Deletes an item from the front of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `boolean deleteLast()` Deletes an item from the rear of Deque. Returns `true` if the operation is successful, or `false` otherwise.
- `int getFront()` Returns the front item from the Deque. Returns `-1` if the deque is empty.
- `int getRear()` Returns the last item from Deque. Returns `-1` if the deque is empty.
- `boolean isEmpty()` Returns `true` if the deque is empty, or `false` otherwise.
- `boolean isFull()` Returns `true` if the deque is full, or `false` otherwise.


## Solution Approach

The solution uses a doubly linked list to implement the deque. It maintains `head` and `tail` pointers to the front and rear of the deque, along with a `size` counter to track the current number of elements.

## Code Explanation

### `insertFront` Function
- Checks if the deque is full. If not, inserts a new node at the front by updating the `head` pointer.

### `insertLast` Function
- Checks if the deque is full. If not, inserts a new node at the rear by updating the `tail` pointer.

### `deleteFront` Function
- Checks if the deque is empty. If not, removes the front node and updates the `head` pointer.

### `deleteLast` Function
- Checks if the deque is empty. If not, removes the rear node and updates the `tail` pointer.

### `getFront` and `getRear` Functions
- Return the value at the front or rear, respectively. If the deque is empty, return `-1`.

### `isEmpty` and `isFull` Functions
- `isEmpty`: Returns `true` if the size is zero.
- `isFull`: Returns `true` if the size equals the maximum allowed size.

## Complexity

- **Time Complexity:** $O(1)$ for all operations, as insertion, deletion, and retrieval are constant-time operations in a doubly linked list.
- **Space Complexity:** $O(k)$, where `k` is the maximum size of the deque.
