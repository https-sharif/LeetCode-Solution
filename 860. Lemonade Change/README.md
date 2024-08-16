# Lemonade Change

## Problem Description

At a lemonade stand, each lemonade costs `$5`. Customers are standing in a queue to buy from you and order one at a time (in the order specified by bills). Each customer will only buy one lemonade and pay with either a `$5`, `$10`, or `$20` bill. You must provide the correct change to each customer so that the net transaction is that the customer pays $5.

Note that you do not have any change in hand at first.

Given an integer array `bills` where `bills[i]` is the bill the `i`<sup>`th`</sup> customer pays, return `true` if you can provide every customer with the correct change, or `false` otherwise.

## Solution Approach

The solution iterates over the array of bills and tries to provide the correct change for each bill based on the bills that have been previously received:

1. **Tracking Counts:** We use two variables `f` and `t` to track the count of $5 and $10 bills respectively.
2. **Processing $5 Bills:** If the bill is $5, simply increment the count of $5 bills.
3. **Processing $10 Bills:** If the bill is $10, check if there is a $5 bill available. If yes, use it as change and increment the count of $10 bills.
4. **Processing $20 Bills:**
    - First, check if you can provide change using one $10 bill and one $5 bill.
    - If not, check if you can provide change using three $5 bills.
5. **Return the Result:** If you are unable to provide change at any point, return `false`. If you can process all customers, return `true`.

## Complexity

- **Time Complexity:** `O(n)`, where `n` is the number of bills. The solution iterates through the list of bills once.
- **Space Complexity:** `O(1)`, as only a fixed amount of extra space is used regardless of the input size.
