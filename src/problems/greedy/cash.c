#include <stdio.h>

int get_change(void);
int calculate_coins(int cents);

int main(void) {
    float change = get_change();
    int total_coins = calculate_coins(change);
    printf("Total coins: %d\n", total_coins);
}

int get_change() {
    int n;
    char buffer[100];

     do {
        printf("Change owed: ");
        if (scanf("%d", &n) != 1 || n <= 0) {
            while(getchar() != '\n');
            printf("Invalid input. Please enter a positive integer greater than 0.\n");
        }
    } while (n < 1);

    return n;
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
