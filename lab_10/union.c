#include <stdio.h>

union Data
{
    int number;
    float decimal;
    char letter;
};

int main()
{
    union Data d;

    d.number = 100;
    printf("Integer Value = %d\n", d.number);

    d.decimal = 25.5;
    printf("Float Value = %.2f\n", d.decimal);

    d.letter = 'A';
    printf("Character Value = %c\n", d.letter);

    printf("Size of Union = %zu bytes", sizeof(d));

    return 0;
}
