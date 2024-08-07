# Integer to English Words

## Problem Statement

Convert a non-negative integer `num `to its English words representation.

## Approach

### Base Cases:

- Numbers < 20: Directly map to ones array.
- Numbers < 100: Combine words from tens array and the result of units.
  
### Hundreds:

- Numbers < 1000: Recursively process hundreds and remainder, appending "Hundred".
- 
### Thousands and Beyond:

- Numbers ≥ 1000: Recursively process chunks for thousands, millions, billions using corresponding words.
- 
### Combine:

- Recursively assemble words and remove leading spaces.

## Complexity
- **Time Complexity**: $O(log_{10}N)$, The recursive function processes the number in logarithmic chunks based on its magnitude.
- **Space Complexity**:  $O(log_{10}N)$, Space is used for recursive function calls and storing the result, proportional to the number of digits in the number.
