/************************************************************
Name: Dhruba Saha
Program: Print the pattern by taking number of lines as input.
Program No. 453
Date: 18/01/21
*************************************************************/


#include<stdio.h>

int main()
{
	int n,i,j;
	printf("Enter the number of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
			printf("*");
		printf("\n");
	}
	return 0;
}