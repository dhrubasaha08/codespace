/********************************************************************************************************
Name: Dhruba Saha
Program:Find sum of following series where n is an integer: f)1-(1/2^2)+(1/3^3)-(1/4^4)+......(+/-)(1/n^n)
Program No. 026F
Date: 2021.01.13
*********************************************************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
	int i,n;
	float sum=0;

	printf("Enter the value of n:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
			sum+=1./pow(i,i);
		else if(i%2==0)
			sum-=1./pow(i,i);
	}
	printf("Sum of 1-(1/2^2)+(1/3^3)-(1/4^4)+......(+/-)(1/%d^%d)=%f\n",n,n,sum);
	return 0;
}
