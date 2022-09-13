// Name: Dhruba Saha
// Program: Implementaion of two dimensional dynamic array.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int row, col, i, j;
    printf("Enter no of rows and columns respectively:");
    scanf("%d %d", &row, &col);
    int(*arr)[row] = malloc(sizeof(arr));
    printf("Enter elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Elements[%d][%d]:", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Array elements:");
    for (i = 0; i < row; i++)
    {
        printf("\n");
        for (j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    free(arr);
}