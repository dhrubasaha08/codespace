/**************************************************************************
Name:           Dhruba Saha
Roll No:        B.Sc(Sem-IV)-04
Program Name:   Write a program in C to sort a given list of n numbers in
                descending order using the bubble sort method, recursively.
Date:           30/06/2022
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *arr, int n);
void input(int *arr, int n);
void output(int *arr, int n);

void main()
{
    int n, *arr;

    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    arr = (int *)calloc(n, sizeof(int));

    input(arr, n);

    printf("Before bubble sort:\n");
    output(arr, n);

    bubbleSort(arr, n);

    printf("After bubble sort:\n");
    output(arr, n);

    free(arr);
}

void bubbleSort(int *arr, int n)
{
    if (n == 1)
        return;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        bubbleSort(arr, n - 1);
    }
}

void input(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
}

void output(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
Output:

Enter the number of elements in the array:
4
Enter the element 1:
20
Enter the element 2:
10
Enter the element 3:
5
Enter the element 4:
30
Before bubble sort:
20 10 5 30 
After bubble sort:
30 20 10 5 

*/