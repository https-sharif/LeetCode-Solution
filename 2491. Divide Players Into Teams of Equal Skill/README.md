# Divide Players Into Teams of Equal Skill

## Problem Description

You are given a positive integer array `skill` of **even** length `n` where `skill[i]` denotes the skill of the `i`<sup>`th`</sup> player. Divide the players into `n / 2` teams of size `2` such that the total skill of each team is **equal**.

The **chemistry** of a team is equal to the **product** of the skills of the players on that team.

Return *the sum of the **chemistry** of all the teams, or return* `-1` *if there is no way to divide the players into teams such that the total skill of each team is equal*.

## Solution Approach

Sort the array and form teams by pairing the lowest and highest skilled players. If all teams have the same total skill, compute the chemistry by multiplying the skills of the paired players.

## Code Explanation

### `dividePlayers` Function

- **Sorting**: The array is sorted to easily compare the smallest and largest skills.
- **Team Skill**: The target skill for each team is set as the sum of the smallest and largest skill values.
- **Loop**: For each pair, check if their combined skill matches the team skill. If not, return `-1`. Otherwise, calculate the chemistry by multiplying the pair's skills and accumulate the result.

## Complexity

- **Time Complexity:** $O(n \log n)$, due to sorting the skill array.
- **Space Complexity:** $O(1)$, since no extra space is used apart from variables.
