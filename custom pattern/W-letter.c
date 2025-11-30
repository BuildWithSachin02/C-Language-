#include<stdio.h>

int main(){
    int i, j;
    int n = 7; // rows

    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){

            if(
                j == 1 ||                               // left vertical line
                j == n ||                               // right vertical line
                (i >= 4 && j == i) ||                   // middle left slant
                (i >= 4 && j == (n - i + 1))            // middle right slant
            ){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

