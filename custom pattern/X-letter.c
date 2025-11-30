#include <stdio.h>

int main() {
    int n = 7;   // height width same (odd number)
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            
            // Condition for X
            if (j == i || j == (n - i + 1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

