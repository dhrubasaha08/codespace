//  check wheater a number is natural or not

#include <stdio.h>

void main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (floorf(n) == n && n > 0)
    {
        printf("The number is natural\n");
    }
    else
    {
        printf("The number is not natural\n");
    }
}