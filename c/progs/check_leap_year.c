/************************************************
Name: Dhruba Saha
Program: Check whether a year is leap year or not.
Program No. 011
Date: 2020.12.04
*************************************************/

#include<stdio.h>

int main()
{
	int n;

	printf("Enter the year \n");
	scanf("%d",&n);

	if(n%400==0)
		printf("%d is a leap year.\n",n);
	else if(n%100==0)
		printf("%d is not a leap year.\n",n);
	     else if(n%4==0)
		     printf("%d is a leap year.\n",n);
	          else
			printf("%d is not a leap year.\n",n);
	return 0;
}