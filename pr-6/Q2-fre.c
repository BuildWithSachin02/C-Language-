/*
Q.2
	extend the progrma to count the freaquency of each charcater 
	in given string.
*/
#include <stdio.h>

int main() {
	int i,j;
    char str[100];
    int freq[256] = {0};  // ASCII table size

    // Step 1: Take string input
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Count frequency manually (no string functions)
    i = 0;
    while(str[i] != '\0') {
        char ch = str[i];
        freq[ch]++;     // Increase frequency of this character
        i++;
    }

    // Step 3: Print frequency
    printf("\nCharacter Frequency:\n");
    for( j = 0; j < 256; j++) {
        if(freq[j] > 0) {
            printf("%c = %d\n", j, freq[j]);
        }
    }

    return 0;
}


