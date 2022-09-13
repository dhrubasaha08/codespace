/********************************************************************************************************************
Name: Dhruba Saha
Program: Find sum of the following series where n is an integer and x is a real number: b)1+x+(x^2/2!)+......+(x^n/n!)
Program No. 027B
Date: 2021.01.13
********************************************************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{	
	int n,i,j,k=1;
	float x,sum=1,prod=1;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the value of x:\n");
	scanf("%f",&x);
	for(i=1;i<=n-1;i++)
	{
		prod=1;
		for(j=1;j<=i;j++)
		prod=prod*j;
		sum+=(float)pow(x,k)/prod;
		k++;
	}
	printf("Sum of the following series 1+%.0f+(%.0f^2/2!)+......+(%.0f^%d/%d!)=%f\n",x,x,x,n,n,sum);
	return 0;
}
