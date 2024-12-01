# Check If N and Its Double Exist

## Problem Description

Given an array `arr` of integers, check if there exist two indices `i` and `j` such that :

- `i != j`
- `0 <= i, j < arr.length`
- `arr[i] == 2 * arr[j]`

## Solution Approach

The solution uses a hash map to keep track of elements we have already processed. For each number in the array, we check if either its double or half (if it's even) exists in the hash map. If either condition is true, we return `true`. Otherwise, we add the current number to the hash map and continue checking.

## Code Explanation

### `checkIfExist` Function

- **`map<int,bool> mp;`**: Initializes a map to track if a number has been encountered.
- **`for(auto& a : arr)`**: Iterates through the array `arr`.
- **`if(mp.find(a * 2) != mp.end() || (a % 2 == 0 && mp.find(a / 2) != mp.end()))`**: 
  - Checks if the double of the current number exists in the map.
  - If the current number is even, also checks if half of it exists in the map.
  - If either condition is true, returns `true`.
- **`mp[a] = true;`**: Adds the current number to the map for future checks.
- **`return false;`**: Returns `false` if no such pair is found.

## Complexity

- **Time Complexity:** $O(n)$, where `n` is the size of the array.
- **Space Complexity:** $O(n)$, as we store up to `n` elements in the map.
