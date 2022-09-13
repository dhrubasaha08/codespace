/**************************************************
Name: Dhruba Saha
Program: Write a program to add two integer numbers.
Program No. 002
Date: 2020.12.04
***************************************************/

#include<stdio.h>

int main()
{
	int a,b,c;

	printf("Enter the value of the numbers\n");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("The Sum of two number is %d and %d is %d.\n",a,b,c);
	if(a>b)
	{
	int p;
	scanf("%d",&p);
	printf("p=%d\n",p);
	}
	//printf("*********   p=%d\n",p);
	float p;
	scanf("%f",&p);
	printf("*********   p=%f\n",p);
	return 0;
}