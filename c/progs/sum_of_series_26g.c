/*********************************************************************************************
Name: Dhruba Saha
Program: Find sum of following series where n is an integer: g)1+(1/2!)+(1/3!)+........+(1/n!)
Program No. 026G
Date: 2021.01.15
**********************************************************************************************/

#include<stdio.h>

int main()
{
	int n,i,j,prod=1;
	float sum=0.0;
	printf("Enter the value of n:\t");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		prod=1;
		for(j=1;j<=i;j++)
		{
			prod=prod*j;
			sum+=(1./prod);
		}
	}
	printf("Sum of the following series 1+(1/2!)+(1/3!)+........+(1/%d!)=%f\n",n,sum);
	return 0;
}
