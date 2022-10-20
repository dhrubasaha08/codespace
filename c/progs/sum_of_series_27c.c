/**********************************************************************************************************************
Name: Dhruba Saha
Program: Find sum of the following series where n is an integer and x is a real number: c)1-(x^2/2!)+......(+/-)(x^n/n!)
Program No. 027C
Date: 2021.01.15
**********************************************************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{	
	int n,i,j,k=2,q,count=1;
	float x,sum=1,prod=1;
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("Enter the value of x:\n");
	scanf("%f",&x);
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=(2*i)-2;j+=2)
		{
			prod=1;
			for(q=1;q<=j;q++)
				prod=prod*q;
		}
		if(count%2==0)
			sum+=(float)pow(x,k)/prod;
		else if(count%2!=0)
			sum-=(float)pow(x,k)/prod;
		k+=2;
		count++;
	}
	printf("Sum of the following series 1-(%.0f^2/2!)+......(+/-)(%.0f^%d/%d!)=%f\n",x,x,n,n,sum);
	return 0;
}
