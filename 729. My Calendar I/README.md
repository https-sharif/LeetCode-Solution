# My Calendar

## Problem Description

You are implementing a program to use as your calendar. We can add a new event if adding the event will not cause a **double booking**.

A double booking happens when two events have some non-empty intersection (i.e., some moment is common to both events.).

The event can be represented as a pair of integers `start` and `end` that represents a booking on the half-open interval `[start, end)`, the range of real numbers `x` such that `start <= x < end`.

Implement the `MyCalendar` class:

- `MyCalendar()` Initializes the calendar object.
- `boolean book(int start, int end)` Returns `true` if the event can be added to the calendar successfully without causing a **double booking**. Otherwise, return `false` and do not add the event to the calendar.

## Solution Approach

The `MyCalendar` class uses a set to store the booked events. The `book` method checks for any overlap with existing bookings before adding the new event.

## Code Explanation

### `book` Function

- Iterates through each existing booking in the set.
- Checks if the new event overlaps with any existing event using the condition `!(end <= x || start >= y)`. If there’s an overlap, it returns `false`.
- If no overlaps are found, it inserts the new booking into the set and returns `true`.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the number of existing bookings.
- **Space Complexity:** $O(n)$, for storing the bookings in the set.
