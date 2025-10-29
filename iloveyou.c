#include <stdio.h>

int main() {
    int i, j;  // i = line counter, j = word counter

    for(i = 1; i <= 100; i++) {  // total 9 lines (3 cycles of "I", "Love", "You")

        // Decide which word to print based on line number
        if(i % 3 == 1) {          // 1st, 4th, 7th line
            for(j = 1; j <= i; j++) {
                printf("I ");
            }
        }
        else if(i % 3 == 2) {     // 2nd, 5th, 8th line
            for(j = 1; j <= i; j++) {
                printf("Love ");
            }
        }
        else {                    // 3rd, 6th, 9th line
            for(j = 1; j <= i; j++) {
                printf("You ");
            }
        }
        printf("\n");

        printf("\n"); // har line ke baad new line
    }

    return 0;
}

