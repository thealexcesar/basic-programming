#include <stdio.h>
#include "get_height.h"

int get_height() {
    int height = 0;
    do {
        printf("Insert a number: ");
        if (scanf("%d", &height) != 1) {
            while (getchar() != '\n');
            height = 0;
        }
    } while (height < 1 || height > 8);
    return height;
}

