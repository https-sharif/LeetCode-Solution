# Flood Fill

## Problem Description

An image is represented by an `m x n` integer grid `image` where `image[i][j]` represents the pixel value of the image.

You are also given three integers `sr`, `sc`, and `color`. You should perform a **flood fill** on the image starting from the pixel `image[sr][sc]`.

To perform a **flood fill**, consider the starting pixel, plus any pixels connected **4-directionally** to the starting pixel of the same color as the starting pixel, plus any pixels connected **4-directionally** to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with `color`.

Return *the modified image after performing the flood fill*.

## Solution Explanation

The algorithm uses the **Breadth-First Search (BFS)** method to perform a flood fill operation on a 2D image matrix. Starting from a given pixel `(sr, sc)`, the algorithm changes its color to the target color. It then propagates this color change to all adjacent pixels that have the same original color, using a queue to handle the BFS traversal. This process continues until all connected pixels with the same initial color are updated.

## Approach

1. **Initialize Variables**:
   - `n` and `m` are set to the number of rows and columns of the image, respectively.
   - `clr` holds the original color of the starting pixel.
   - If the starting pixel already has the target color, return the image immediately.

2. **Setup BFS**:
   - Change the color of the starting pixel to the target color.
   - Use a queue to manage the BFS process, starting with the initial pixel.

3. **Process BFS**:
   - Dequeue a pixel, update its adjacent pixels if they have the original color, and enqueue them.
   - Continue until the queue is empty.

4. **Return**:
   - The modified image matrix.

## Complexity

- **Time Complexity**: $O(n * m)$ – Each cell is processed once.
- **Space Complexity**: $O(n * m)$ – Due to the queue and image matrix.
