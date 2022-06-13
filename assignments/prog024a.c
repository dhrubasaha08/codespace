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
void printArr(int *arr, int n);
void heapify(int *arr, int n, int i);
void heapSort(int *arr, int n);


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

/*
Output:

*/