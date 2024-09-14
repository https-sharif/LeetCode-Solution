# LRU Cache

## Problem Description

Design a data structure that follows the constraints of a [Least Recently Used (LRU) cache](https://en.wikipedia.org/wiki/Cache_replacement_policies#LRU). 

Implement the `LRUCache` class:

- `LRUCache(int capacity)` - Initializes the LRU cache with a **positive** size `capacity`.
- `int get(int key)` - Returns the value of the `key` if the key exists, otherwise returns `-1`.
- `void put(int key, int value)` - Updates the value of the `key` if the key exists. Otherwise, adds the `key-value` pair to the cache. If the number of keys exceeds the `capacity`, **evict** the least recently used key.

The functions `get` and `put` must each run in `O(1)` average time complexity.

## Solution Approach

The LRU cache is implemented using a combination of a doubly linked list and a hash map. The doubly linked list maintains the order of access, with the least recently used node at the head and the most recently used node at the tail. The hash map provides constant-time access to any node in the linked list based on the key.

## Code Explanation

### `get` Function

- Checks if the key exists in the hash map.
- If the key is found, moves the corresponding node to the end of the doubly linked list (indicating it was recently used).
- If not found, returns `-1`.

### `put` Function

- Checks if the key exists in the cache.
  - If it does, updates the value and moves the node to the end of the list.
  - If not, adds a new node to the end of the list.
- If the cache exceeds the capacity, the least recently used node (at the head) is removed.

### `DoublyLinkedList` Class

- A basic structure representing a node in the doubly linked list, storing the key and value pairs, along with pointers to the next and previous nodes.

## Complexity

- **Time Complexity:** $O(1)$ for both `get` and `put`, as the hash map allows constant-time access and the linked list allows constant-time updates.
- **Space Complexity:** $O(n)$, where `n` is the capacity of the cache, as the cache stores up to `n` key-value pairs.
