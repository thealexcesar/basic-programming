# Greedy Algorithm - Cash Problem

## Description
This problem solves the task of calculating the minimum number of coins required to give a customer
change using the fewest coins possible. The program follows a greedy algorithm approach, starting
with the largest coin (quarters, dimes, nickels, and pennies) and progressively using smaller
coins until the change is given.

### Problem Breakdown:
1. Prompt the user for the amount of change owed.
2. Convert the change into cents.
3. Calculate the number of coins needed using a greedy approach:
   - Quarters (25¢), dimes (10¢), nickels (5¢), pennies (1¢)
4. Output the total number of coins required.

### Example:
- Input: `Change owed: 41`
- Output: `4`

> #### complexity
> - Time Complexity: O(1)
> - Space Complexity: O(1)

## References
- [CS50x Problem Set 1: Cash - Official Exercise Link](https://cs50.harvard.edu/x/2025/psets/1/cash/)

