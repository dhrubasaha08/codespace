/*****************************************
Name: Dhruba Saha
Program: Weather the number is even or odd
Program No. 008
Date: 2020.12.04
******************************************/

#include<stdio.h>

int main()
{
	int n;

	printf("Enter the number\n");
	scanf("%d",&n);
	if(n%2==0)
	   printf("%d is even number.\n",n);
	else
	   printf("%d is odd number.\n",n);
	return 0;
}