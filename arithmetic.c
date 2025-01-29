#include <stdio.h>

int main() {
    int number1, number2, result;
    char operator;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    switch (operator) {
        case '+':
            result = number1 + number2;
            printf("Result: %d + %d = %d\n", number1, number2, result);
            break;
        case '-':
            result = number1 - number2;
            printf("Result: %d - %d = %d\n", number1, number2, result);
            break;
        case '*':
            result = number1 * number2;
            printf("Result: %d * %d = %d\n", number1, number2, result);
            break;
        case '/':
                result = number1 / number2;
                printf("Result: %d / %d = %d\n", number1, number2, result);
            break;
        case '%':
                result = number1 % number2;
                printf("Result: %d %% %d = %d\n", number1, number2, result);
           
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

    
