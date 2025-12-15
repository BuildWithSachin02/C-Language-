/*
Print a below pattern using nested for loop in C language:
100
81 81
64 64 64
49 49 49 49
36 36 36 36 36
*/
#include<stdio.h>
int main() {
    int num = 10;
	int i,j;  // starting number
    for (i = 1; i <= 5; i++) {       // rows
        int square = num * num;          // square of the number

        for (j = 1; j <= i; j++) {   // print 'i' times
            printf("%d ", square);
        }

        printf("\n"); // new line
        num--;        // move to next number (10 ? 9 ? 8 ? 7 ? 6)
    }

    return 0;
}

