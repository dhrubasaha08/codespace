/***************************************
Name: Dhruba Saha
Program: Find first n composite numbers.
Program No. 020
Date:2020.12.04
***************************************/

#include<stdio.h>

int main()
{
	int i,j,n,composite=0;

	printf("Enter the number of terms:");
	scanf("%d",&n);
	printf("Composite Numbers:");
	for(i=2;i<=n;i++)
	{
		composite=0;
		for(j=i-1;j>1;j--)
		{
			if(i%j==0)
			composite=1;
		}
		if(composite==1)
			printf("%d\t",i);
	}
	printf("\n");
	return 0;
} 