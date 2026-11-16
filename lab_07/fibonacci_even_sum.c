#include <stdio.h>

int main()
{
    int n = 7;
    int a = 0, b = 1, c, i;
    int sum = 0;

    printf("Fibonacci Series:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);

        if(a % 2 == 0)
        {
            sum = sum + a;
        }

        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum of even-valued terms = %d", sum);

    return 0;
}
