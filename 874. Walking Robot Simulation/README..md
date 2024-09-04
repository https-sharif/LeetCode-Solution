# Walking Robot Simulation

## Problem Description

A robot on an infinite XY-plane starts at point `(0, 0)` facing north. The robot can receive a sequence of `commands`:

- `-2`: Turn left 90 degrees.
- `-1`: Turn right 90 degrees.
- `1 <= k <= 9`: Move forward `k` units, one unit at a time.

Some grid squares contain `obstacles`. The `i`<sup>`th`</sup> obstacle is at grid point `obstacles[i] = (x`<sub>`i`</sub>`, y`<sub>`i`</sub>`)`. If the robot encounters an obstacle, it remains in its current position and moves on to the next command.

Return *the **maximum Euclidean distance** squared that the robot ever gets from the origin **squared***.

**Note:**

- North means +Y direction.
- East means +X direction.
- South means -Y direction.
- West means -X direction.
- Obstacles can be present at (0,0).

## Solution Approach

The code simulates the robot's movement on a 2D plane according to the commands while avoiding obstacles. It tracks the robot's position and direction, updating the maximum squared distance from the origin whenever it moves forward.

## Code Explanation

### `robotSim` Function

- **Initialization:**
  - Direction vectors are stored in `dir` to represent movement in four directions (right, down, left, up).
  - Obstacles are stored in an `unordered_set` for efficient lookup.

- **Command Processing:**
  - Commands `-2` and `-1` adjust the robot's direction.
  - Positive commands move the robot forward while checking for obstacles.
  - The maximum squared distance from the origin is updated during each forward move.

## Complexity

- **Time Complexity:** $O(n + k)$, where $n$ is the number of commands and $k$ is the number of obstacles. This accounts for processing commands and checking each move against the obstacle set.
- **Space Complexity:** $O(k)$, where $k$ is the number of obstacles, due to storage in the `unordered_set`.
