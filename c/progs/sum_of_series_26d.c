/****************************************************************************************************
Name: Dhruba Saha
Program:Find sum of following series where n is an integer: d)1-(1/2^2)+(1/3^2)-(1/4^2)+......+(1/n^2)
Program No. 026D
Date: 2021.01.13
*****************************************************************************************************/

#include<stdio.h>

int main()
{
	int i,n;
	float sum=0;

	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			sum+=1./(i*i);
		else if(i%2==0)
			sum-=1./(i*i);
	}
	printf("Sum of 1-(1/2^2)+(1/3^2)-(1/4^2)+......+(1/%d^2)=%f\n",n,sum);
	return 0;
}
