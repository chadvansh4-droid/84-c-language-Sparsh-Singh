#include <stdio.h>

int main()
{
    int a = 20, b = 10;
    char op = '+';

    switch(op)
    {
        case '+':
            printf("Addition = %d", a + b);
            break;

        case '-':
            printf("Subtraction = %d", a - b);
            break;

        case '*':
            printf("Multiplication = %d", a * b);
            break;

        case '/':
            printf("Division = %d", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}
