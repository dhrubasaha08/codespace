/*****************************************************************************************
Name: Dhruba Saha
Program:Find sum of following series where n is an integer: b)1-1/2+1/3-1/4+......(+/-)1/n
Program No. 026B
Date: 2021.01.13
******************************************************************************************/

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
			sum+=1./i;
		else if(i%2==0)
			sum-=1./i;
	}
	printf("Sum of 1-1/2+1/3-1/4+......(+/-)1/%d=%f\n",n,sum);
	return 0;
}
