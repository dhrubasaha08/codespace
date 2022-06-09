/*********************************************************************************************************
Name:           Dhruba Saha
Roll No:        B.Sc(Sem-IV)-04
Program No:     18
Program Name:   Write a C program to implement bubble sort. Use dynamic memory allocation and subfunction.
Date:           9/06/2022
*********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void inputArr(int *arr, int n);
void bubbleSort(int *arr, int n);
void printArr(int *arr, int n);

void main()
{
    int n, *arr;
    arr = (int *)malloc(sizeof(int) * n);

    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    inputArr(arr, n);

    printf("Before insertion sort\n");
    printArr(arr, n);

    bubbbleSort(arr, n);

    printf("After insertion sort\n");
    printArr(arr, n);

    free(arr);
}

void inputArr(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
}

void bubbleSort(int *arr, int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArr(int *arr, int n)
{
    int i;

    printf("Array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*

*/