/****************************************************************************************************************************
Name: Dhruba Saha
Program: Find sum of following series where n is an integer and x is a real number: e)1 + x - x^2/2! + x^3/3! - ..(+/-) x^n/n!
Program No. 027E
Date: 2021.01.20
*****************************************************************************************************************************/

#include<stdio.h>
#include<math.h>

float series(float x,int n);

int main()
{
	int n;
	float x;

	printf("Input the value of x:\n");
	scanf("%f",&x);
	printf("Input the value of n:\n");
	scanf("%d",&n);
	if(n>3)
		printf("1+%.0f-%.0f^2/2!+...(+/-)%.0f^%d/%d!=%f\n",x,x,x,n,n,(series(x,n)));
	else if(n==3)
		printf("1+%.0f-%.0f^2/2!+%.0f^3/3!=%f\n",x,x,x,(series(x,n)));
	else if(n==2)
		printf("1+%.0f-%.0f^2/2!=%f\n",x,x,(series(x,n)));
	else if(n==1)
		printf("1+%.0f=%f\n",x,(series(x,n)));
	return 0;
}

float series(float x,int n)
{ 
	int i,sum=0;
	float term=1, termvalue = 1;
	for(i=1;i<=n;i++)
	{
	termvalue*=-(x/i);
	term = termvalue*(-1);
	sum=sum+term;
	}
	sum+=1;
	return sum;
}