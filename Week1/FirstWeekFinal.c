#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    // Loop runs until user chooses to exit
    while (1) {
        
        // Display menu
        printf("\n--- Simple Calculator ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Choose (1-5): ");
        scanf("%d", &choice);

        // Exit condition
        if (choice == 5) {
            printf("Exiting calculator.\n");
            break;
        }

        // Input two numbers
        printf("Enter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // Perform operation based on choice
        if (choice == 1) {
            result = num1 + num2;
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
        } else if (choice == 2) {
            result = num1 - num2;
            printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
        } else if (choice == 3) {
            result = num1 * num2;
            printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
        } else if (choice == 4) {
            if (num2 == 0) {
                printf("Error: Cannot divide by 0\n");
            } else {
                result = num1 / num2;
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
            }
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}