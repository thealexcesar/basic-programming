# Luhn Algorithm - Credit Card Validation

## Description
This problem verifies the validity of a credit card number using the Luhn algorithm. Additionally, the program determines the card type (AMEX, MASTERCARD, or VISA) based on its length and starting digits.

### Problem Breakdown:
1. Prompt the user for a credit card number.
2. Apply the Luhn algorithm to verify its validity:
   - Double every second digit from the right.
   - If the doubled value exceeds 9, sum its digits.
   - Sum all digits and check if the total is a multiple of 10.
3. Identify the card type based on:
   - **AMEX**: 15 digits, starts with 34 or 37.
   - **MASTERCARD**: 16 digits, starts with 51-55.
   - **VISA**: 13 or 16 digits, starts with 4.
4. Output the card type or `INVALID` if the number is not valid.

### Example:
```sh
Input: Number: 378282246310005
Output: AMEX
xample:

Input: Number: 1234567890123456
Output: INVALID
```
> ### Complexity
> - Time Complexity: O(n)
> - Space Complexity: O(1)
- [CS50x Problem Set 1: Credit    - Official Exercise Link](https://cs50.harvard.edu/x/2025/psets/1/credit/)
