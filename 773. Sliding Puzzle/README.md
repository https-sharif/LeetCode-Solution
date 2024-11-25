# Sliding Puzzle

## Problem Description

On an `2 x 3` board, there are five tiles labeled from `1` to `5`, and an empty square represented by `0`. A **move** consists of choosing `0` and a 4-directionally adjacent number and swapping it.

The state of the board is solved if and only if the board is `[[1,2,3],[4,5,0]]`.

Given the puzzle board `board`, return *the least number of moves required so that the state of the board is solved*. If it is impossible for the state of the board to be solved, return `-1`.

## Solution Approach

The solution uses a Breadth-First Search (BFS) approach to explore all possible board configurations starting from the given board. It keeps track of visited configurations to avoid redundant computations and uses a queue to simulate the BFS process.

## Code Explanation

### `slidingPuzzle` Function

- **Initialization**:
  - Defines `target` as the goal state `"123450"`.
  - Converts the input `board` into a string format (`curr`) for easier manipulation and identifies the position of the empty space (`0`).

- **BFS Setup**:
  - Uses an `unordered_set` to store visited configurations.
  - A `queue` stores pairs of board configurations and the position of the empty space.

- **BFS Execution**:
  - Processes each configuration in the queue:
    - If the current configuration matches the target, returns the number of moves.
    - Generates all possible configurations by swapping the empty space with its adjacent tiles using pre-defined adjacency lists.
    - If a new configuration hasn't been visited, it is added to the queue and the visited set.

- **Termination**:
  - Returns `-1` if no solution is found.

## Complexity

- **Time Complexity:** $O(n!)$, where $n$ is the number of tiles (`6`).
- **Space Complexity:** $O(n!)$, to store visited configurations and the BFS queue.
