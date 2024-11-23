# Find Kth Bit in Nth Binary String

## Problem Description

Given two positive integers `n` and `k`, the binary string `S`<sub>`n`</sub> is formed as follows:

- `S`<sub>`1`</sub>` = "0"`
- `S`<sub>`i`</sub>` = S`<sub>`i`</sub>` - 1 + "1" + reverse(invert(S`<sub>`i`</sub>` - 1)) for i > 1`
- 
Where `+` denotes the concatenation operation, `reverse(x)` returns the reversed string `x`, and `invert(x)` inverts all the bits in `x` (`0` changes to `1` and `1` changes to `0`).

For example, the first four strings in the above sequence are:

- `S`<sub>`1`</sub>` = "0"`
- `S`<sub>`2`</sub>` = "011"`
- `S`<sub>`3`</sub>` = "0111001"`
- `S`<sub>`4`</sub>` = "011100110110001"`
  
Return *the `kth` *bit in* `S`<sub>`n`</sub>. It is guaranteed that `k` is valid for the given `n`.

## Solution Approach

The solution uses a recursive approach to determine the **kth** bit in the binary string **S**<sub>**n**</sub> without constructing the entire string.

## Code Explanation

### `findKthBit` Function

- If `k == 1`, return `'0'`.
- Calculate the length of the string as `len = (1 << n) - 1`.
- Determine the middle index as `mid = (len + 1) / 2`.
- If `k == mid`, return `'1'` (the middle bit).
- If `k < mid`, recursively call `findKthBit(n - 1, k)` to find the kth bit in the previous string.
- For `k > mid`, recursively call `findKthBit(n - 1, len - k + 1)` to find the corresponding bit from the inverted and reversed segment, then invert the result.

## Complexity

- **Time Complexity:** $O(2^n)$, where `n` is the input, due to exponential recursive calls.
- **Space Complexity:** $O(n)$, where `n` is the input, representing maximum recursion depth. 
