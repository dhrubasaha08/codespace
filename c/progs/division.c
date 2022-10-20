/*****************************************************************
Name: Dhruba Saha
Program: Write a program to divide one integer by another integer.
Program No. 005
Date: 2020.12.04
*****************************************************************/

#include<stdio.h>

int main()
{
	int divident,divisor,quotient,remainder;

step1:
	printf("Enter the divident\n");
	scanf("%d",&divident);
	printf("Enter the divisor\n");
	scanf("%d",&divisor);
	if (divisor==0) goto step1;
	{
	quotient=divident/divisor;
	remainder=divident%divisor;
	printf("Divident=%d\tDivisor= %d\tQuotient=%d\tRemainder=%d \n",divident,divisor,quotient,remainder);
	}
	return 0;
}