/******************************************************************************************
Name:           Dhruba Saha
Roll No:        B.Sc(Sem-IV)-04
Program No:     2
Program Name:   Write a C program to subtract one matrix from another by iterative approach.
Date:           05/05/2022
*******************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int **allocMem();
int inputMat();
int subtractMat();
void outputMat();

void main()
{
    int m, n, **a, **b, **c;

    printf("Enter the number of rows and columns of matrices:\n");
    scanf("%d%d", &m, &n);

    a = allocMem(m, n);
    b = allocMem(m, n);
    c = allocMem(m, n);

    printf("Enter the elements of first matrix:\n");
    inputMat(a, m, n);

    printf("Enter the elements of second matrix:\n");
    inputMat(b, m, n);

    printf("Matrix A:\n");
    outputMat(a, m, n);

    printf("Matrix B:\n");
    outputMat(b, m, n);

    subtractMat(a, b, c, m, n);

    printf("The subtraction of the two matrices:\n");
    outputMat(c, m, n);
}

int **allocMem(int m, int n)
{
    int **x, i;
    x = (int **)calloc(m, sizeof(int *));
    for (i = 0; i < m; i++)
    {
        x[i] = (int *)calloc(n, sizeof(int));
    }
    return x;
}

int inputMat(int **a, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Element %d, %d:\n", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
}

int subtractMat(int **a, int **b, int **c, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

void outputMat(int **a, int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

/*
Output:
Enter the number of rows and columns of matrices:
2 2
Enter the elements of first matrix:
Element 1, 1:
4
Element 1, 2:
4
Element 2, 1:
4
Element 2, 2:
4
Enter the elements of second matrix:
Element 1, 1:
1
Element 1, 2:
1
Element 2, 1:
1
Element 2, 2:
1
Matrix A:
4 4 
4 4 
Matrix B:
1 1 
1 1 
The subtraction of the two matrices:
3 3 
3 3 
*/