#include <stdio.h>
#include "get_height.h"

void pyramid(int height);

int main(void) {
    int height = get_height();
    pyramid(height);
}

void pyramid(int height) {
    for (int i = 1; i <= height; i++) {
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }

        for (int j = 0; j < i; j++) {
            printf("#");
        }
        puts("");
    } 
}
