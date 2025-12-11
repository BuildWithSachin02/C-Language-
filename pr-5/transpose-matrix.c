
/*
q.3 
	devlop a program to find the trnaspose matrix of given 2D array.
*/
#include <stdio.h>

int main() {
    int n;
    int i,j;
    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n], transpose[n][n];

    // Input matrix
    printf("Enter %d elements:\n", n*n);
    for(i = 0; i < n; i++){
        for( j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    // Make transpose (swap row & column)
    for(i = 0; i < n; i++){
        for( j = 0; j < n; j++){
            transpose[j][i] = arr[i][j];
        }
    }

    // Print transpose matrix
    printf("\nTranspose of Matrix:\n");
    for(i = 0; i < n; i++){
        for( j = 0; j < n; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

