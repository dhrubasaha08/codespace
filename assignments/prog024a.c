/*********************************************************************************************
Name:           Dhruba Saha
Roll No:        B.Sc(Sem-IV)-04
Program No:     24
Program Name:   Write a C program to sort (ascending) a list of elements through a binary heap.
Date:           13/06/2022
**********************************************************************************************/


#include <stdio.h>
#include <stdlib.h>


void inputArr(int *arr, int n);
void maxHeapify(int *arr, int n, int i);
void buildMaxHeap(int *arr, int n);
void printArr(int *arr, int n);

void main()
{
    int n, *arr;

    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int) * n);


    inputArr(arr, n);

    printf("Before heap sort\n");

    printArr(arr, n);

    heapSort(arr, n);

    printf("After heap sort\n");

    printArr(arr, n);

    free(arr);
}


void inputArr(int *arr, int n)
{
    int i;

    printf("Enter the elements:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}


void printArr(int *arr, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}


void heapify(int *arr, int n, int i)
{
    int largest, left, right;

    left = 2 * i + 1;
    right = 2 * i + 2;

    if (left < n && arr[left] > arr[i])
    {
        largest = left;
    }
    else
    {
        largest = i;
    }

    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}


void heapSort(int *arr, int n)
{
    int i;

    for (i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    for (i = n - 1; i >= 0; i--)
    {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}

/*
Output:

*/