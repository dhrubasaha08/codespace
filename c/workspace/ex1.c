// write a program to find transpose of a matrix using static array using function

#include <stdio.h>

void print_matrix();

void main()
{
    int m, n, i, j;
    printf("Enter number of rows and columns of the matrix respectively:");
    scanf("%d %d", &m, &n);
    float Matrix[m][n], t;
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("Enter the value of element(%d%d): ", (i + 1), (j + 1));
            scanf("%f", &Matrix[i][j]);
        }
    }
    print_matrix((float **)Matrix, m, n);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            t = Matrix[i][j];
            Matrix[i][j] = Matrix[j][i];
            Matrix[j][i] = t;
        }
    }
    printf("\n\nTranspose of the matrix is:\n");
    print_matrix((float *)Matrix, m, n);
}

void print_matrix(float *A, int x, int y)
{
    int i, j;
    for (i = 0; i < x; i++)
    {
        printf("\n");
        for (j = 0; j < y; j++)
        {
            printf("%.2f ", *(A + i * y) + j);
        }
    }
    printf("\n");
}