// check wheater a number is atharmstrong number or not

#include <stdio.h>
#include <math.h>

void main()
{
    int n, rem, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, 3);
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("The number is an armstrong number\n");
    }
    else
    {
        printf("The number is not an armstrong number\n");
    }
}