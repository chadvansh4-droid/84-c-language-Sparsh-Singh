#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Before increment = %d\n", a);
    a++;
    printf("After increment = %d\n", a);

    return 0;
}
