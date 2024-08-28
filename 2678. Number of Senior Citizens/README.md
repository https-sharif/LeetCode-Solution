# Number of Senior Citizens

## Problem Description

You are given a **0-indexed** array of strings `details`. Each element of `details` provides information about a given passenger compressed into a string of length `15`. The system is such that:

- The first ten characters consist of the phone number of passengers.
- The next character denotes the gender of the person.
- The following two characters are used to indicate the age of the person.
- The last two characters determine the seat allotted to that person.

Return *the number of passengers who are **strictly more than 60 years old***.

### Solution Approach

1. **Extract Age Information**:
   - For each string in `details`, extract the age by taking the 12th and 13th characters and converting them to an integer.

2. **Count Passengers Above Age 60**:
   - Check if the extracted age is greater than 60.
   - Maintain a counter to keep track of the number of passengers who meet this condition.

3. **Return the Count**:
   - Return the total count of passengers older than 60.

### Complexity

- **Time Complexity**: $O(n)$, where `n` is the number of passengers. Each string is processed once to extract the age and perform the comparison.
- **Space Complexity**: $O(1)$ for the counter variable used to store the count.
