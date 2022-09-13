/*****************************************************************************************************************
Name: Dhruba Saha
Program: Find sum of the following series where n is an integer and x is a real number: a)1+x+(x/2!)+......+(x/n!)
Program No. 027A
Date: 2021.01.13
*****************************************************************************************************************/

#include<stdio.h>

int main()
{	
	int n,i,j;
	float x,sum=1.,prod=1.;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the value of x:\n");
	scanf("%f",&x);
	for(i=1;i<=n;i++)
	{
		prod=1;
		for(j=1;j<=i;j++)
		{
			prod=prod*j;
			sum+=x/prod;
		}
	}
	printf("Sum of the following series 1+%.0f+(%.0f/2!)+......+(%.0f/%d!)=%f\n",x,x,x,n,sum);
	return 0;
}
