/*****************************************************************************************************************************
Name: Dhruba Saha
Program: Find sum of following series where n is an integer and x is a real number: e)1 + x - x^2/2! + x^3/3! - ..(+/-) x^n/n!
Program No. 027E
Date: 2021.01.20
*****************************************************************************************************************************/

#include<stdio.h>

float series(int n,float x);

int main()
{
	int n,x;

	printf("Input the value of n:\n");
	scanf("%d",&n);
	printf("Input the value of x:\n");									//Input number
	scanf("%d",&x);
	if(n>3)													//Print Sum series
		printf("Sum of series 1+%d-%d^2/2!+...(+/-)%d^%d/%d!=%g\n",x,x,x,n,n,(series(x,n)));
	else if(n==3)
		printf("Sum of series 1+%d-%d^2/2!+%d^3/3!=%g\n",x,x,x,(series(x,n)));
	else if(n==2)
		printf("Sum of series 1+%d-%d^2/2!=%g\n",x,x,(series(x,n)));
	else if(n==1)
		printf("Sum of series 1+%d=%g\n",x,(series(x,n)));
	return 0;
}

float series(int n,float x)											//Calculate sum
{ 
	int i;
	float term,termvalue=1,sum=0;

	for(i=1;i<=n;i++)
	{
		termvalue*=-(x/i);
		term=termvalue*(-1);
		sum+=term;
	}
	sum+=1;
	return sum;
}