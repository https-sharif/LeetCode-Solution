# Minimum Total Distance Traveled

## Problem Description

There are some robots and factories on the X-axis. You are given an integer array `robot` where `robot[i]` is the position of the `i`<sup>`th`</sup> robot. You are also given a 2D integer array `factory` where `factory[j] = [positionj, limitj]` indicates that `position`<sub>`j`</sub> is the position of the `j`<sup>`th`</sup> factory and that the `j`<sup>`th`</sup> factory can repair at most `limit`<sub>`j`</sub> robots.

The positions of each robot are **unique**. The positions of each factory are also **unique**. Note that a robot can be **in the same position** as a factory initially.

All the robots are initially broken; they keep moving in one direction. The direction could be the negative or the positive direction of the X-axis. When a robot reaches a factory that did not reach its limit, the factory repairs the robot, and it stops moving.

**At any moment**, you can set the initial direction of moving for **some** robot. Your target is to minimize the total distance traveled by all the robots.

Return *the minimum total distance traveled by all the robots*. The test cases are generated such that all the robots can be repaired.

*Note that*

- All robots move at the same speed.
- If two robots move in the same direction, they will never collide.
- If two robots move in opposite directions and they meet at some point, they do not collide. They cross each other.
- If a robot passes by a factory that reached its limits, it crosses it as if it does not exist.
- If the robot moved from a position `x` to a position `y`, the distance it moved is `|y - x|`.

## Solution Approach

1. **Sorting:** Sort both `robot` and `factory` arrays for optimal pair matching.
2. **Factory Expansion:** Convert the `factory` array into a linear array `newFactory`, expanding each factory’s position according to its repair limit.
3. **Dynamic Programming:** Use a DP table, `dp[i][j]`, where `i` is the robot index, and `j` is the factory position. This table will store the minimum distance needed for the first `i` robots with the first `j` factories.
4. **DP Transition:** For each `dp[i][j]`, calculate the cost if the `i`th robot is assigned to the `j`th factory or not, taking the minimum of these options.

## Code Explanation

### `minimumTotalDistance` Function

- **Sorting:** Sort the `robot` and `factory` arrays by their positions.
- **Factory Expansion:** Create `newFactory`, expanding each factory position by its limit.
- **DP Initialization:** Initialize the DP array to track minimum distances. Set a large initial value for cases where repairs exceed available factories.
- **DP Transition:** For each robot and factory position, compute the minimum distance if:
  - The robot is assigned to the factory (`pick`).
  - The robot skips the factory (`notPick`).
- **Result:** The minimum distance is stored at `dp[0][0]`.

## Complexity

- **Time Complexity:** $O(n \times m)$, where `n` is the number of robots and `m` is the total number of factories (after expanding limits).
- **Space Complexity:** $O(n \times m)$, for storing the DP table.
