#include <stdio.h>

int main() {
    int n = 6;   // height of V
    int i, j;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= 2*n; j++) {

            // Left slant: j == i
            // Right slant: j == 2*n - i
            if(j == i || j == 2*n - i) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}

