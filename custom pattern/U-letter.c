#include<stdio.h>

int main() {
    int i, j;
    int rows = 7;
    int cols = 7;

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= cols; j++) {

            // U pattern conditions
            if(
                (j == 1 && i != rows) ||             // left vertical line
                (j == cols && i != rows) ||          // right vertical line
                (i == rows && j > 2 && j < cols-1)   // bottom line
            )
            {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

