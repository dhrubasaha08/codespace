/***********************************************
Name: Dhruba Saha
Program: Find the sum of first n natural numbers.
Program No. 014
Date: 2020.12.06
************************************************/

#include<stdio.h>
 
int main()
{
	int i,number,sum=0;

	printf("Enter the number\n");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	  sum+=i;
	printf("Sum of first %d natural numbers=%d\n",number,sum);
}