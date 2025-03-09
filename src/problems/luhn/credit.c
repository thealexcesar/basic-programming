#include <stdio.h>
#include <stdbool.h>

bool luhn_algorithm(long number);
void check_card_type(long number);
int main(void) {
    long number;
    printf("Number: ");
    scanf("%ld", &number);

    // TODO: Ensure input is a number.

    if (luhn_algorithm(number)) {
        check_card_type(number);
    } else {
        printf("INVALID\n");
    }
}

bool luhn_algorithm(long number) {
    int sum = 0, count = 0;
    long temp = number;
    
    while (temp > 0) {
        int digit = temp % 10;

        if (count % 2 == 1) {
            digit *= 2;
            if (digit > 9) {
                digit = (digit % 10) + (digit / 10);
            }
        }

        sum += digit;
        temp /= 10;
        count++;

        // printf("Step %d -> Digit: %d, Sum: %d\n", count, digit, sum); // DEBUG
    }

    // printf("Final sum: %d\n", sum); // DEBUG
    return (sum % 10 == 0);
}

void check_card_type(long number) {

    int length = 0;
    long first_two_digits = number;
    
    while (first_two_digits >= 100) {
        first_two_digits /= 10;
    }
    
    long first_digit = first_two_digits / 10;
    length = snprintf(NULL, 0, "%ld", number);


    if (length == 15 && (first_two_digits == 34 || first_two_digits == 37)) {
        printf("AMEX\n");
    } else if (length == 16 && (first_two_digits >= 51 && first_two_digits <= 55)) {
        printf("MASTERCARD\n");
    } else if ((length == 13 || length == 16) && first_digit == 4) {
        printf("VISA\n");
    } else {
        printf("INVALID\n"); 
    }
}
