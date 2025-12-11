#include<stdio.h>
#include<string.h>
/*
Q.1
	dap that cheaks whether a given string is palindrome or not without
	using string function.
*/

int main() {
    char str[100];
    int i, j;

    // Step 1: Input string
    printf("Enter a string: ");
    scanf("%s", str);

    // Step 2: Find length manually (without strlen)
    int length = 0;
    while(str[length] != '\0') {
        length++;
    }

    // Step 3: Palindrome check using two-pointer method
    i = 0;
    j = length - 1;

    int isPalindrome = 1;  // assume true

    while(i < j) {
        if(str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }

    // Step 4: Print result
    if(isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is NOT a palindrome.\n");

    return 0;
}

