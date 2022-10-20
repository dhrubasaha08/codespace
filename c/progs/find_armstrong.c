/***********************************************
Name: Dhruba Saha
Program: Find all Armstrong numbers from 1 to n.
Program No. 036
Date: 2021.01.15
***********************************************/

#include<stdio.h>

int armstrong(int number);
int main()
{
	int i,terms;

	printf("Enter number of terms:\n");			//Input number from user
	scanf("%d",&terms);
	printf("Armstrong numbers from 1 to %d:\n",terms);
	for(i=1;i<=terms;i++)
	{
		if(armstrong(i))
			printf("%d\t",i);
	}
	printf("\n");
	return 0;
}

int armstrong(int number)					//function to check Armstrong Number
{
	int tempNumber,rem,sum;
	tempNumber=number;

	sum=0;
	while(tempNumber!=0)
	{
	rem=tempNumber%10;
	sum=sum+(rem*rem*rem);
	tempNumber/=10;
	}  
	if(sum==number)						//checking number is Armstrong or not
		return 1;
	else
		return 0;
}