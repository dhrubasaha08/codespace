/***********************************************************************
Name: Dhruba Saha
Program: Find the roots of quadratic equation and discuss their nature.
Program No. 015
Date:2020.12.16
***********************************************************************/

#include<stdio.h>
#include<math.h>

int main()
{
	float a,b,c,d,x,x1,x2;
	
	printf("Enter the co-efficient of X^2:\n");
	scanf("%f",&a);
	printf("Enter the co-efficient of X:\n");
	scanf("%f",&b);
	printf("Enter the constant:\n");
	scanf("%f",&c);
	d=sqrt((b*b)-(4*a*c));
	if(d<0)
		printf("The roots are imaginary.\n");
	else if(d>0)
		{
		printf("The roots are unequal.\n");
		x1=(-b+b)/(2*a);
		x2=(-b-d)/(2*a);
		printf("Root1:%f\n",x1);
		printf("Root2:%f\n",x2);
		}
	else
		{
		printf("The roots are equal.\n");
		x=-b/(2*a);
		printf("Root:%f\n",x);
		}
	return 0;
}