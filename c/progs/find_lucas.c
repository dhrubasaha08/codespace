/************************************
Name: Dhruba Saha
Program: Print first n lucas numbers.
Program No. 032
Date: 2021.01.15
************************************/

#include<stdio.h>

void lucas(int x,int y,int z,int limit);

int main()
{
	int first=2,second=1,third=0;
	int limit;

	printf("Enter the the value of n:\n");
	scanf("%d",&limit);
	printf("First %d lucas number:\n",limit);
	lucas(first,second,third,limit);
	printf("\n");
	return 0;
}

void lucas(int x,int y,int z,int limit)
{
	int count;

	for(count=0;count<limit;count++)
	{
		z=x+y;
		printf("%d\t",z);      
		x=y;      
		y=z;
	}
}
