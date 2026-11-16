#include <stdio.h>

int main()
{
    int n = 20, i, count = 0;

    printf("Numbers divisible by 3 but not by 5:\n");

    for(i = 1; i <= n; i++)
    {
        if(i % 3 == 0 && i % 5 != 0)
        {
            printf("%d ", i);
            count++;
        }
    }

    printf("\nTotal count = %d", count);

    return 0;
}
