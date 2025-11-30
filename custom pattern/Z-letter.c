#include<stdio.h>

int main() {
    int i, j;
    int n = 5;  // Size

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {

            if(
                i == 1 ||                     // Top line
                i == n ||                     // Bottom line
                j == (n - i + 1)              // Diagonal (right ? left)
            ){
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

