/***************************************************************************
Name: Dhruba Saha
Program: Write a program to subtract one integer number from another integer.
Program No. 003
Date: 2020.12.04
****************************************************************************/

#include<stdio.h>

int main()
{
	int minuend,subtrahend,difference;

	printf("Enter the value of minuend and subtrahend respectively \n");
	scanf("%d %d",&minuend,&subtrahend);
	difference=(minuend-subtrahend);
	printf("Difference=Minuend-Subtrahend=%d-%d=%d.\n",minuend,subtrahend,difference);
	return 0;
}
