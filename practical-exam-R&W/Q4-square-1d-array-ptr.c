/*
Write a C program to find square of each elements of an 1D array 
using Pointer.
*/
#include <stdio.h>

int main() {
    int n,i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);//user input of size of array

    int arr[n];

    // Input elements
    printf("Enter %d elements:\n", n);// input by element
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;  // pointer me hmne array ko strore kiya 

    // Square formulla
    for (i = 0; i < n; i++) {
        *(ptr + i) = (*(ptr + i)) * (*(ptr + i));  
    }

    // Output
    printf("Square array each element:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

