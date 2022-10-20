/*****************************************************************************************************
Name: Dhruba Saha
Program:Find sum of following series where n is an integer: e)1+(1/2^3)+(1/3^3)+(1/4^3)+......+(1/n^3)
Program No. 026E
Date: 2021.01.13
******************************************************************************************************/

#include<stdio.h>

int main()
{
	int i,n;
	float sum=0;

	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		sum+=1./(i*i*i);
	printf("Sum of 1+(1/2^3)+(1/3^3)+(1/4^3)+......+(1/%d^3)=%f\n",n,sum);
	return 0;
}
