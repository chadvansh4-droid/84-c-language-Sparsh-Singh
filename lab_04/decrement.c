#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Before decrement = %d\n", a);
    a--;
    printf("After decrement = %d\n", a);

    return 0;
}
