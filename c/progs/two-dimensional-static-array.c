// Name: Dhruba Saha
// Program: Implementaion of two dimensional static array.

#include <stdio.h>
#define N 2

void main()
{
    int arr[N][N], i, j;
    printf("Enter elements:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Elements[%d][%d]:", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array elements:");
    for (i = 0; i < N; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
}