// Name: Dhruba Saha
// Program: Implementaion of one dimensional static array.

#include <stdio.h>
#define N 4

void main()
{
    int i, arr[N];
    printf("Enter elements:\n");
    for (i = 0; i < N; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Array elements:");
    for (i = 0; i < N; i++)
    {
        printf(" %d\t", arr[i]);
    }
    printf("\n");
}