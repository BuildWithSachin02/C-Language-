/*
Create a C program to find the smallest element in an 1D array.
*/
#include<stdio.h>

int main() {
    int n,i,small;
	
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // user input
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume first element is smallest
    int smallest = arr[0];

    // Compare other elements
    for(i = 1; i < n; i++) {
        if(arr[i] < smallest) {
            small = arr[i];
        }
    }

    printf("The smallest element in the array is:=> %d\n", small);

    return 0;
}

