#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;

    printf("Array Elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
        sum = sum + arr[i];
    }

    printf("\nSum of Array Elements = %d", sum);

    return 0;
}
