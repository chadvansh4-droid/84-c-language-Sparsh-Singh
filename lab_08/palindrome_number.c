#include <stdio.h>

int main()
{
    int num = 121;
    int original, remainder, reverse = 0;

    original = num;

    while(num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if(original == reverse)
    {
        printf("%d is a Palindrome Number", original);
    }
    else
    {
        printf("%d is not a Palindrome Number", original);
    }

    return 0;
}
