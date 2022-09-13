/***********************************************************
Name: Dhruba Saha
Program: Find the average of n numbers without using arrays.
Program No. 022
Date:2020.12.12
***********************************************************/

#include<stdio.h>

int main()
{
	int number,limit,sum=0,temp;
	float average;
	printf("Enter the limit\n");
	scanf("%d",&limit);
	temp=limit;
	printf("Enter %d numbers:\n",limit);
	while(limit)
	     {
	     scanf("%d",&number);
	     sum=sum+number;
	     limit--;
	     }
	average=sum/(float)temp;
	printf("Sum=%d\n",sum);
	printf("Average=%f\n",average);
	return 0;
}