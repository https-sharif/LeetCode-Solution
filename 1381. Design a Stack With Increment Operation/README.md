# Design a Stack With Increment Operation

## Problem Description

Design a stack that supports increment operations on its elements.

Implement the `CustomStack` class:

- `CustomStack(int maxSize)` Initializes the object with `maxSize` which is the maximum number of elements in the stack.
- `void push(int x)` Adds `x` to the top of the stack if the stack has not reached the `maxSize`.
- `int pop()` Pops and returns the top of the stack or `-1` if the stack is empty.
- `void inc(int k, int val)` Increments the bottom `k` elements of the stack by `val`. If there are less than `k` elements in the stack, increment all the elements in the stack.


## Solution Approach

The stack is implemented using a doubly linked list to support dynamic operations and increment elements efficiently. The stack supports `push`, `pop`, and an `increment` operation to adjust the bottom `k` elements.

## Code Explanation

### `push` Function

- Adds a new node with value `x` to the end of the linked list.
- If the stack is full, it ignores the push.

### `pop` Function

- Removes the last node and returns its value.
- If the stack is empty, returns `-1`.

### `increment` Function

- Traverses the linked list starting from the head and increments the first `k` elements by `val`.

## Complexity
- **Time Complexity:** $O(k)$, where `k` is the number of elements to be incremented in the increment function.
- **Space Complexity:** $O(n)$, where `n` is the number of elements in the stack.
