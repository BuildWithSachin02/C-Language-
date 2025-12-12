#include <stdio.h>
/*
Find Length of a String Using Pointer
*/
int main() {
    char str[100];
    char *p;
    int length = 0;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    p = str;   // pointer pointing to string

    while (*p != '\0') {
        length++;
        p++;   // move pointer forward
    }

    // length includes newline when using fgets, so adjust:
    if(str[length-1] == '\n') {
        length--;
    }

    printf("The length of a string is: %d", length);

    return 0;
}

