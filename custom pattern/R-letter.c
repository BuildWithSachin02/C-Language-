#include<stdio.h>

int main() {
    int i, j;
    int rows = 7, cols = 5;

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= cols; j++) {
            
            // 1) Top full line
            if(i == 1) {
                printf("* ");
            }

            // 2) Upper vertical lines
            else if(i == 2 || i == 3) {
                if(j == 1 || j == cols)
                    printf("* ");
                else
                    printf("  ");
            }

            // 3) Middle horizontal line
            else if(i == 4) {
                if(j <= 4)
                    printf("* ");
            }

            // 4) Diagonal going down-right
            else if(i >= 5) {
                if(j == 1 || j == (i - 3))
                    printf("* ");
                else
                    printf("  ");
            }

        }
        printf("\n");
    }
}

