/***************************************
Name: Dhruba Saha
Program: Find the factorial of a number.
Program No. 021
Date:2020.12.10
***************************************/

#include<stdio.h>

int main()
{
	int number,i;
	long long unsigned factorial=1;		//Using long long unsigned interger datatype.

	printf("Enter the number:\n");
	scanf("%d",&number);
	if (number<0)
		printf("Factorial of a negative number doesn't exist.\n");	//Factorial function is defined for positive integers only.
	else
	{
		for(i=1;i<=number;++i)
			factorial*=i;
		printf("Factorial of %d=%llu\n",number,factorial);
	}
	return 0;
}