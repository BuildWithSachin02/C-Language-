/*
Q.1 
	Develop a menu-driven program in C to implement arithmetic operations such as
+ , - , * , / , % using User Defined Functions (UDF), switch case, and looping.
The program must run continuously until the user presses 0 to exit.
*/
#include <stdio.h>

// User Defined Functions
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero not allowed!\n");
        return 0;
    }
    return a / b;
}

int mod(int a, int b) {
    if (b == 0) {
        printf("Error: Modulo by zero not allowed!\n");
        return 0;
    }
    return a % b;
}

int main() {
    int choice;
    int a, b;

    while (1) {  // Endless loop
        printf("\n--- Calculator Menu ---\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 0) {
            printf("Exiting Program...\n");
            break; // Stop program
        }

        printf("Enter first number: ");
        scanf("%d", &a);

        printf("Enter second number: ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Result = %d\n", add(a, b));
                break;

            case 2:
                printf("Result = %d\n", sub(a, b));
                break;

            case 3:
                printf("Result = %d\n", mul(a, b));
                break;

            case 4:
                printf("Result = %d\n", divide(a, b));
                break;

            case 5:
                printf("Result = %d\n", mod(a, b));
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

