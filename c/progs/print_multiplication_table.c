/*********************************************
Name: Dhruba Saha
Program: Print multiplication table for 1 to n.
Program No. 039
Date:2021.01.20
**********************************************/

#include<stdio.h>

int main()
{
	int num,rem,sum=0;

	printf("Enter a Number:\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of Digits of the Number:%d\n",sum);
	return 0;
}