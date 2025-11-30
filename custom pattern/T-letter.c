#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 7; i++) {
        for(j = 1; j <= 5; j++) {

            if(
                (i == 1 && j <= 5) ||            // top line
                (i == 2 && j == 1)     ||        // left
                (i == 3 && j == 1)     ||        // left
                (i == 4 && j <= 5)     ||        // middle line
                (i == 5 && j == 5)     ||        // right
                (i == 6 && j == 5)     ||        // right
                (i == 7 && j <= 5)              // bottom line
            ){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

