#include <stdio.h>

int main()
{
    int num = 153;
    int original, remainder, sum = 0;

    original = num;

    while(num > 0)
    {
        remainder = num % 10;
        sum = sum + remainder * remainder * remainder;
        num = num / 10;
    }

    if(sum == original)
    {
        printf("%d is an Armstrong Number", original);
    }
    else
    {
        printf("%d is not an Armstrong Number", original);
    }

    return 0;
}
