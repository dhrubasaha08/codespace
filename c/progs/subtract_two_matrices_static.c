/*********************************************************************
Name:Dhruba Saha
Program Name: Addition of two matrices using subfunction and 2D array
Date : 12/02/2021
*********************************************************************/

#include<stdio.h>

int row,col;

void read_matrix(int matrix_N[row][col],int row,int col);
void add_matrix(int matrix_A[row][col],int matrix_B[row][col],int matrix_sum[row][col],int row,int col);
void print_matrix(int matrix_P[row][col],int row,int col);

void main()
{
	int matrix_A[row][col],matrix_B[row][col],matrix_sum[row][col];

start:	printf("Enter the number of rows:\n");
	scanf("%d",&row);
	printf("Enter the number of columns:\n");
	scanf("%d",&col);
	if(row<0 || col<0)
	{
		printf("\n\tWrong data entry!\nInput the numbers of row and column again\n\n");
		goto start;
	}
	read_matrix(matrix_A,row,col);
	read_matrix(matrix_B,row,col);
	add_matrix(matrix_A,matrix_B,matrix_sum,row,col);
	print_matrix(matrix_sum,row,col);
}

void read_matrix(int matrix_N[row][col],int row,int col)
{
	int i,j;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("Enter element %d %d:",i,j);
			scanf("%d",&matrix_N[i][j]);
		}
	}
}

void add_matrix(int matrix_A[row][col],int matrix_B[row][col],int matrix_sum[row][col],int row,int col)
{
	int i,j;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			matrix_sum[row][col]=(matrix_A[row][col]+matrix_B[row][col]);
		}
	}
}

void print_matrix(int matrix_P[row][col],int row,int col)
{
	int i,j;
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("%d ",matrix_P[row][col]);
		}
		printf("\n");
	}
}
