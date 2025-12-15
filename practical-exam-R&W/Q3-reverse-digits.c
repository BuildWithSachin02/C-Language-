/*
Write a C program that defines a function to reverse a 3 digit number.
*/
#include<stdio.h>

// Function to reverse a 3-digit number
int reverseNumber(int num) {
    int first = num / 100;          // pehla number find kiya
    int tens = (num / 10) % 10;        // middle number find kiya hmne
    int units = num % 10;              // last number find kiya 

    int reversed = (units * 100) + (tens * 10) + first;
    return reversed;
}

int main() {
    int num;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    int result = reverseNumber(num);

    printf("Reversed number: %d\n", result);

    return 0;
}

