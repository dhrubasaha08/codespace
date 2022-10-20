// Name: Dhruba Saha
// Program: Implementaion of one dimensional dynamic array.

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, n, *ptr = NULL;
    printf("Enter size of the Array:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element %d:", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("Array elements:");
    for (i = 0; i < n; i++)
    {
        printf(" %d\t", ptr[i]);
    }
    printf("\n");
    free(ptr);
}