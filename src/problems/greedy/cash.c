/**
 * @author Alex Cesar
 * @version 1.0
 */
#include <stdio.h>

float get_change(void);
int calculate_coins(int cents);

int main(void) {
    float change = get_change();
    int total_coins = calculate_coins(change);
    printf("Total coins: %d\n", total_coins);
}

float get_change(void) {
    float change;
    do {
        printf("Change owed: ");
        scanf("%f", &change);
    } while (change <= 0);

    return change;
}

int calculate_coins(int cents) {
    int coins = 0;

    coins += cents / 25;
    cents %= 25;

    coins += cents / 10;
    cents %= 10;

    coins += cents / 5;
    cents %= 5;

    coins += cents / 1;
    cents %= 1;

    return coins;
}
