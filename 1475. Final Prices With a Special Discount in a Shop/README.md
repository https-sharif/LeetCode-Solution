# Final Prices With a Special Discount in a Shop

## Problem Description

You are given an integer array `prices` where `prices[i]` is the price of the `i`<sup>`th`</sup> item in a shop.

There is a special discount for items in the shop. If you buy the `i`<sup>`th`</sup> item, then you will receive a discount equivalent to `prices[j]` where `j` is the minimum index such that `j > i` and `prices[j] <= prices[i]`. Otherwise, you will not receive any discount at all.

Return an integer array `answer` where `answer[i]` is the final price you will pay for the `i`<sup>`th`</sup> item of the shop, considering the special discount.

## Solution Approach

The solution utilizes a stack to keep track of the indices of elements in the `prices` array, ensuring that we efficiently find the nearest smaller price for each item in reverse order. This allows us to apply the discount when a smaller or equal-priced item appears ahead of the current item.

## Code Explanation

### `finalPrices` Function

- **Stack Usage**: We use a stack to maintain indices of prices that might apply discounts to subsequent prices.
- **Iterating from the Back**: Start iterating from the last element and move backward to ensure we check only the future prices.
- **Discount Application**: If a smaller price is found to the right, apply the discount by subtracting the top of the stack from the current price.
- **Stack Operations**: Ensure correct placement of current price indices on the stack for future comparisons.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the size of the `prices` array.
- **Space Complexity:** $O(n)$, due to the stack storing indices of prices.
