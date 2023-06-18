#include <stdio.h>

int main() {
    float operand1, operand2, result;
    char operator;

    // Read the first operand
    printf("Enter Number 1: ");
    scanf("%f", &operand1);

    // Read the operator
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Read the second operand
    printf("Enter Number 2: ");
    scanf("%f", &operand2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
