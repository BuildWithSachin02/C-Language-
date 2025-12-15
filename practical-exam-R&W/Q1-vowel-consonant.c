#include<stdio.h>
/*
Create a C program to check if a number is entered by the user 
is a porositive or consonant using a switch statement.
*/
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch) {

        // Vowel (lowercase & uppercase)dono dalenge for upper-lowwer case
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;

        // Consonants (any alphabet except vowels)
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                printf("%c is a consonant.\n", ch);//a-z me vowel ko chhod ke kuc bhi add hota h boh consonant h 
            else
                printf("Invalid input!.\n");
    }

    return 0;
}

