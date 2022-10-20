/***************************************************
Name: Dhruba Saha
Program: Check whether a number is armstrong or not.
Program No. 035
Date: 2020.12.07
***************************************************/

#include<stdio.h>  

int main()    
{    
	int number,r,sum=0,temp;

	printf("Enter the number\n");
	scanf("%d",&number);
	temp=number;
	while(number>0)
		{
		r=number%10;
		sum=sum+(r*r*r);
		number=number/10;
		}
	if(temp==sum)
	  printf("%d is an armstrong number\n",sum);
	else
	  printf("%d is not an armstrong number\n",sum);
}   