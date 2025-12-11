/*
Q.4
	devlop a progrma find a sum of all element of 2d array and given 
	by row and cols
*/
#include <stdio.h>

int main() {
    int row, col;

    // Step 1: Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    int arr[row][col];
    int sum = 0;

    // Step 2: Input array elements
    printf("Enter %d elements:\n", row * col);
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];   // Add each element to sum
        }
    }

    // Step 3: Print total sum
    printf("\nSum of all elements = %d\n", sum);

    return 0;
}

