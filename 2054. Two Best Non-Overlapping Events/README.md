# Maximum Sum of Two Non-Overlapping Events

## Problem Description

You are given a **0-indexed** 2D integer array of `events` where `events[i] = [startTime`<sub>`i`</sub>`, endTime`<sub>`i`</sub>`, value`<sub>`i`</sub>`]`. The `i`<sup>`th`</sup> event starts at `startTime`<sub>`i`</sub> and ends at `endTime`<sub>`i`</sub>, and if you attend this event, you will receive a value of `value`<sub>`i`</sub>. You can choose **at most two non-overlapping** events to attend such that the sum of their values is **maximized**.

Return *this **maximum** sum*.

Note that the start time and end time is **inclusive**: that is, you cannot attend two events where one of them starts and the other ends at the same time. More specifically, if you attend an event with end time `t`, the next event must start at or after `t + 1`.

## Solution Approach

The code sorts events by their start time and uses a priority queue to track the maximum value of events that end before the current event starts. It iteratively calculates the maximum possible value by combining the current event's value with the maximum value of a compatible previous event.

## Code Explanation

### `maxTwoEvents` Function

1. **Sorting**:  
   Events are sorted by their start times to efficiently process them in chronological order.

2. **Priority Queue**:  
   A min-heap (`priority_queue`) stores pairs of end times and values for events processed so far. This helps in quickly finding the maximum value of non-overlapping events.

3. **Updating Maximum**:  
   While processing each event, the heap is cleared of events that end before the current event's start time. The maximum value (`mx`) is updated with the highest value among such events.

4. **Calculating Answer**:  
   For each event, the maximum sum is updated as the maximum of the current value (`mx + c`) and the previous maximum sum (`ans`).

5. **Returning the Result**:  
   The final answer is returned after processing all events.

## Complexity

- **Time Complexity:** $O(n \log n)$, sorting takes $O(n \log n)$.
- **Space Complexity:** $O(n)$, space is used for the priority queue, which can hold at most `n` events.
