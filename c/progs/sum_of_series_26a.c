/************************************************************************************
Name: Dhruba Saha
Program:Find sum of following series where n is an integer: a)1 + 1/2 + 1/3 + ..+ 1/n
Program No. 026A
Date: 2021.01.13
*************************************************************************************/

#include <stdio.h>

float sum(int n);

int main()
{
	int i;
	float n;

	printf("Enter an integer:\n");
	scanf("%f",&n);
	printf("Sum of series : 1");
	for(i=2;i<=n;i++)
	printf(" + 1/%d",i);
	printf(" = %f\n",n);
	return 0;
}

float sum(int n)
{
	int i;
	float s=0.0;

	for(i=1;i<=n;i++)
		s=s+1./i;
	return s;
}